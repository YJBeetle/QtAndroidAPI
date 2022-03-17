#pragma once

#include "../hardware/Camera.def.hpp"
#include "./AudioDeviceInfo.def.hpp"
#include "./AudioManager_AudioRecordingCallback.def.hpp"
#include "./AudioRecordingConfiguration.def.hpp"
#include "./CamcorderProfile.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../view/Surface.def.hpp"
#include "../../java/io/File.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "./MediaRecorder.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaRecorder::MEDIA_ERROR_SERVER_DIED()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_ERROR_SERVER_DIED"
		);
	}
	inline jint MediaRecorder::MEDIA_RECORDER_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_ERROR_UNKNOWN"
		);
	}
	inline jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_DURATION_REACHED()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_DURATION_REACHED"
		);
	}
	inline jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_FILESIZE_APPROACHING()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_FILESIZE_APPROACHING"
		);
	}
	inline jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED"
		);
	}
	inline jint MediaRecorder::MEDIA_RECORDER_INFO_NEXT_OUTPUT_FILE_STARTED()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_NEXT_OUTPUT_FILE_STARTED"
		);
	}
	inline jint MediaRecorder::MEDIA_RECORDER_INFO_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_UNKNOWN"
		);
	}
	
	// Constructors
	inline MediaRecorder::MediaRecorder()
		: JObject(
			"android.media.MediaRecorder",
			"()V"
		) {}
	
	// Methods
	inline jint MediaRecorder::getAudioSourceMax()
	{
		return callStaticMethod<jint>(
			"android.media.MediaRecorder",
			"getAudioSourceMax",
			"()I"
		);
	}
	inline void MediaRecorder::addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject MediaRecorder::getActiveMicrophones() const
	{
		return callObjectMethod(
			"getActiveMicrophones",
			"()Ljava/util/List;"
		);
	}
	inline android::media::AudioRecordingConfiguration MediaRecorder::getActiveRecordingConfiguration() const
	{
		return callObjectMethod(
			"getActiveRecordingConfiguration",
			"()Landroid/media/AudioRecordingConfiguration;"
		);
	}
	inline jint MediaRecorder::getMaxAmplitude() const
	{
		return callMethod<jint>(
			"getMaxAmplitude",
			"()I"
		);
	}
	inline android::os::PersistableBundle MediaRecorder::getMetrics() const
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline android::media::AudioDeviceInfo MediaRecorder::getPreferredDevice() const
	{
		return callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	inline android::media::AudioDeviceInfo MediaRecorder::getRoutedDevice() const
	{
		return callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	inline android::view::Surface MediaRecorder::getSurface() const
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	inline jboolean MediaRecorder::isPrivacySensitive() const
	{
		return callMethod<jboolean>(
			"isPrivacySensitive",
			"()Z"
		);
	}
	inline void MediaRecorder::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	inline void MediaRecorder::prepare() const
	{
		callMethod<void>(
			"prepare",
			"()V"
		);
	}
	inline void MediaRecorder::registerAudioRecordingCallback(JObject arg0, android::media::AudioManager_AudioRecordingCallback arg1) const
	{
		callMethod<void>(
			"registerAudioRecordingCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaRecorder::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void MediaRecorder::removeOnRoutingChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;)V",
			arg0.object()
		);
	}
	inline void MediaRecorder::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void MediaRecorder::resume() const
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	inline void MediaRecorder::setAudioChannels(jint arg0) const
	{
		callMethod<void>(
			"setAudioChannels",
			"(I)V",
			arg0
		);
	}
	inline void MediaRecorder::setAudioEncoder(jint arg0) const
	{
		callMethod<void>(
			"setAudioEncoder",
			"(I)V",
			arg0
		);
	}
	inline void MediaRecorder::setAudioEncodingBitRate(jint arg0) const
	{
		callMethod<void>(
			"setAudioEncodingBitRate",
			"(I)V",
			arg0
		);
	}
	inline void MediaRecorder::setAudioSamplingRate(jint arg0) const
	{
		callMethod<void>(
			"setAudioSamplingRate",
			"(I)V",
			arg0
		);
	}
	inline void MediaRecorder::setAudioSource(jint arg0) const
	{
		callMethod<void>(
			"setAudioSource",
			"(I)V",
			arg0
		);
	}
	inline void MediaRecorder::setCamera(android::hardware::Camera arg0) const
	{
		callMethod<void>(
			"setCamera",
			"(Landroid/hardware/Camera;)V",
			arg0.object()
		);
	}
	inline void MediaRecorder::setCaptureRate(jdouble arg0) const
	{
		callMethod<void>(
			"setCaptureRate",
			"(D)V",
			arg0
		);
	}
	inline void MediaRecorder::setInputSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setInputSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void MediaRecorder::setLocation(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setLocation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void MediaRecorder::setMaxDuration(jint arg0) const
	{
		callMethod<void>(
			"setMaxDuration",
			"(I)V",
			arg0
		);
	}
	inline void MediaRecorder::setMaxFileSize(jlong arg0) const
	{
		callMethod<void>(
			"setMaxFileSize",
			"(J)V",
			arg0
		);
	}
	inline void MediaRecorder::setNextOutputFile(java::io::File arg0) const
	{
		callMethod<void>(
			"setNextOutputFile",
			"(Ljava/io/File;)V",
			arg0.object()
		);
	}
	inline void MediaRecorder::setNextOutputFile(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"setNextOutputFile",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void MediaRecorder::setOnErrorListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaRecorder$OnErrorListener;)V",
			arg0.object()
		);
	}
	inline void MediaRecorder::setOnInfoListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaRecorder$OnInfoListener;)V",
			arg0.object()
		);
	}
	inline void MediaRecorder::setOrientationHint(jint arg0) const
	{
		callMethod<void>(
			"setOrientationHint",
			"(I)V",
			arg0
		);
	}
	inline void MediaRecorder::setOutputFile(java::io::File arg0) const
	{
		callMethod<void>(
			"setOutputFile",
			"(Ljava/io/File;)V",
			arg0.object()
		);
	}
	inline void MediaRecorder::setOutputFile(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"setOutputFile",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void MediaRecorder::setOutputFile(JString arg0) const
	{
		callMethod<void>(
			"setOutputFile",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaRecorder::setOutputFormat(jint arg0) const
	{
		callMethod<void>(
			"setOutputFormat",
			"(I)V",
			arg0
		);
	}
	inline jboolean MediaRecorder::setPreferredDevice(android::media::AudioDeviceInfo arg0) const
	{
		return callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.object()
		);
	}
	inline jboolean MediaRecorder::setPreferredMicrophoneDirection(jint arg0) const
	{
		return callMethod<jboolean>(
			"setPreferredMicrophoneDirection",
			"(I)Z",
			arg0
		);
	}
	inline jboolean MediaRecorder::setPreferredMicrophoneFieldDimension(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setPreferredMicrophoneFieldDimension",
			"(F)Z",
			arg0
		);
	}
	inline void MediaRecorder::setPreviewDisplay(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setPreviewDisplay",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void MediaRecorder::setPrivacySensitive(jboolean arg0) const
	{
		callMethod<void>(
			"setPrivacySensitive",
			"(Z)V",
			arg0
		);
	}
	inline void MediaRecorder::setProfile(android::media::CamcorderProfile arg0) const
	{
		callMethod<void>(
			"setProfile",
			"(Landroid/media/CamcorderProfile;)V",
			arg0.object()
		);
	}
	inline void MediaRecorder::setVideoEncoder(jint arg0) const
	{
		callMethod<void>(
			"setVideoEncoder",
			"(I)V",
			arg0
		);
	}
	inline void MediaRecorder::setVideoEncodingBitRate(jint arg0) const
	{
		callMethod<void>(
			"setVideoEncodingBitRate",
			"(I)V",
			arg0
		);
	}
	inline void MediaRecorder::setVideoEncodingProfileLevel(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setVideoEncodingProfileLevel",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void MediaRecorder::setVideoFrameRate(jint arg0) const
	{
		callMethod<void>(
			"setVideoFrameRate",
			"(I)V",
			arg0
		);
	}
	inline void MediaRecorder::setVideoSize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setVideoSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void MediaRecorder::setVideoSource(jint arg0) const
	{
		callMethod<void>(
			"setVideoSource",
			"(I)V",
			arg0
		);
	}
	inline void MediaRecorder::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void MediaRecorder::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline void MediaRecorder::unregisterAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0) const
	{
		callMethod<void>(
			"unregisterAudioRecordingCallback",
			"(Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
