#pragma once

#include "./MediaSession2_ControllerInfo.def.hpp"
#include "./Session2Command.def.hpp"
#include "./Session2Token.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaSession2.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MediaSession2::broadcastSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"broadcastSessionCommand",
			"(Landroid/media/Session2Command;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaSession2::cancelSessionCommand(android::media::MediaSession2_ControllerInfo arg0, JObject arg1) const
	{
		callMethod<void>(
			"cancelSessionCommand",
			"(Landroid/media/MediaSession2$ControllerInfo;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline void MediaSession2::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JObject MediaSession2::getConnectedControllers() const
	{
		return callObjectMethod(
			"getConnectedControllers",
			"()Ljava/util/List;"
		);
	}
	inline JString MediaSession2::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline android::media::Session2Token MediaSession2::getToken() const
	{
		return callObjectMethod(
			"getToken",
			"()Landroid/media/Session2Token;"
		);
	}
	inline jboolean MediaSession2::isPlaybackActive() const
	{
		return callMethod<jboolean>(
			"isPlaybackActive",
			"()Z"
		);
	}
	inline JObject MediaSession2::sendSessionCommand(android::media::MediaSession2_ControllerInfo arg0, android::media::Session2Command arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"sendSessionCommand",
			"(Landroid/media/MediaSession2$ControllerInfo;Landroid/media/Session2Command;Landroid/os/Bundle;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MediaSession2::setPlaybackActive(jboolean arg0) const
	{
		callMethod<void>(
			"setPlaybackActive",
			"(Z)V",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
