#include "../../JByteArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JShortArray.hpp"
#include "./AudioAttributes.hpp"
#include "./AudioDeviceInfo.hpp"
#include "./AudioFormat.hpp"
#include "./AudioPresentation.hpp"
#include "./AudioTimestamp.hpp"
#include "./AudioTrack_StreamEventCallback.hpp"
#include "./PlaybackParams.hpp"
#include "./VolumeShaper.hpp"
#include "./VolumeShaper_Configuration.hpp"
#include "./metrics/LogSessionId.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./AudioTrack.hpp"

namespace android::media
{
	// Fields
	jint AudioTrack::DUAL_MONO_MODE_LL()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"DUAL_MONO_MODE_LL"
		);
	}
	jint AudioTrack::DUAL_MONO_MODE_LR()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"DUAL_MONO_MODE_LR"
		);
	}
	jint AudioTrack::DUAL_MONO_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"DUAL_MONO_MODE_OFF"
		);
	}
	jint AudioTrack::DUAL_MONO_MODE_RR()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"DUAL_MONO_MODE_RR"
		);
	}
	jint AudioTrack::ENCAPSULATION_METADATA_TYPE_DVB_AD_DESCRIPTOR()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ENCAPSULATION_METADATA_TYPE_DVB_AD_DESCRIPTOR"
		);
	}
	jint AudioTrack::ENCAPSULATION_METADATA_TYPE_FRAMEWORK_TUNER()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ENCAPSULATION_METADATA_TYPE_FRAMEWORK_TUNER"
		);
	}
	jint AudioTrack::ENCAPSULATION_MODE_ELEMENTARY_STREAM()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ENCAPSULATION_MODE_ELEMENTARY_STREAM"
		);
	}
	jint AudioTrack::ENCAPSULATION_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ENCAPSULATION_MODE_NONE"
		);
	}
	jint AudioTrack::ERROR()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR"
		);
	}
	jint AudioTrack::ERROR_BAD_VALUE()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR_BAD_VALUE"
		);
	}
	jint AudioTrack::ERROR_DEAD_OBJECT()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR_DEAD_OBJECT"
		);
	}
	jint AudioTrack::ERROR_INVALID_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR_INVALID_OPERATION"
		);
	}
	jint AudioTrack::MODE_STATIC()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"MODE_STATIC"
		);
	}
	jint AudioTrack::MODE_STREAM()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"MODE_STREAM"
		);
	}
	jint AudioTrack::PERFORMANCE_MODE_LOW_LATENCY()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PERFORMANCE_MODE_LOW_LATENCY"
		);
	}
	jint AudioTrack::PERFORMANCE_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PERFORMANCE_MODE_NONE"
		);
	}
	jint AudioTrack::PERFORMANCE_MODE_POWER_SAVING()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PERFORMANCE_MODE_POWER_SAVING"
		);
	}
	jint AudioTrack::PLAYSTATE_PAUSED()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PLAYSTATE_PAUSED"
		);
	}
	jint AudioTrack::PLAYSTATE_PLAYING()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PLAYSTATE_PLAYING"
		);
	}
	jint AudioTrack::PLAYSTATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PLAYSTATE_STOPPED"
		);
	}
	jint AudioTrack::STATE_INITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"STATE_INITIALIZED"
		);
	}
	jint AudioTrack::STATE_NO_STATIC_DATA()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"STATE_NO_STATIC_DATA"
		);
	}
	jint AudioTrack::STATE_UNINITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"STATE_UNINITIALIZED"
		);
	}
	jint AudioTrack::SUCCESS()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"SUCCESS"
		);
	}
	jint AudioTrack::WRITE_BLOCKING()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"WRITE_BLOCKING"
		);
	}
	jint AudioTrack::WRITE_NON_BLOCKING()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"WRITE_NON_BLOCKING"
		);
	}
	
	// QJniObject forward
	AudioTrack::AudioTrack(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioTrack::AudioTrack(android::media::AudioAttributes arg0, android::media::AudioFormat arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.media.AudioTrack",
			"(Landroid/media/AudioAttributes;Landroid/media/AudioFormat;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	AudioTrack::AudioTrack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"android.media.AudioTrack",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	AudioTrack::AudioTrack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
		: JObject(
			"android.media.AudioTrack",
			"(IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	jfloat AudioTrack::getMaxVolume()
	{
		return callStaticMethod<jfloat>(
			"android.media.AudioTrack",
			"getMaxVolume",
			"()F"
		);
	}
	jint AudioTrack::getMinBufferSize(jint arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
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
		return callStaticMethod<jfloat>(
			"android.media.AudioTrack",
			"getMinVolume",
			"()F"
		);
	}
	jint AudioTrack::getNativeOutputSampleRate(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.media.AudioTrack",
			"getNativeOutputSampleRate",
			"(I)I",
			arg0
		);
	}
	jboolean AudioTrack::isDirectPlaybackSupported(android::media::AudioFormat arg0, android::media::AudioAttributes arg1)
	{
		return callStaticMethod<jboolean>(
			"android.media.AudioTrack",
			"isDirectPlaybackSupported",
			"(Landroid/media/AudioFormat;Landroid/media/AudioAttributes;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void AudioTrack::addOnCodecFormatChangedListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"addOnCodecFormatChangedListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/AudioTrack$OnCodecFormatChangedListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AudioTrack::addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint AudioTrack::attachAuxEffect(jint arg0) const
	{
		return callMethod<jint>(
			"attachAuxEffect",
			"(I)I",
			arg0
		);
	}
	android::media::VolumeShaper AudioTrack::createVolumeShaper(android::media::VolumeShaper_Configuration arg0) const
	{
		return callObjectMethod(
			"createVolumeShaper",
			"(Landroid/media/VolumeShaper$Configuration;)Landroid/media/VolumeShaper;",
			arg0.object()
		);
	}
	void AudioTrack::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	android::media::AudioAttributes AudioTrack::getAudioAttributes() const
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jfloat AudioTrack::getAudioDescriptionMixLeveldB() const
	{
		return callMethod<jfloat>(
			"getAudioDescriptionMixLeveldB",
			"()F"
		);
	}
	jint AudioTrack::getAudioFormat() const
	{
		return callMethod<jint>(
			"getAudioFormat",
			"()I"
		);
	}
	jint AudioTrack::getAudioSessionId() const
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint AudioTrack::getBufferCapacityInFrames() const
	{
		return callMethod<jint>(
			"getBufferCapacityInFrames",
			"()I"
		);
	}
	jint AudioTrack::getBufferSizeInFrames() const
	{
		return callMethod<jint>(
			"getBufferSizeInFrames",
			"()I"
		);
	}
	jint AudioTrack::getChannelConfiguration() const
	{
		return callMethod<jint>(
			"getChannelConfiguration",
			"()I"
		);
	}
	jint AudioTrack::getChannelCount() const
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	jint AudioTrack::getDualMonoMode() const
	{
		return callMethod<jint>(
			"getDualMonoMode",
			"()I"
		);
	}
	android::media::AudioFormat AudioTrack::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	android::media::metrics::LogSessionId AudioTrack::getLogSessionId() const
	{
		return callObjectMethod(
			"getLogSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	android::os::PersistableBundle AudioTrack::getMetrics() const
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint AudioTrack::getNotificationMarkerPosition() const
	{
		return callMethod<jint>(
			"getNotificationMarkerPosition",
			"()I"
		);
	}
	jint AudioTrack::getOffloadDelay() const
	{
		return callMethod<jint>(
			"getOffloadDelay",
			"()I"
		);
	}
	jint AudioTrack::getOffloadPadding() const
	{
		return callMethod<jint>(
			"getOffloadPadding",
			"()I"
		);
	}
	jint AudioTrack::getPerformanceMode() const
	{
		return callMethod<jint>(
			"getPerformanceMode",
			"()I"
		);
	}
	jint AudioTrack::getPlayState() const
	{
		return callMethod<jint>(
			"getPlayState",
			"()I"
		);
	}
	jint AudioTrack::getPlaybackHeadPosition() const
	{
		return callMethod<jint>(
			"getPlaybackHeadPosition",
			"()I"
		);
	}
	android::media::PlaybackParams AudioTrack::getPlaybackParams() const
	{
		return callObjectMethod(
			"getPlaybackParams",
			"()Landroid/media/PlaybackParams;"
		);
	}
	jint AudioTrack::getPlaybackRate() const
	{
		return callMethod<jint>(
			"getPlaybackRate",
			"()I"
		);
	}
	jint AudioTrack::getPositionNotificationPeriod() const
	{
		return callMethod<jint>(
			"getPositionNotificationPeriod",
			"()I"
		);
	}
	android::media::AudioDeviceInfo AudioTrack::getPreferredDevice() const
	{
		return callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	android::media::AudioDeviceInfo AudioTrack::getRoutedDevice() const
	{
		return callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint AudioTrack::getSampleRate() const
	{
		return callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	jint AudioTrack::getStartThresholdInFrames() const
	{
		return callMethod<jint>(
			"getStartThresholdInFrames",
			"()I"
		);
	}
	jint AudioTrack::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint AudioTrack::getStreamType() const
	{
		return callMethod<jint>(
			"getStreamType",
			"()I"
		);
	}
	jboolean AudioTrack::getTimestamp(android::media::AudioTimestamp arg0) const
	{
		return callMethod<jboolean>(
			"getTimestamp",
			"(Landroid/media/AudioTimestamp;)Z",
			arg0.object()
		);
	}
	jint AudioTrack::getUnderrunCount() const
	{
		return callMethod<jint>(
			"getUnderrunCount",
			"()I"
		);
	}
	jboolean AudioTrack::isOffloadedPlayback() const
	{
		return callMethod<jboolean>(
			"isOffloadedPlayback",
			"()Z"
		);
	}
	void AudioTrack::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	void AudioTrack::play() const
	{
		callMethod<void>(
			"play",
			"()V"
		);
	}
	void AudioTrack::registerStreamEventCallback(JObject arg0, android::media::AudioTrack_StreamEventCallback arg1) const
	{
		callMethod<void>(
			"registerStreamEventCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/AudioTrack$StreamEventCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AudioTrack::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	jint AudioTrack::reloadStaticData() const
	{
		return callMethod<jint>(
			"reloadStaticData",
			"()I"
		);
	}
	void AudioTrack::removeOnCodecFormatChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnCodecFormatChangedListener",
			"(Landroid/media/AudioTrack$OnCodecFormatChangedListener;)V",
			arg0.object()
		);
	}
	void AudioTrack::removeOnRoutingChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;)V",
			arg0.object()
		);
	}
	jboolean AudioTrack::setAudioDescriptionMixLeveldB(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setAudioDescriptionMixLeveldB",
			"(F)Z",
			arg0
		);
	}
	jint AudioTrack::setAuxEffectSendLevel(jfloat arg0) const
	{
		return callMethod<jint>(
			"setAuxEffectSendLevel",
			"(F)I",
			arg0
		);
	}
	jint AudioTrack::setBufferSizeInFrames(jint arg0) const
	{
		return callMethod<jint>(
			"setBufferSizeInFrames",
			"(I)I",
			arg0
		);
	}
	jboolean AudioTrack::setDualMonoMode(jint arg0) const
	{
		return callMethod<jboolean>(
			"setDualMonoMode",
			"(I)Z",
			arg0
		);
	}
	void AudioTrack::setLogSessionId(android::media::metrics::LogSessionId arg0) const
	{
		callMethod<void>(
			"setLogSessionId",
			"(Landroid/media/metrics/LogSessionId;)V",
			arg0.object()
		);
	}
	jint AudioTrack::setLoopPoints(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"setLoopPoints",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioTrack::setNotificationMarkerPosition(jint arg0) const
	{
		return callMethod<jint>(
			"setNotificationMarkerPosition",
			"(I)I",
			arg0
		);
	}
	void AudioTrack::setOffloadDelayPadding(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setOffloadDelayPadding",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AudioTrack::setOffloadEndOfStream() const
	{
		callMethod<void>(
			"setOffloadEndOfStream",
			"()V"
		);
	}
	jint AudioTrack::setPlaybackHeadPosition(jint arg0) const
	{
		return callMethod<jint>(
			"setPlaybackHeadPosition",
			"(I)I",
			arg0
		);
	}
	void AudioTrack::setPlaybackParams(android::media::PlaybackParams arg0) const
	{
		callMethod<void>(
			"setPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.object()
		);
	}
	void AudioTrack::setPlaybackPositionUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"setPlaybackPositionUpdateListener",
			"(Landroid/media/AudioTrack$OnPlaybackPositionUpdateListener;)V",
			arg0.object()
		);
	}
	void AudioTrack::setPlaybackPositionUpdateListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setPlaybackPositionUpdateListener",
			"(Landroid/media/AudioTrack$OnPlaybackPositionUpdateListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint AudioTrack::setPlaybackRate(jint arg0) const
	{
		return callMethod<jint>(
			"setPlaybackRate",
			"(I)I",
			arg0
		);
	}
	jint AudioTrack::setPositionNotificationPeriod(jint arg0) const
	{
		return callMethod<jint>(
			"setPositionNotificationPeriod",
			"(I)I",
			arg0
		);
	}
	jboolean AudioTrack::setPreferredDevice(android::media::AudioDeviceInfo arg0) const
	{
		return callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.object()
		);
	}
	jint AudioTrack::setPresentation(android::media::AudioPresentation arg0) const
	{
		return callMethod<jint>(
			"setPresentation",
			"(Landroid/media/AudioPresentation;)I",
			arg0.object()
		);
	}
	jint AudioTrack::setStartThresholdInFrames(jint arg0) const
	{
		return callMethod<jint>(
			"setStartThresholdInFrames",
			"(I)I",
			arg0
		);
	}
	jint AudioTrack::setStereoVolume(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jint>(
			"setStereoVolume",
			"(FF)I",
			arg0,
			arg1
		);
	}
	jint AudioTrack::setVolume(jfloat arg0) const
	{
		return callMethod<jint>(
			"setVolume",
			"(F)I",
			arg0
		);
	}
	void AudioTrack::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	void AudioTrack::unregisterStreamEventCallback(android::media::AudioTrack_StreamEventCallback arg0) const
	{
		callMethod<void>(
			"unregisterStreamEventCallback",
			"(Landroid/media/AudioTrack$StreamEventCallback;)V",
			arg0.object()
		);
	}
	jint AudioTrack::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"write",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jint AudioTrack::write(JShortArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"write",
			"([SII)I",
			arg0.object<jshortArray>(),
			arg1,
			arg2
		);
	}
	jint AudioTrack::write(java::nio::ByteBuffer arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jint AudioTrack::write(JByteArray arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jint>(
			"write",
			"([BIII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	jint AudioTrack::write(JFloatArray arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jint>(
			"write",
			"([FIII)I",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	jint AudioTrack::write(JShortArray arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jint>(
			"write",
			"([SIII)I",
			arg0.object<jshortArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	jint AudioTrack::write(java::nio::ByteBuffer arg0, jint arg1, jint arg2, jlong arg3) const
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;IIJ)I",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media

