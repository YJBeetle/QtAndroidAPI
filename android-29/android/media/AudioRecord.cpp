#include "./AudioDeviceInfo.hpp"
#include "./AudioFormat.hpp"
#include "./AudioManager_AudioRecordingCallback.hpp"
#include "./AudioRecordingConfiguration.hpp"
#include "./AudioTimestamp.hpp"
#include "./MediaSyncEvent.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./AudioRecord.hpp"

namespace android::media
{
	// Fields
	jint AudioRecord::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR"
		);
	}
	jint AudioRecord::ERROR_BAD_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_BAD_VALUE"
		);
	}
	jint AudioRecord::ERROR_DEAD_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_DEAD_OBJECT"
		);
	}
	jint AudioRecord::ERROR_INVALID_OPERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_INVALID_OPERATION"
		);
	}
	jint AudioRecord::READ_BLOCKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"READ_BLOCKING"
		);
	}
	jint AudioRecord::READ_NON_BLOCKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"READ_NON_BLOCKING"
		);
	}
	jint AudioRecord::RECORDSTATE_RECORDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"RECORDSTATE_RECORDING"
		);
	}
	jint AudioRecord::RECORDSTATE_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"RECORDSTATE_STOPPED"
		);
	}
	jint AudioRecord::STATE_INITIALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"STATE_INITIALIZED"
		);
	}
	jint AudioRecord::STATE_UNINITIALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"STATE_UNINITIALIZED"
		);
	}
	jint AudioRecord::SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"SUCCESS"
		);
	}
	
	AudioRecord::AudioRecord(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioRecord::AudioRecord(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioRecord",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jint AudioRecord::getMinBufferSize(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.AudioRecord",
			"getMinBufferSize",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	void AudioRecord::addOnRoutingChangedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRecord$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AudioRecord::getActiveMicrophones()
	{
		return __thiz.callObjectMethod(
			"getActiveMicrophones",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AudioRecord::getActiveRecordingConfiguration()
	{
		return __thiz.callObjectMethod(
			"getActiveRecordingConfiguration",
			"()Landroid/media/AudioRecordingConfiguration;"
		);
	}
	jint AudioRecord::getAudioFormat()
	{
		return __thiz.callMethod<jint>(
			"getAudioFormat",
			"()I"
		);
	}
	jint AudioRecord::getAudioSessionId()
	{
		return __thiz.callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint AudioRecord::getAudioSource()
	{
		return __thiz.callMethod<jint>(
			"getAudioSource",
			"()I"
		);
	}
	jint AudioRecord::getBufferSizeInFrames()
	{
		return __thiz.callMethod<jint>(
			"getBufferSizeInFrames",
			"()I"
		);
	}
	jint AudioRecord::getChannelConfiguration()
	{
		return __thiz.callMethod<jint>(
			"getChannelConfiguration",
			"()I"
		);
	}
	jint AudioRecord::getChannelCount()
	{
		return __thiz.callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	QAndroidJniObject AudioRecord::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	QAndroidJniObject AudioRecord::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint AudioRecord::getNotificationMarkerPosition()
	{
		return __thiz.callMethod<jint>(
			"getNotificationMarkerPosition",
			"()I"
		);
	}
	jint AudioRecord::getPositionNotificationPeriod()
	{
		return __thiz.callMethod<jint>(
			"getPositionNotificationPeriod",
			"()I"
		);
	}
	QAndroidJniObject AudioRecord::getPreferredDevice()
	{
		return __thiz.callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint AudioRecord::getRecordingState()
	{
		return __thiz.callMethod<jint>(
			"getRecordingState",
			"()I"
		);
	}
	QAndroidJniObject AudioRecord::getRoutedDevice()
	{
		return __thiz.callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint AudioRecord::getSampleRate()
	{
		return __thiz.callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	jint AudioRecord::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint AudioRecord::getTimestamp(android::media::AudioTimestamp arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getTimestamp",
			"(Landroid/media/AudioTimestamp;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint AudioRecord::read(java::nio::ByteBuffer arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint AudioRecord::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioRecord::read(jshortArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([SII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioRecord::read(java::nio::ByteBuffer arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint AudioRecord::read(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint AudioRecord::read(jfloatArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([FIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint AudioRecord::read(jshortArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([SIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void AudioRecord::registerAudioRecordingCallback(__JniBaseClass arg0, android::media::AudioManager_AudioRecordingCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerAudioRecordingCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AudioRecord::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void AudioRecord::removeOnRoutingChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRecord$OnRoutingChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	jint AudioRecord::setNotificationMarkerPosition(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setNotificationMarkerPosition",
			"(I)I",
			arg0
		);
	}
	jint AudioRecord::setPositionNotificationPeriod(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setPositionNotificationPeriod",
			"(I)I",
			arg0
		);
	}
	jboolean AudioRecord::setPreferredDevice(android::media::AudioDeviceInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AudioRecord::setPreferredMicrophoneDirection(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredMicrophoneDirection",
			"(I)Z",
			arg0
		);
	}
	jboolean AudioRecord::setPreferredMicrophoneFieldDimension(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredMicrophoneFieldDimension",
			"(F)Z",
			arg0
		);
	}
	void AudioRecord::setRecordPositionUpdateListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRecordPositionUpdateListener",
			"(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioRecord::setRecordPositionUpdateListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setRecordPositionUpdateListener",
			"(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AudioRecord::startRecording()
	{
		__thiz.callMethod<void>(
			"startRecording",
			"()V"
		);
	}
	void AudioRecord::startRecording(android::media::MediaSyncEvent arg0)
	{
		__thiz.callMethod<void>(
			"startRecording",
			"(Landroid/media/MediaSyncEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioRecord::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void AudioRecord::unregisterAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterAudioRecordingCallback",
			"(Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media

