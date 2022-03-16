#pragma once

#include "../content/Context.def.hpp"
#include "./MediaController2_ControllerCallback.def.hpp"
#include "./Session2Command.def.hpp"
#include "./Session2Token.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JObject.hpp"
#include "./MediaController2.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MediaController2::cancelSessionCommand(JObject arg0) const
	{
		callMethod<void>(
			"cancelSessionCommand",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void MediaController2::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::media::Session2Token MediaController2::getConnectedToken() const
	{
		return callObjectMethod(
			"getConnectedToken",
			"()Landroid/media/Session2Token;"
		);
	}
	inline jboolean MediaController2::isPlaybackActive() const
	{
		return callMethod<jboolean>(
			"isPlaybackActive",
			"()Z"
		);
	}
	inline JObject MediaController2::sendSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1) const
	{
		return callObjectMethod(
			"sendSessionCommand",
			"(Landroid/media/Session2Command;Landroid/os/Bundle;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

// Base class headers

