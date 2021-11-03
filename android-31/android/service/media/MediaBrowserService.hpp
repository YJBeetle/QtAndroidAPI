#pragma once

#include "../../app/Service.hpp"

class JArray;
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
class JString;

namespace android::service::media
{
	class MediaBrowserService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaBrowserService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowserService(QJniObject obj);
		
		// Constructors
		MediaBrowserService();
		
		// Methods
		void dump(java::io::FileDescriptor arg0, java::io::PrintWriter arg1, JArray arg2);
		android::os::Bundle getBrowserRootHints();
		android::media::session::MediaSessionManager_RemoteUserInfo getCurrentBrowserInfo();
		android::media::session::MediaSession_Token getSessionToken();
		void notifyChildrenChanged(JString arg0);
		void notifyChildrenChanged(JString arg0, android::os::Bundle arg1);
		JObject onBind(android::content::Intent arg0);
		void onCreate();
		android::service::media::MediaBrowserService_BrowserRoot onGetRoot(JString arg0, jint arg1, android::os::Bundle arg2);
		void onLoadChildren(JString arg0, android::service::media::MediaBrowserService_Result arg1);
		void onLoadChildren(JString arg0, android::service::media::MediaBrowserService_Result arg1, android::os::Bundle arg2);
		void onLoadItem(JString arg0, android::service::media::MediaBrowserService_Result arg1);
		void setSessionToken(android::media::session::MediaSession_Token arg0);
	};
} // namespace android::service::media

