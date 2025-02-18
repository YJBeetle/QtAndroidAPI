#pragma once

#include "../app/PendingIntent.def.hpp"
#include "./RemoteControlClient_MetadataEditor.def.hpp"
#include "./session/MediaSession.def.hpp"
#include "../os/Looper.def.hpp"
#include "./RemoteControlClient.def.hpp"

namespace android::media
{
	// Fields
	inline jint RemoteControlClient::FLAG_KEY_MEDIA_FAST_FORWARD()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_FAST_FORWARD"
		);
	}
	inline jint RemoteControlClient::FLAG_KEY_MEDIA_NEXT()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_NEXT"
		);
	}
	inline jint RemoteControlClient::FLAG_KEY_MEDIA_PAUSE()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_PAUSE"
		);
	}
	inline jint RemoteControlClient::FLAG_KEY_MEDIA_PLAY()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_PLAY"
		);
	}
	inline jint RemoteControlClient::FLAG_KEY_MEDIA_PLAY_PAUSE()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_PLAY_PAUSE"
		);
	}
	inline jint RemoteControlClient::FLAG_KEY_MEDIA_POSITION_UPDATE()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_POSITION_UPDATE"
		);
	}
	inline jint RemoteControlClient::FLAG_KEY_MEDIA_PREVIOUS()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_PREVIOUS"
		);
	}
	inline jint RemoteControlClient::FLAG_KEY_MEDIA_RATING()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_RATING"
		);
	}
	inline jint RemoteControlClient::FLAG_KEY_MEDIA_REWIND()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_REWIND"
		);
	}
	inline jint RemoteControlClient::FLAG_KEY_MEDIA_STOP()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_STOP"
		);
	}
	inline jint RemoteControlClient::PLAYSTATE_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_BUFFERING"
		);
	}
	inline jint RemoteControlClient::PLAYSTATE_ERROR()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_ERROR"
		);
	}
	inline jint RemoteControlClient::PLAYSTATE_FAST_FORWARDING()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_FAST_FORWARDING"
		);
	}
	inline jint RemoteControlClient::PLAYSTATE_PAUSED()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_PAUSED"
		);
	}
	inline jint RemoteControlClient::PLAYSTATE_PLAYING()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_PLAYING"
		);
	}
	inline jint RemoteControlClient::PLAYSTATE_REWINDING()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_REWINDING"
		);
	}
	inline jint RemoteControlClient::PLAYSTATE_SKIPPING_BACKWARDS()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_SKIPPING_BACKWARDS"
		);
	}
	inline jint RemoteControlClient::PLAYSTATE_SKIPPING_FORWARDS()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_SKIPPING_FORWARDS"
		);
	}
	inline jint RemoteControlClient::PLAYSTATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_STOPPED"
		);
	}
	
	// Constructors
	inline RemoteControlClient::RemoteControlClient(android::app::PendingIntent arg0)
		: JObject(
			"android.media.RemoteControlClient",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		) {}
	inline RemoteControlClient::RemoteControlClient(android::app::PendingIntent arg0, android::os::Looper arg1)
		: JObject(
			"android.media.RemoteControlClient",
			"(Landroid/app/PendingIntent;Landroid/os/Looper;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::media::RemoteControlClient_MetadataEditor RemoteControlClient::editMetadata(jboolean arg0) const
	{
		return callObjectMethod(
			"editMetadata",
			"(Z)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0
		);
	}
	inline android::media::session::MediaSession RemoteControlClient::getMediaSession() const
	{
		return callObjectMethod(
			"getMediaSession",
			"()Landroid/media/session/MediaSession;"
		);
	}
	inline void RemoteControlClient::setMetadataUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"setMetadataUpdateListener",
			"(Landroid/media/RemoteControlClient$OnMetadataUpdateListener;)V",
			arg0.object()
		);
	}
	inline void RemoteControlClient::setOnGetPlaybackPositionListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnGetPlaybackPositionListener",
			"(Landroid/media/RemoteControlClient$OnGetPlaybackPositionListener;)V",
			arg0.object()
		);
	}
	inline void RemoteControlClient::setPlaybackPositionUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"setPlaybackPositionUpdateListener",
			"(Landroid/media/RemoteControlClient$OnPlaybackPositionUpdateListener;)V",
			arg0.object()
		);
	}
	inline void RemoteControlClient::setPlaybackState(jint arg0) const
	{
		callMethod<void>(
			"setPlaybackState",
			"(I)V",
			arg0
		);
	}
	inline void RemoteControlClient::setPlaybackState(jint arg0, jlong arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setPlaybackState",
			"(IJF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void RemoteControlClient::setTransportControlFlags(jint arg0) const
	{
		callMethod<void>(
			"setTransportControlFlags",
			"(I)V",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
