#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}

namespace android::media
{
	class MediaScannerConnection : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaScannerConnection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaScannerConnection(QAndroidJniObject obj);
		
		// Constructors
		MediaScannerConnection(android::content::Context arg0, JObject arg1);
		
		// Methods
		static void scanFile(android::content::Context arg0, jarray arg1, jarray arg2, JObject arg3);
		void connect();
		void disconnect();
		jboolean isConnected();
		void onServiceConnected(android::content::ComponentName arg0, JObject arg1);
		void onServiceDisconnected(android::content::ComponentName arg0);
		void scanFile(jstring arg0, jstring arg1);
	};
} // namespace android::media

