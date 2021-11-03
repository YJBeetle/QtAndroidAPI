#include "./AudioDeviceInfo.hpp"
#include "./AudioFormat.hpp"
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
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR"
		);
	}
	jint AudioRecord::ERROR_BAD_VALUE()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_BAD_VALUE"
		);
	}
	jint AudioRecord::ERROR_DEAD_OBJECT()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_DEAD_OBJECT"
		);
	}
	jint AudioRecord::ERROR_INVALID_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_INVALID_OPERATION"
		);
	}
	jint AudioRecord::READ_BLOCKING()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"READ_BLOCKING"
		);
	}
	jint AudioRecord::READ_NON_BLOCKING()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"READ_NON_BLOCKING"
		);
	}
	jint AudioRecord::RECORDSTATE_RECORDING()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"RECORDSTATE_RECORDING"
		);
	}
	jint AudioRecord::RECORDSTATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"RECORDSTATE_STOPPED"
		);
	}
	jint AudioRecord::STATE_INITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"STATE_INITIALIZED"
		);
	}
	jint AudioRecord::STATE_UNINITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"STATE_UNINITIALIZED"
		);
	}
	jint AudioRecord::SUCCESS()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"SUCCESS"
		);
	}
	
	// QJniObject forward
	AudioRecord::AudioRecord(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioRecord::AudioRecord(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.media.AudioRecord",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jint AudioRecord::getMinBufferSize(jint arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.media.AudioRecord",
			"getMinBufferSize",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	void AudioRecord::addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRecord$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject AudioRecord::getActiveMicrophones()
	{
		return callObjectMethod(
			"getActiveMicrophones",
			"()Ljava/util/List;"
		);
	}
	jint AudioRecord::getAudioFormat()
	{
		return callMethod<jint>(
			"getAudioFormat",
			"()I"
		);
	}
	jint AudioRecord::getAudioSessionId()
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint AudioRecord::getAudioSource()
	{
		return callMethod<jint>(
			"getAudioSource",
			"()I"
		);
	}
	jint AudioRecord::getBufferSizeInFrames()
	{
		return callMethod<jint>(
			"getBufferSizeInFrames",
			"()I"
		);
	}
	jint AudioRecord::getChannelConfiguration()
	{
		return callMethod<jint>(
			"getChannelConfiguration",
			"()I"
		);
	}
	jint AudioRecord::getChannelCount()
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	android::media::AudioFormat AudioRecord::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	android::os::PersistableBundle AudioRecord::getMetrics()
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint AudioRecord::getNotificationMarkerPosition()
	{
		return callMethod<jint>(
			"getNotificationMarkerPosition",
			"()I"
		);
	}
	jint AudioRecord::getPositionNotificationPeriod()
	{
		return callMethod<jint>(
			"getPositionNotificationPeriod",
			"()I"
		);
	}
	android::media::AudioDeviceInfo AudioRecord::getPreferredDevice()
	{
		return callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint AudioRecord::getRecordingState()
	{
		return callMethod<jint>(
			"getRecordingState",
			"()I"
		);
	}
	android::media::AudioDeviceInfo AudioRecord::getRoutedDevice()
	{
		return callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint AudioRecord::getSampleRate()
	{
		return callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	jint AudioRecord::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint AudioRecord::getTimestamp(android::media::AudioTimestamp arg0, jint arg1)
	{
		return callMethod<jint>(
			"getTimestamp",
			"(Landroid/media/AudioTimestamp;I)I",
			arg0.object(),
			arg1
		);
	}
	jint AudioRecord::read(java::nio::ByteBuffer arg0, jint arg1)
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.object(),
			arg1
		);
	}
	jint AudioRecord::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioRecord::read(jshortArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([SII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioRecord::read(java::nio::ByteBuffer arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jint AudioRecord::read(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callMethod<jint>(
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
		return callMethod<jint>(
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
		return callMethod<jint>(
			"read",
			"([SIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void AudioRecord::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void AudioRecord::removeOnRoutingChangedListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRecord$OnRoutingChangedListener;)V",
			arg0.object()
		);
	}
	jint AudioRecord::setNotificationMarkerPosition(jint arg0)
	{
		return callMethod<jint>(
			"setNotificationMarkerPosition",
			"(I)I",
			arg0
		);
	}
	jint AudioRecord::setPositionNotificationPeriod(jint arg0)
	{
		return callMethod<jint>(
			"setPositionNotificationPeriod",
			"(I)I",
			arg0
		);
	}
	jboolean AudioRecord::setPreferredDevice(android::media::AudioDeviceInfo arg0)
	{
		return callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.object()
		);
	}
	void AudioRecord::setRecordPositionUpdateListener(JObject arg0)
	{
		callMethod<void>(
			"setRecordPositionUpdateListener",
			"(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;)V",
			arg0.object()
		);
	}
	void AudioRecord::setRecordPositionUpdateListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setRecordPositionUpdateListener",
			"(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AudioRecord::startRecording()
	{
		callMethod<void>(
			"startRecording",
			"()V"
		);
	}
	void AudioRecord::startRecording(android::media::MediaSyncEvent arg0)
	{
		callMethod<void>(
			"startRecording",
			"(Landroid/media/MediaSyncEvent;)V",
			arg0.object()
		);
	}
	void AudioRecord::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media

