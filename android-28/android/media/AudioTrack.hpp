#pragma once

#include "../../JByteArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JShortArray.hpp"
#include "./AudioAttributes.def.hpp"
#include "./AudioDeviceInfo.def.hpp"
#include "./AudioFormat.def.hpp"
#include "./AudioPresentation.def.hpp"
#include "./AudioTimestamp.def.hpp"
#include "./PlaybackParams.def.hpp"
#include "./VolumeShaper.def.hpp"
#include "./VolumeShaper_Configuration.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./AudioTrack.def.hpp"

namespace android::media
{
	// Fields
	inline jint AudioTrack::ERROR()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR"
		);
	}
	inline jint AudioTrack::ERROR_BAD_VALUE()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR_BAD_VALUE"
		);
	}
	inline jint AudioTrack::ERROR_DEAD_OBJECT()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR_DEAD_OBJECT"
		);
	}
	inline jint AudioTrack::ERROR_INVALID_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"ERROR_INVALID_OPERATION"
		);
	}
	inline jint AudioTrack::MODE_STATIC()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"MODE_STATIC"
		);
	}
	inline jint AudioTrack::MODE_STREAM()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"MODE_STREAM"
		);
	}
	inline jint AudioTrack::PERFORMANCE_MODE_LOW_LATENCY()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PERFORMANCE_MODE_LOW_LATENCY"
		);
	}
	inline jint AudioTrack::PERFORMANCE_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PERFORMANCE_MODE_NONE"
		);
	}
	inline jint AudioTrack::PERFORMANCE_MODE_POWER_SAVING()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PERFORMANCE_MODE_POWER_SAVING"
		);
	}
	inline jint AudioTrack::PLAYSTATE_PAUSED()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PLAYSTATE_PAUSED"
		);
	}
	inline jint AudioTrack::PLAYSTATE_PLAYING()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PLAYSTATE_PLAYING"
		);
	}
	inline jint AudioTrack::PLAYSTATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"PLAYSTATE_STOPPED"
		);
	}
	inline jint AudioTrack::STATE_INITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"STATE_INITIALIZED"
		);
	}
	inline jint AudioTrack::STATE_NO_STATIC_DATA()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"STATE_NO_STATIC_DATA"
		);
	}
	inline jint AudioTrack::STATE_UNINITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"STATE_UNINITIALIZED"
		);
	}
	inline jint AudioTrack::SUCCESS()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"SUCCESS"
		);
	}
	inline jint AudioTrack::WRITE_BLOCKING()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"WRITE_BLOCKING"
		);
	}
	inline jint AudioTrack::WRITE_NON_BLOCKING()
	{
		return getStaticField<jint>(
			"android.media.AudioTrack",
			"WRITE_NON_BLOCKING"
		);
	}
	
	// Constructors
	inline AudioTrack::AudioTrack(android::media::AudioAttributes arg0, android::media::AudioFormat arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.media.AudioTrack",
			"(Landroid/media/AudioAttributes;Landroid/media/AudioFormat;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	inline AudioTrack::AudioTrack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	inline AudioTrack::AudioTrack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
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
	inline jfloat AudioTrack::getMaxVolume()
	{
		return callStaticMethod<jfloat>(
			"android.media.AudioTrack",
			"getMaxVolume",
			"()F"
		);
	}
	inline jint AudioTrack::getMinBufferSize(jint arg0, jint arg1, jint arg2)
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
	inline jfloat AudioTrack::getMinVolume()
	{
		return callStaticMethod<jfloat>(
			"android.media.AudioTrack",
			"getMinVolume",
			"()F"
		);
	}
	inline jint AudioTrack::getNativeOutputSampleRate(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.media.AudioTrack",
			"getNativeOutputSampleRate",
			"(I)I",
			arg0
		);
	}
	inline void AudioTrack::addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint AudioTrack::attachAuxEffect(jint arg0) const
	{
		return callMethod<jint>(
			"attachAuxEffect",
			"(I)I",
			arg0
		);
	}
	inline android::media::VolumeShaper AudioTrack::createVolumeShaper(android::media::VolumeShaper_Configuration arg0) const
	{
		return callObjectMethod(
			"createVolumeShaper",
			"(Landroid/media/VolumeShaper$Configuration;)Landroid/media/VolumeShaper;",
			arg0.object()
		);
	}
	inline void AudioTrack::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline jint AudioTrack::getAudioFormat() const
	{
		return callMethod<jint>(
			"getAudioFormat",
			"()I"
		);
	}
	inline jint AudioTrack::getAudioSessionId() const
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	inline jint AudioTrack::getBufferCapacityInFrames() const
	{
		return callMethod<jint>(
			"getBufferCapacityInFrames",
			"()I"
		);
	}
	inline jint AudioTrack::getBufferSizeInFrames() const
	{
		return callMethod<jint>(
			"getBufferSizeInFrames",
			"()I"
		);
	}
	inline jint AudioTrack::getChannelConfiguration() const
	{
		return callMethod<jint>(
			"getChannelConfiguration",
			"()I"
		);
	}
	inline jint AudioTrack::getChannelCount() const
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	inline android::media::AudioFormat AudioTrack::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	inline android::os::PersistableBundle AudioTrack::getMetrics() const
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline jint AudioTrack::getNotificationMarkerPosition() const
	{
		return callMethod<jint>(
			"getNotificationMarkerPosition",
			"()I"
		);
	}
	inline jint AudioTrack::getPerformanceMode() const
	{
		return callMethod<jint>(
			"getPerformanceMode",
			"()I"
		);
	}
	inline jint AudioTrack::getPlayState() const
	{
		return callMethod<jint>(
			"getPlayState",
			"()I"
		);
	}
	inline jint AudioTrack::getPlaybackHeadPosition() const
	{
		return callMethod<jint>(
			"getPlaybackHeadPosition",
			"()I"
		);
	}
	inline android::media::PlaybackParams AudioTrack::getPlaybackParams() const
	{
		return callObjectMethod(
			"getPlaybackParams",
			"()Landroid/media/PlaybackParams;"
		);
	}
	inline jint AudioTrack::getPlaybackRate() const
	{
		return callMethod<jint>(
			"getPlaybackRate",
			"()I"
		);
	}
	inline jint AudioTrack::getPositionNotificationPeriod() const
	{
		return callMethod<jint>(
			"getPositionNotificationPeriod",
			"()I"
		);
	}
	inline android::media::AudioDeviceInfo AudioTrack::getPreferredDevice() const
	{
		return callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	inline android::media::AudioDeviceInfo AudioTrack::getRoutedDevice() const
	{
		return callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	inline jint AudioTrack::getSampleRate() const
	{
		return callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	inline jint AudioTrack::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jint AudioTrack::getStreamType() const
	{
		return callMethod<jint>(
			"getStreamType",
			"()I"
		);
	}
	inline jboolean AudioTrack::getTimestamp(android::media::AudioTimestamp arg0) const
	{
		return callMethod<jboolean>(
			"getTimestamp",
			"(Landroid/media/AudioTimestamp;)Z",
			arg0.object()
		);
	}
	inline jint AudioTrack::getUnderrunCount() const
	{
		return callMethod<jint>(
			"getUnderrunCount",
			"()I"
		);
	}
	inline void AudioTrack::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	inline void AudioTrack::play() const
	{
		callMethod<void>(
			"play",
			"()V"
		);
	}
	inline void AudioTrack::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline jint AudioTrack::reloadStaticData() const
	{
		return callMethod<jint>(
			"reloadStaticData",
			"()I"
		);
	}
	inline void AudioTrack::removeOnRoutingChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;)V",
			arg0.object()
		);
	}
	inline jint AudioTrack::setAuxEffectSendLevel(jfloat arg0) const
	{
		return callMethod<jint>(
			"setAuxEffectSendLevel",
			"(F)I",
			arg0
		);
	}
	inline jint AudioTrack::setBufferSizeInFrames(jint arg0) const
	{
		return callMethod<jint>(
			"setBufferSizeInFrames",
			"(I)I",
			arg0
		);
	}
	inline jint AudioTrack::setLoopPoints(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"setLoopPoints",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint AudioTrack::setNotificationMarkerPosition(jint arg0) const
	{
		return callMethod<jint>(
			"setNotificationMarkerPosition",
			"(I)I",
			arg0
		);
	}
	inline jint AudioTrack::setPlaybackHeadPosition(jint arg0) const
	{
		return callMethod<jint>(
			"setPlaybackHeadPosition",
			"(I)I",
			arg0
		);
	}
	inline void AudioTrack::setPlaybackParams(android::media::PlaybackParams arg0) const
	{
		callMethod<void>(
			"setPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.object()
		);
	}
	inline void AudioTrack::setPlaybackPositionUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"setPlaybackPositionUpdateListener",
			"(Landroid/media/AudioTrack$OnPlaybackPositionUpdateListener;)V",
			arg0.object()
		);
	}
	inline void AudioTrack::setPlaybackPositionUpdateListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setPlaybackPositionUpdateListener",
			"(Landroid/media/AudioTrack$OnPlaybackPositionUpdateListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint AudioTrack::setPlaybackRate(jint arg0) const
	{
		return callMethod<jint>(
			"setPlaybackRate",
			"(I)I",
			arg0
		);
	}
	inline jint AudioTrack::setPositionNotificationPeriod(jint arg0) const
	{
		return callMethod<jint>(
			"setPositionNotificationPeriod",
			"(I)I",
			arg0
		);
	}
	inline jboolean AudioTrack::setPreferredDevice(android::media::AudioDeviceInfo arg0) const
	{
		return callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.object()
		);
	}
	inline jint AudioTrack::setPresentation(android::media::AudioPresentation arg0) const
	{
		return callMethod<jint>(
			"setPresentation",
			"(Landroid/media/AudioPresentation;)I",
			arg0.object()
		);
	}
	inline jint AudioTrack::setStereoVolume(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jint>(
			"setStereoVolume",
			"(FF)I",
			arg0,
			arg1
		);
	}
	inline jint AudioTrack::setVolume(jfloat arg0) const
	{
		return callMethod<jint>(
			"setVolume",
			"(F)I",
			arg0
		);
	}
	inline void AudioTrack::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline jint AudioTrack::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"write",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jint AudioTrack::write(JShortArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"write",
			"([SII)I",
			arg0.object<jshortArray>(),
			arg1,
			arg2
		);
	}
	inline jint AudioTrack::write(java::nio::ByteBuffer arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jint AudioTrack::write(JByteArray arg0, jint arg1, jint arg2, jint arg3) const
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
	inline jint AudioTrack::write(JFloatArray arg0, jint arg1, jint arg2, jint arg3) const
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
	inline jint AudioTrack::write(JShortArray arg0, jint arg1, jint arg2, jint arg3) const
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
	inline jint AudioTrack::write(java::nio::ByteBuffer arg0, jint arg1, jint arg2, jlong arg3) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
