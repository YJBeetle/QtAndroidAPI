#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
class JString;

namespace android::media
{
	class MediaScannerConnection : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaScannerConnection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaScannerConnection(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaScannerConnection(android::content::Context arg0, JObject arg1);
		
		// Methods
		static void scanFile(android::content::Context arg0, JArray arg1, JArray arg2, JObject arg3);
		void connect() const;
		void disconnect() const;
		jboolean isConnected() const;
		void onServiceConnected(android::content::ComponentName arg0, JObject arg1) const;
		void onServiceDisconnected(android::content::ComponentName arg0) const;
		void scanFile(JString arg0, JString arg1) const;
	};
} // namespace android::media

