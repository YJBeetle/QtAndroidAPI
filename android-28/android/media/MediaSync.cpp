#include "./AudioTrack.hpp"
#include "./MediaSync_Callback.hpp"
#include "./MediaTimestamp.hpp"
#include "./PlaybackParams.hpp"
#include "./SyncParams.hpp"
#include "../os/Handler.hpp"
#include "../view/Surface.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaSync.hpp"

namespace android::media
{
	// Fields
	jint MediaSync::MEDIASYNC_ERROR_AUDIOTRACK_FAIL()
	{
		return getStaticField<jint>(
			"android.media.MediaSync",
			"MEDIASYNC_ERROR_AUDIOTRACK_FAIL"
		);
	}
	jint MediaSync::MEDIASYNC_ERROR_SURFACE_FAIL()
	{
		return getStaticField<jint>(
			"android.media.MediaSync",
			"MEDIASYNC_ERROR_SURFACE_FAIL"
		);
	}
	
	// QAndroidJniObject forward
	MediaSync::MediaSync(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaSync::MediaSync()
		: JObject(
			"android.media.MediaSync",
			"()V"
		) {}
	
	// Methods
	android::view::Surface MediaSync::createInputSurface() const
	{
		return callObjectMethod(
			"createInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	void MediaSync::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	android::media::PlaybackParams MediaSync::getPlaybackParams() const
	{
		return callObjectMethod(
			"getPlaybackParams",
			"()Landroid/media/PlaybackParams;"
		);
	}
	android::media::SyncParams MediaSync::getSyncParams() const
	{
		return callObjectMethod(
			"getSyncParams",
			"()Landroid/media/SyncParams;"
		);
	}
	android::media::MediaTimestamp MediaSync::getTimestamp() const
	{
		return callObjectMethod(
			"getTimestamp",
			"()Landroid/media/MediaTimestamp;"
		);
	}
	void MediaSync::queueAudio(java::nio::ByteBuffer arg0, jint arg1, jlong arg2) const
	{
		callMethod<void>(
			"queueAudio",
			"(Ljava/nio/ByteBuffer;IJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void MediaSync::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaSync::setAudioTrack(android::media::AudioTrack arg0) const
	{
		callMethod<void>(
			"setAudioTrack",
			"(Landroid/media/AudioTrack;)V",
			arg0.object()
		);
	}
	void MediaSync::setCallback(android::media::MediaSync_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/MediaSync$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSync::setOnErrorListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaSync$OnErrorListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSync::setPlaybackParams(android::media::PlaybackParams arg0) const
	{
		callMethod<void>(
			"setPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.object()
		);
	}
	void MediaSync::setSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void MediaSync::setSyncParams(android::media::SyncParams arg0) const
	{
		callMethod<void>(
			"setSyncParams",
			"(Landroid/media/SyncParams;)V",
			arg0.object()
		);
	}
} // namespace android::media

