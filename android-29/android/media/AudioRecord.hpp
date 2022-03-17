#pragma once

#include "../../JByteArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JShortArray.hpp"
#include "./AudioDeviceInfo.def.hpp"
#include "./AudioFormat.def.hpp"
#include "./AudioManager_AudioRecordingCallback.def.hpp"
#include "./AudioRecordingConfiguration.def.hpp"
#include "./AudioTimestamp.def.hpp"
#include "./MediaSyncEvent.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./AudioRecord.def.hpp"

namespace android::media
{
	// Fields
	inline jint AudioRecord::ERROR()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR"
		);
	}
	inline jint AudioRecord::ERROR_BAD_VALUE()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_BAD_VALUE"
		);
	}
	inline jint AudioRecord::ERROR_DEAD_OBJECT()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_DEAD_OBJECT"
		);
	}
	inline jint AudioRecord::ERROR_INVALID_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_INVALID_OPERATION"
		);
	}
	inline jint AudioRecord::READ_BLOCKING()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"READ_BLOCKING"
		);
	}
	inline jint AudioRecord::READ_NON_BLOCKING()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"READ_NON_BLOCKING"
		);
	}
	inline jint AudioRecord::RECORDSTATE_RECORDING()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"RECORDSTATE_RECORDING"
		);
	}
	inline jint AudioRecord::RECORDSTATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"RECORDSTATE_STOPPED"
		);
	}
	inline jint AudioRecord::STATE_INITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"STATE_INITIALIZED"
		);
	}
	inline jint AudioRecord::STATE_UNINITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"STATE_UNINITIALIZED"
		);
	}
	inline jint AudioRecord::SUCCESS()
	{
		return getStaticField<jint>(
			"android.media.AudioRecord",
			"SUCCESS"
		);
	}
	
	// Constructors
	inline AudioRecord::AudioRecord(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	inline jint AudioRecord::getMinBufferSize(jint arg0, jint arg1, jint arg2)
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
	inline void AudioRecord::addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRecord$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject AudioRecord::getActiveMicrophones() const
	{
		return callObjectMethod(
			"getActiveMicrophones",
			"()Ljava/util/List;"
		);
	}
	inline android::media::AudioRecordingConfiguration AudioRecord::getActiveRecordingConfiguration() const
	{
		return callObjectMethod(
			"getActiveRecordingConfiguration",
			"()Landroid/media/AudioRecordingConfiguration;"
		);
	}
	inline jint AudioRecord::getAudioFormat() const
	{
		return callMethod<jint>(
			"getAudioFormat",
			"()I"
		);
	}
	inline jint AudioRecord::getAudioSessionId() const
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	inline jint AudioRecord::getAudioSource() const
	{
		return callMethod<jint>(
			"getAudioSource",
			"()I"
		);
	}
	inline jint AudioRecord::getBufferSizeInFrames() const
	{
		return callMethod<jint>(
			"getBufferSizeInFrames",
			"()I"
		);
	}
	inline jint AudioRecord::getChannelConfiguration() const
	{
		return callMethod<jint>(
			"getChannelConfiguration",
			"()I"
		);
	}
	inline jint AudioRecord::getChannelCount() const
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	inline android::media::AudioFormat AudioRecord::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	inline android::os::PersistableBundle AudioRecord::getMetrics() const
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline jint AudioRecord::getNotificationMarkerPosition() const
	{
		return callMethod<jint>(
			"getNotificationMarkerPosition",
			"()I"
		);
	}
	inline jint AudioRecord::getPositionNotificationPeriod() const
	{
		return callMethod<jint>(
			"getPositionNotificationPeriod",
			"()I"
		);
	}
	inline android::media::AudioDeviceInfo AudioRecord::getPreferredDevice() const
	{
		return callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	inline jint AudioRecord::getRecordingState() const
	{
		return callMethod<jint>(
			"getRecordingState",
			"()I"
		);
	}
	inline android::media::AudioDeviceInfo AudioRecord::getRoutedDevice() const
	{
		return callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	inline jint AudioRecord::getSampleRate() const
	{
		return callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	inline jint AudioRecord::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jint AudioRecord::getTimestamp(android::media::AudioTimestamp arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getTimestamp",
			"(Landroid/media/AudioTimestamp;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jint AudioRecord::read(java::nio::ByteBuffer arg0, jint arg1) const
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jint AudioRecord::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jint AudioRecord::read(JShortArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([SII)I",
			arg0.object<jshortArray>(),
			arg1,
			arg2
		);
	}
	inline jint AudioRecord::read(java::nio::ByteBuffer arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jint AudioRecord::read(JByteArray arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jint>(
			"read",
			"([BIII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint AudioRecord::read(JFloatArray arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jint>(
			"read",
			"([FIII)I",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint AudioRecord::read(JShortArray arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jint>(
			"read",
			"([SIII)I",
			arg0.object<jshortArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void AudioRecord::registerAudioRecordingCallback(JObject arg0, android::media::AudioManager_AudioRecordingCallback arg1) const
	{
		callMethod<void>(
			"registerAudioRecordingCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AudioRecord::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void AudioRecord::removeOnRoutingChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRecord$OnRoutingChangedListener;)V",
			arg0.object()
		);
	}
	inline jint AudioRecord::setNotificationMarkerPosition(jint arg0) const
	{
		return callMethod<jint>(
			"setNotificationMarkerPosition",
			"(I)I",
			arg0
		);
	}
	inline jint AudioRecord::setPositionNotificationPeriod(jint arg0) const
	{
		return callMethod<jint>(
			"setPositionNotificationPeriod",
			"(I)I",
			arg0
		);
	}
	inline jboolean AudioRecord::setPreferredDevice(android::media::AudioDeviceInfo arg0) const
	{
		return callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.object()
		);
	}
	inline jboolean AudioRecord::setPreferredMicrophoneDirection(jint arg0) const
	{
		return callMethod<jboolean>(
			"setPreferredMicrophoneDirection",
			"(I)Z",
			arg0
		);
	}
	inline jboolean AudioRecord::setPreferredMicrophoneFieldDimension(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setPreferredMicrophoneFieldDimension",
			"(F)Z",
			arg0
		);
	}
	inline void AudioRecord::setRecordPositionUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"setRecordPositionUpdateListener",
			"(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;)V",
			arg0.object()
		);
	}
	inline void AudioRecord::setRecordPositionUpdateListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setRecordPositionUpdateListener",
			"(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AudioRecord::startRecording() const
	{
		callMethod<void>(
			"startRecording",
			"()V"
		);
	}
	inline void AudioRecord::startRecording(android::media::MediaSyncEvent arg0) const
	{
		callMethod<void>(
			"startRecording",
			"(Landroid/media/MediaSyncEvent;)V",
			arg0.object()
		);
	}
	inline void AudioRecord::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline void AudioRecord::unregisterAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0) const
	{
		callMethod<void>(
			"unregisterAudioRecordingCallback",
			"(Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

