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
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaSync",
			"MEDIASYNC_ERROR_AUDIOTRACK_FAIL"
		);
	}
	jint MediaSync::MEDIASYNC_ERROR_SURFACE_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaSync",
			"MEDIASYNC_ERROR_SURFACE_FAIL"
		);
	}
	
	MediaSync::MediaSync(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaSync::MediaSync()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSync",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaSync::createInputSurface()
	{
		return __thiz.callObjectMethod(
			"createInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	void MediaSync::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject MediaSync::getPlaybackParams()
	{
		return __thiz.callObjectMethod(
			"getPlaybackParams",
			"()Landroid/media/PlaybackParams;"
		);
	}
	QAndroidJniObject MediaSync::getSyncParams()
	{
		return __thiz.callObjectMethod(
			"getSyncParams",
			"()Landroid/media/SyncParams;"
		);
	}
	QAndroidJniObject MediaSync::getTimestamp()
	{
		return __thiz.callObjectMethod(
			"getTimestamp",
			"()Landroid/media/MediaTimestamp;"
		);
	}
	void MediaSync::queueAudio(java::nio::ByteBuffer arg0, jint arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"queueAudio",
			"(Ljava/nio/ByteBuffer;IJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void MediaSync::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaSync::setAudioTrack(android::media::AudioTrack arg0)
	{
		__thiz.callMethod<void>(
			"setAudioTrack",
			"(Landroid/media/AudioTrack;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSync::setCallback(android::media::MediaSync_Callback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setCallback",
			"(Landroid/media/MediaSync$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSync::setOnErrorListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaSync$OnErrorListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSync::setPlaybackParams(android::media::PlaybackParams arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSync::setSurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSync::setSyncParams(android::media::SyncParams arg0)
	{
		__thiz.callMethod<void>(
			"setSyncParams",
			"(Landroid/media/SyncParams;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media

