#pragma once

#include "../../../JArray.hpp"
#include "../../content/Intent.def.hpp"
#include "../../media/session/MediaSession_Token.def.hpp"
#include "../../media/session/MediaSessionManager_RemoteUserInfo.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./MediaBrowserService_BrowserRoot.def.hpp"
#include "./MediaBrowserService_Result.def.hpp"
#include "../../../java/io/FileDescriptor.def.hpp"
#include "../../../java/io/PrintWriter.def.hpp"
#include "../../../JString.hpp"
#include "./MediaBrowserService.def.hpp"

namespace android::service::media
{
	// Fields
	inline JString MediaBrowserService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.media.MediaBrowserService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline MediaBrowserService::MediaBrowserService()
		: android::app::Service(
			"android.service.media.MediaBrowserService",
			"()V"
		) {}
	
	// Methods
	inline void MediaBrowserService::dump(java::io::FileDescriptor arg0, java::io::PrintWriter arg1, JArray arg2) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline android::os::Bundle MediaBrowserService::getBrowserRootHints() const
	{
		return callObjectMethod(
			"getBrowserRootHints",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::media::session::MediaSessionManager_RemoteUserInfo MediaBrowserService::getCurrentBrowserInfo() const
	{
		return callObjectMethod(
			"getCurrentBrowserInfo",
			"()Landroid/media/session/MediaSessionManager$RemoteUserInfo;"
		);
	}
	inline android::media::session::MediaSession_Token MediaBrowserService::getSessionToken() const
	{
		return callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	inline void MediaBrowserService::notifyChildrenChanged(JString arg0) const
	{
		callMethod<void>(
			"notifyChildrenChanged",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaBrowserService::notifyChildrenChanged(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"notifyChildrenChanged",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject MediaBrowserService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void MediaBrowserService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline android::service::media::MediaBrowserService_BrowserRoot MediaBrowserService::onGetRoot(JString arg0, jint arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"onGetRoot",
			"(Ljava/lang/String;ILandroid/os/Bundle;)Landroid/service/media/MediaBrowserService$BrowserRoot;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline void MediaBrowserService::onLoadChildren(JString arg0, android::service::media::MediaBrowserService_Result arg1) const
	{
		callMethod<void>(
			"onLoadChildren",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaBrowserService::onLoadChildren(JString arg0, android::service::media::MediaBrowserService_Result arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onLoadChildren",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MediaBrowserService::onLoadItem(JString arg0, android::service::media::MediaBrowserService_Result arg1) const
	{
		callMethod<void>(
			"onLoadItem",
			"(Ljava/lang/String;Landroid/service/media/MediaBrowserService$Result;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaBrowserService::setSessionToken(android::media::session::MediaSession_Token arg0) const
	{
		callMethod<void>(
			"setSessionToken",
			"(Landroid/media/session/MediaSession$Token;)V",
			arg0.object()
		);
	}
} // namespace android::service::media

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

