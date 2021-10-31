#pragma once

#include "../../__JniBaseClass.hpp"

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
	class MediaScannerConnection : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaScannerConnection(QAndroidJniObject obj);
		// Constructors
		MediaScannerConnection(android::content::Context arg0, __JniBaseClass arg1);
		MediaScannerConnection() = default;
		
		// Methods
		static void scanFile(android::content::Context arg0, jarray arg1, jarray arg2, __JniBaseClass arg3);
		void connect();
		void disconnect();
		jboolean isConnected();
		void onServiceConnected(android::content::ComponentName arg0, __JniBaseClass arg1);
		void onServiceDisconnected(android::content::ComponentName arg0);
		void scanFile(jstring arg0, jstring arg1);
	};
} // namespace android::media

