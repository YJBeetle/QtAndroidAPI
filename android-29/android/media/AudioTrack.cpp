#include "./AudioAttributes.hpp"
#include "./AudioDeviceInfo.hpp"
#include "./AudioFormat.hpp"
#include "./AudioPresentation.hpp"
#include "./AudioTimestamp.hpp"
#include "./AudioTrack_StreamEventCallback.hpp"
#include "./PlaybackParams.hpp"
#include "./VolumeShaper.hpp"
#include "./VolumeShaper_Configuration.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./AudioTrack.hpp"

namespace android::media
{
	// Fields
	jint AudioTrack::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR"
		);
	}
	jint AudioTrack::ERROR_BAD_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR_BAD_VALUE"
		);
	}
	jint AudioTrack::ERROR_DEAD_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR_DEAD_OBJECT"
		);
	}
	jint AudioTrack::ERROR_INVALID_OPERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR_INVALID_OPERATION"
		);
	}
	jint AudioTrack::MODE_STATIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"MODE_STATIC"
		);
	}
	jint AudioTrack::MODE_STREAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"MODE_STREAM"
		);
	}
	jint AudioTrack::PERFORMANCE_MODE_LOW_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"PERFORMANCE_MODE_LOW_LATENCY"
		);
	}
	jint AudioTrack::PERFORMANCE_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"PERFORMANCE_MODE_NONE"
		);
	}
	jint AudioTrack::PERFORMANCE_MODE_POWER_SAVING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"PERFORMANCE_MODE_POWER_SAVING"
		);
	}
	jint AudioTrack::PLAYSTATE_PAUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"PLAYSTATE_PAUSED"
		);
	}
	jint AudioTrack::PLAYSTATE_PLAYING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"PLAYSTATE_PLAYING"
		);
	}
	jint AudioTrack::PLAYSTATE_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"PLAYSTATE_STOPPED"
		);
	}
	jint AudioTrack::STATE_INITIALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"STATE_INITIALIZED"
		);
	}
	jint AudioTrack::STATE_NO_STATIC_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"STATE_NO_STATIC_DATA"
		);
	}
	jint AudioTrack::STATE_UNINITIALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"STATE_UNINITIALIZED"
		);
	}
	jint AudioTrack::SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"SUCCESS"
		);
	}
	jint AudioTrack::WRITE_BLOCKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"WRITE_BLOCKING"
		);
	}
	jint AudioTrack::WRITE_NON_BLOCKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTrack",
			"WRITE_NON_BLOCKING"
		);
	}
	
	AudioTrack::AudioTrack(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioTrack::AudioTrack(android::media::AudioAttributes &arg0, android::media::AudioFormat &arg1, jint &arg2, jint &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioTrack",
			"(Landroid/media/AudioAttributes;Landroid/media/AudioFormat;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	AudioTrack::AudioTrack(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4, jint &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioTrack",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	AudioTrack::AudioTrack(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4, jint &arg5, jint &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioTrack",
			"(IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	
	// Methods
	jfloat AudioTrack::getMaxVolume()
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.media.AudioTrack",
			"getMaxVolume",
			"()F"
		);
	}
	jint AudioTrack::getMinBufferSize(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.AudioTrack",
			"getMinBufferSize",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jfloat AudioTrack::getMinVolume()
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.media.AudioTrack",
			"getMinVolume",
			"()F"
		);
	}
	jint AudioTrack::getNativeOutputSampleRate(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.AudioTrack",
			"getNativeOutputSampleRate",
			"(I)I",
			arg0
		);
	}
	jboolean AudioTrack::isDirectPlaybackSupported(android::media::AudioFormat arg0, android::media::AudioAttributes arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.AudioTrack",
			"isDirectPlaybackSupported",
			"(Landroid/media/AudioFormat;Landroid/media/AudioAttributes;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AudioTrack::addOnRoutingChangedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint AudioTrack::attachAuxEffect(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"attachAuxEffect",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject AudioTrack::createVolumeShaper(android::media::VolumeShaper_Configuration arg0)
	{
		return __thiz.callObjectMethod(
			"createVolumeShaper",
			"(Landroid/media/VolumeShaper$Configuration;)Landroid/media/VolumeShaper;",
			arg0.__jniObject().object()
		);
	}
	void AudioTrack::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject AudioTrack::getAudioAttributes()
	{
		return __thiz.callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jint AudioTrack::getAudioFormat()
	{
		return __thiz.callMethod<jint>(
			"getAudioFormat",
			"()I"
		);
	}
	jint AudioTrack::getAudioSessionId()
	{
		return __thiz.callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint AudioTrack::getBufferCapacityInFrames()
	{
		return __thiz.callMethod<jint>(
			"getBufferCapacityInFrames",
			"()I"
		);
	}
	jint AudioTrack::getBufferSizeInFrames()
	{
		return __thiz.callMethod<jint>(
			"getBufferSizeInFrames",
			"()I"
		);
	}
	jint AudioTrack::getChannelConfiguration()
	{
		return __thiz.callMethod<jint>(
			"getChannelConfiguration",
			"()I"
		);
	}
	jint AudioTrack::getChannelCount()
	{
		return __thiz.callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	QAndroidJniObject AudioTrack::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	QAndroidJniObject AudioTrack::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint AudioTrack::getNotificationMarkerPosition()
	{
		return __thiz.callMethod<jint>(
			"getNotificationMarkerPosition",
			"()I"
		);
	}
	jint AudioTrack::getOffloadDelay()
	{
		return __thiz.callMethod<jint>(
			"getOffloadDelay",
			"()I"
		);
	}
	jint AudioTrack::getOffloadPadding()
	{
		return __thiz.callMethod<jint>(
			"getOffloadPadding",
			"()I"
		);
	}
	jint AudioTrack::getPerformanceMode()
	{
		return __thiz.callMethod<jint>(
			"getPerformanceMode",
			"()I"
		);
	}
	jint AudioTrack::getPlayState()
	{
		return __thiz.callMethod<jint>(
			"getPlayState",
			"()I"
		);
	}
	jint AudioTrack::getPlaybackHeadPosition()
	{
		return __thiz.callMethod<jint>(
			"getPlaybackHeadPosition",
			"()I"
		);
	}
	QAndroidJniObject AudioTrack::getPlaybackParams()
	{
		return __thiz.callObjectMethod(
			"getPlaybackParams",
			"()Landroid/media/PlaybackParams;"
		);
	}
	jint AudioTrack::getPlaybackRate()
	{
		return __thiz.callMethod<jint>(
			"getPlaybackRate",
			"()I"
		);
	}
	jint AudioTrack::getPositionNotificationPeriod()
	{
		return __thiz.callMethod<jint>(
			"getPositionNotificationPeriod",
			"()I"
		);
	}
	QAndroidJniObject AudioTrack::getPreferredDevice()
	{
		return __thiz.callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	QAndroidJniObject AudioTrack::getRoutedDevice()
	{
		return __thiz.callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint AudioTrack::getSampleRate()
	{
		return __thiz.callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	jint AudioTrack::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint AudioTrack::getStreamType()
	{
		return __thiz.callMethod<jint>(
			"getStreamType",
			"()I"
		);
	}
	jboolean AudioTrack::getTimestamp(android::media::AudioTimestamp arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getTimestamp",
			"(Landroid/media/AudioTimestamp;)Z",
			arg0.__jniObject().object()
		);
	}
	jint AudioTrack::getUnderrunCount()
	{
		return __thiz.callMethod<jint>(
			"getUnderrunCount",
			"()I"
		);
	}
	jboolean AudioTrack::isOffloadedPlayback()
	{
		return __thiz.callMethod<jboolean>(
			"isOffloadedPlayback",
			"()Z"
		);
	}
	void AudioTrack::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V"
		);
	}
	void AudioTrack::play()
	{
		__thiz.callMethod<void>(
			"play",
			"()V"
		);
	}
	void AudioTrack::registerStreamEventCallback(__JniBaseClass arg0, android::media::AudioTrack_StreamEventCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerStreamEventCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/AudioTrack$StreamEventCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AudioTrack::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jint AudioTrack::reloadStaticData()
	{
		return __thiz.callMethod<jint>(
			"reloadStaticData",
			"()I"
		);
	}
	void AudioTrack::removeOnRoutingChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	jint AudioTrack::setAuxEffectSendLevel(jfloat arg0)
	{
		return __thiz.callMethod<jint>(
			"setAuxEffectSendLevel",
			"(F)I",
			arg0
		);
	}
	jint AudioTrack::setBufferSizeInFrames(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setBufferSizeInFrames",
			"(I)I",
			arg0
		);
	}
	jint AudioTrack::setLoopPoints(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"setLoopPoints",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioTrack::setNotificationMarkerPosition(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setNotificationMarkerPosition",
			"(I)I",
			arg0
		);
	}
	void AudioTrack::setOffloadDelayPadding(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setOffloadDelayPadding",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AudioTrack::setOffloadEndOfStream()
	{
		__thiz.callMethod<void>(
			"setOffloadEndOfStream",
			"()V"
		);
	}
	jint AudioTrack::setPlaybackHeadPosition(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setPlaybackHeadPosition",
			"(I)I",
			arg0
		);
	}
	void AudioTrack::setPlaybackParams(android::media::PlaybackParams arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioTrack::setPlaybackPositionUpdateListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackPositionUpdateListener",
			"(Landroid/media/AudioTrack$OnPlaybackPositionUpdateListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioTrack::setPlaybackPositionUpdateListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setPlaybackPositionUpdateListener",
			"(Landroid/media/AudioTrack$OnPlaybackPositionUpdateListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint AudioTrack::setPlaybackRate(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setPlaybackRate",
			"(I)I",
			arg0
		);
	}
	jint AudioTrack::setPositionNotificationPeriod(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setPositionNotificationPeriod",
			"(I)I",
			arg0
		);
	}
	jboolean AudioTrack::setPreferredDevice(android::media::AudioDeviceInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	jint AudioTrack::setPresentation(android::media::AudioPresentation arg0)
	{
		return __thiz.callMethod<jint>(
			"setPresentation",
			"(Landroid/media/AudioPresentation;)I",
			arg0.__jniObject().object()
		);
	}
	jint AudioTrack::setStereoVolume(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jint>(
			"setStereoVolume",
			"(FF)I",
			arg0,
			arg1
		);
	}
	jint AudioTrack::setVolume(jfloat arg0)
	{
		return __thiz.callMethod<jint>(
			"setVolume",
			"(F)I",
			arg0
		);
	}
	void AudioTrack::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void AudioTrack::unregisterStreamEventCallback(android::media::AudioTrack_StreamEventCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterStreamEventCallback",
			"(Landroid/media/AudioTrack$StreamEventCallback;)V",
			arg0.__jniObject().object()
		);
	}
	jint AudioTrack::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"write",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioTrack::write(jshortArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"write",
			"([SII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioTrack::write(java::nio::ByteBuffer arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint AudioTrack::write(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"write",
			"([BIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint AudioTrack::write(jfloatArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"write",
			"([FIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint AudioTrack::write(jshortArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"write",
			"([SIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint AudioTrack::write(java::nio::ByteBuffer arg0, jint arg1, jint arg2, jlong arg3)
	{
		return __thiz.callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;IIJ)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media

