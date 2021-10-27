#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media::session
{
	class MediaSession_Token;
}
namespace android::media::session
{
	class MediaSessionManager_RemoteUserInfo;
}
namespace android::os
{
	class Bundle;
}
namespace android::service::media
{
	class MediaBrowserService_BrowserRoot;
}
namespace android::service::media
{
	class MediaBrowserService_Result;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::service::media
{
	class MediaBrowserService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		MediaBrowserService(QAndroidJniObject obj);
		// Constructors
		MediaBrowserService();
		
		// Methods
		void dump(java::io::FileDescriptor arg0, java::io::PrintWriter arg1, jarray arg2);
		QAndroidJniObject getBrowserRootHints();
		QAndroidJniObject getCurrentBrowserInfo();
		QAndroidJniObject getSessionToken();
		void notifyChildrenChanged(jstring arg0);
		void notifyChildrenChanged(const QString &arg0);
		void notifyChildrenChanged(jstring arg0, android::os::Bundle arg1);
		void notifyChildrenChanged(const QString &arg0, android::os::Bundle arg1);
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onCreate();
		QAndroidJniObject onGetRoot(jstring arg0, jint arg1, android::os::Bundle arg2);
		QAndroidJniObject onGetRoot(const QString &arg0, jint arg1, android::os::Bundle arg2);
		void onLoadChildren(jstring arg0, android::service::media::MediaBrowserService_Result arg1);
		void onLoadChildren(const QString &arg0, android::service::media::MediaBrowserService_Result arg1);
		void onLoadChildren(jstring arg0, android::service::media::MediaBrowserService_Result arg1, android::os::Bundle arg2);
		void onLoadChildren(const QString &arg0, android::service::media::MediaBrowserService_Result arg1, android::os::Bundle arg2);
		void onLoadItem(jstring arg0, android::service::media::MediaBrowserService_Result arg1);
		void onLoadItem(const QString &arg0, android::service::media::MediaBrowserService_Result arg1);
		void setSessionToken(android::media::session::MediaSession_Token arg0);
	};
} // namespace android::service::media

