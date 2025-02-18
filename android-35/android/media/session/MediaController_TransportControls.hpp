#pragma once

#include "../Rating.def.hpp"
#include "./MediaController.def.hpp"
#include "./PlaybackState_CustomAction.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./MediaController_TransportControls.def.hpp"

namespace android::media::session
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MediaController_TransportControls::fastForward() const
	{
		callMethod<void>(
			"fastForward",
			"()V"
		);
	}
	inline void MediaController_TransportControls::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	inline void MediaController_TransportControls::play() const
	{
		callMethod<void>(
			"play",
			"()V"
		);
	}
	inline void MediaController_TransportControls::playFromMediaId(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"playFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaController_TransportControls::playFromSearch(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"playFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaController_TransportControls::playFromUri(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"playFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaController_TransportControls::prepare() const
	{
		callMethod<void>(
			"prepare",
			"()V"
		);
	}
	inline void MediaController_TransportControls::prepareFromMediaId(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"prepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaController_TransportControls::prepareFromSearch(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"prepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaController_TransportControls::prepareFromUri(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"prepareFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaController_TransportControls::rewind() const
	{
		callMethod<void>(
			"rewind",
			"()V"
		);
	}
	inline void MediaController_TransportControls::seekTo(jlong arg0) const
	{
		callMethod<void>(
			"seekTo",
			"(J)V",
			arg0
		);
	}
	inline void MediaController_TransportControls::sendCustomAction(android::media::session::PlaybackState_CustomAction arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendCustomAction",
			"(Landroid/media/session/PlaybackState$CustomAction;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaController_TransportControls::sendCustomAction(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaController_TransportControls::setPlaybackSpeed(jfloat arg0) const
	{
		callMethod<void>(
			"setPlaybackSpeed",
			"(F)V",
			arg0
		);
	}
	inline void MediaController_TransportControls::setRating(android::media::Rating arg0) const
	{
		callMethod<void>(
			"setRating",
			"(Landroid/media/Rating;)V",
			arg0.object()
		);
	}
	inline void MediaController_TransportControls::skipToNext() const
	{
		callMethod<void>(
			"skipToNext",
			"()V"
		);
	}
	inline void MediaController_TransportControls::skipToPrevious() const
	{
		callMethod<void>(
			"skipToPrevious",
			"()V"
		);
	}
	inline void MediaController_TransportControls::skipToQueueItem(jlong arg0) const
	{
		callMethod<void>(
			"skipToQueueItem",
			"(J)V",
			arg0
		);
	}
	inline void MediaController_TransportControls::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media::session

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::session;
#endif
