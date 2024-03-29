#pragma once

#include "./MediaController2.def.hpp"
#include "./Session2Command.def.hpp"
#include "./Session2Command_Result.def.hpp"
#include "./Session2CommandGroup.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JObject.hpp"
#include "./MediaController2_ControllerCallback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaController2_ControllerCallback::MediaController2_ControllerCallback()
		: JObject(
			"android.media.MediaController2$ControllerCallback",
			"()V"
		) {}
	
	// Methods
	inline void MediaController2_ControllerCallback::onCommandResult(android::media::MediaController2 arg0, JObject arg1, android::media::Session2Command arg2, android::media::Session2Command_Result arg3) const
	{
		callMethod<void>(
			"onCommandResult",
			"(Landroid/media/MediaController2;Ljava/lang/Object;Landroid/media/Session2Command;Landroid/media/Session2Command$Result;)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void MediaController2_ControllerCallback::onConnected(android::media::MediaController2 arg0, android::media::Session2CommandGroup arg1) const
	{
		callMethod<void>(
			"onConnected",
			"(Landroid/media/MediaController2;Landroid/media/Session2CommandGroup;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaController2_ControllerCallback::onDisconnected(android::media::MediaController2 arg0) const
	{
		callMethod<void>(
			"onDisconnected",
			"(Landroid/media/MediaController2;)V",
			arg0.object()
		);
	}
	inline void MediaController2_ControllerCallback::onPlaybackActiveChanged(android::media::MediaController2 arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onPlaybackActiveChanged",
			"(Landroid/media/MediaController2;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline android::media::Session2Command_Result MediaController2_ControllerCallback::onSessionCommand(android::media::MediaController2 arg0, android::media::Session2Command arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"onSessionCommand",
			"(Landroid/media/MediaController2;Landroid/media/Session2Command;Landroid/os/Bundle;)Landroid/media/Session2Command$Result;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
