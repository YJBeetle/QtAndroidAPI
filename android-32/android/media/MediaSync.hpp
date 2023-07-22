#pragma once

#include "./AudioTrack.def.hpp"
#include "./MediaSync_Callback.def.hpp"
#include "./MediaTimestamp.def.hpp"
#include "./PlaybackParams.def.hpp"
#include "./SyncParams.def.hpp"
#include "../os/Handler.def.hpp"
#include "../view/Surface.def.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./MediaSync.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaSync::MEDIASYNC_ERROR_AUDIOTRACK_FAIL()
	{
		return getStaticField<jint>(
			"android.media.MediaSync",
			"MEDIASYNC_ERROR_AUDIOTRACK_FAIL"
		);
	}
	inline jint MediaSync::MEDIASYNC_ERROR_SURFACE_FAIL()
	{
		return getStaticField<jint>(
			"android.media.MediaSync",
			"MEDIASYNC_ERROR_SURFACE_FAIL"
		);
	}
	
	// Constructors
	inline MediaSync::MediaSync()
		: JObject(
			"android.media.MediaSync",
			"()V"
		) {}
	
	// Methods
	inline android::view::Surface MediaSync::createInputSurface() const
	{
		return callObjectMethod(
			"createInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	inline void MediaSync::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline android::media::PlaybackParams MediaSync::getPlaybackParams() const
	{
		return callObjectMethod(
			"getPlaybackParams",
			"()Landroid/media/PlaybackParams;"
		);
	}
	inline android::media::SyncParams MediaSync::getSyncParams() const
	{
		return callObjectMethod(
			"getSyncParams",
			"()Landroid/media/SyncParams;"
		);
	}
	inline android::media::MediaTimestamp MediaSync::getTimestamp() const
	{
		return callObjectMethod(
			"getTimestamp",
			"()Landroid/media/MediaTimestamp;"
		);
	}
	inline void MediaSync::queueAudio(java::nio::ByteBuffer arg0, jint arg1, jlong arg2) const
	{
		callMethod<void>(
			"queueAudio",
			"(Ljava/nio/ByteBuffer;IJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void MediaSync::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void MediaSync::setAudioTrack(android::media::AudioTrack arg0) const
	{
		callMethod<void>(
			"setAudioTrack",
			"(Landroid/media/AudioTrack;)V",
			arg0.object()
		);
	}
	inline void MediaSync::setCallback(android::media::MediaSync_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/MediaSync$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaSync::setOnErrorListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaSync$OnErrorListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaSync::setPlaybackParams(android::media::PlaybackParams arg0) const
	{
		callMethod<void>(
			"setPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.object()
		);
	}
	inline void MediaSync::setSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void MediaSync::setSyncParams(android::media::SyncParams arg0) const
	{
		callMethod<void>(
			"setSyncParams",
			"(Landroid/media/SyncParams;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
