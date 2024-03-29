#pragma once

#include "./MediaSession2.def.hpp"
#include "./MediaSession2_ControllerInfo.def.hpp"
#include "./Session2Command.def.hpp"
#include "./Session2Command_Result.def.hpp"
#include "./Session2CommandGroup.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JObject.hpp"
#include "./MediaSession2_SessionCallback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaSession2_SessionCallback::MediaSession2_SessionCallback()
		: JObject(
			"android.media.MediaSession2$SessionCallback",
			"()V"
		) {}
	
	// Methods
	inline void MediaSession2_SessionCallback::onCommandResult(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1, JObject arg2, android::media::Session2Command arg3, android::media::Session2Command_Result arg4) const
	{
		callMethod<void>(
			"onCommandResult",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;Ljava/lang/Object;Landroid/media/Session2Command;Landroid/media/Session2Command$Result;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jobject>(),
			arg3.object(),
			arg4.object()
		);
	}
	inline android::media::Session2CommandGroup MediaSession2_SessionCallback::onConnect(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1) const
	{
		return callObjectMethod(
			"onConnect",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;)Landroid/media/Session2CommandGroup;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaSession2_SessionCallback::onDisconnected(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1) const
	{
		callMethod<void>(
			"onDisconnected",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaSession2_SessionCallback::onPostConnect(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1) const
	{
		callMethod<void>(
			"onPostConnect",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::media::Session2Command_Result MediaSession2_SessionCallback::onSessionCommand(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1, android::media::Session2Command arg2, android::os::Bundle arg3) const
	{
		return callObjectMethod(
			"onSessionCommand",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;Landroid/media/Session2Command;Landroid/os/Bundle;)Landroid/media/Session2Command$Result;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
