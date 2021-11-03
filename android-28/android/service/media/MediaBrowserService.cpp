#include "../../../JArray.hpp"
#include "../../content/Intent.hpp"
#include "../../media/session/MediaSession_Token.hpp"
#include "../../media/session/MediaSessionManager_RemoteUserInfo.hpp"
#include "../../os/Bundle.hpp"
#include "./MediaBrowserService_BrowserRoot.hpp"
#include "./MediaBrowserService_Result.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../../JString.hpp"
#include "./MediaBrowserService.hpp"

namespace android::service::media
{
	// Fields
	JString MediaBrowserService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.media.MediaBrowserService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	MediaBrowserService::MediaBrowserService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	MediaBrowserService::MediaBrowserService()
		: android::app::Service(
			"android.service.media.MediaBrowserService",
			"()V"
		) {}
	
	// Methods
	void MediaBrowserService::dump(java::io::FileDescriptor arg0, java::io::PrintWriter arg1, JArray arg2)
	{
		callMethod<void>(
			"dump",
			"(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	android::os::Bundle MediaBrowserService::getBrowserRootHints()
	{
		return callObjectMethod(
			"getBrowserRootHints",
			"()Landroid/os/Bundle;"
		);
	}
	android::media::session::MediaSessionManager_RemoteUserInfo MediaBrowserService::getCurrentBrowserInfo()
	{
		return callObjectMethod(
			"getCurrentBrowserInfo",
			"()Landroid/media/session/MediaSessionManager$RemoteUserInfo;"
		);
	}
	android::media::session::MediaSession_Token MediaBrowserService::getSessionToken()
	{
		return callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	void MediaBrowserService::notifyChildrenChanged(JString arg0)
	{
		callMethod<void>(
			"notifyChildrenChanged",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void MediaBrowserService::notifyChildrenChanged(JString arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"notifyChildrenChanged",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject MediaBrowserService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void MediaBrowserService::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	android::service::media::MediaBrowserService_BrowserRoot MediaBrowserService::onGetRoot(JString arg0, jint arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"onGetRoot",
			"(Ljava/lang/String;ILandroid/os/Bundle;)Landroid/service/media/MediaBrowserService$BrowserRoot;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	void MediaBrowserService::onLoadChildren(JString arg0, android::service::media::MediaBrowserService_Result arg1)
	{
		callMethod<void>(
			"onLoadChildren",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaBrowserService::onLoadChildren(JString arg0, android::service::media::MediaBrowserService_Result arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"onLoadChildren",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaBrowserService::onLoadItem(JString arg0, android::service::media::MediaBrowserService_Result arg1)
	{
		callMethod<void>(
			"onLoadItem",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaBrowserService::setSessionToken(android::media::session::MediaSession_Token arg0)
	{
		callMethod<void>(
			"setSessionToken",
			"(Landroid/media/session/MediaSession$Token;)V",
			arg0.object()
		);
	}
} // namespace android::service::media

