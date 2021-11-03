#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::hardware
{
	class Camera;
}
namespace android::media
{
	class AudioDeviceInfo;
}
namespace android::media
{
	class AudioManager_AudioRecordingCallback;
}
namespace android::media
{
	class AudioRecordingConfiguration;
}
namespace android::media
{
	class CamcorderProfile;
}
namespace android::media
{
	class EncoderProfiles_AudioProfile;
}
namespace android::media
{
	class EncoderProfiles_VideoProfile;
}
namespace android::media::metrics
{
	class LogSessionId;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::view
{
	class Surface;
}
namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}
class JString;

namespace android::media
{
	class MediaRecorder : public JObject
	{
	public:
		// Fields
		static jint MEDIA_ERROR_SERVER_DIED();
		static jint MEDIA_RECORDER_ERROR_UNKNOWN();
		static jint MEDIA_RECORDER_INFO_MAX_DURATION_REACHED();
		static jint MEDIA_RECORDER_INFO_MAX_FILESIZE_APPROACHING();
		static jint MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED();
		static jint MEDIA_RECORDER_INFO_NEXT_OUTPUT_FILE_STARTED();
		static jint MEDIA_RECORDER_INFO_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRecorder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRecorder(QAndroidJniObject obj);
		
		// Constructors
		MediaRecorder();
		MediaRecorder(android::content::Context arg0);
		
		// Methods
		static jint getAudioSourceMax();
		void addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1) const;
		JObject getActiveMicrophones() const;
		android::media::AudioRecordingConfiguration getActiveRecordingConfiguration() const;
		android::media::metrics::LogSessionId getLogSessionId() const;
		jint getMaxAmplitude() const;
		android::os::PersistableBundle getMetrics() const;
		android::media::AudioDeviceInfo getPreferredDevice() const;
		android::media::AudioDeviceInfo getRoutedDevice() const;
		android::view::Surface getSurface() const;
		jboolean isPrivacySensitive() const;
		void pause() const;
		void prepare() const;
		void registerAudioRecordingCallback(JObject arg0, android::media::AudioManager_AudioRecordingCallback arg1) const;
		void release() const;
		void removeOnRoutingChangedListener(JObject arg0) const;
		void reset() const;
		void resume() const;
		void setAudioChannels(jint arg0) const;
		void setAudioEncoder(jint arg0) const;
		void setAudioEncodingBitRate(jint arg0) const;
		void setAudioProfile(android::media::EncoderProfiles_AudioProfile arg0) const;
		void setAudioSamplingRate(jint arg0) const;
		void setAudioSource(jint arg0) const;
		void setCamera(android::hardware::Camera arg0) const;
		void setCaptureRate(jdouble arg0) const;
		void setInputSurface(android::view::Surface arg0) const;
		void setLocation(jfloat arg0, jfloat arg1) const;
		void setLogSessionId(android::media::metrics::LogSessionId arg0) const;
		void setMaxDuration(jint arg0) const;
		void setMaxFileSize(jlong arg0) const;
		void setNextOutputFile(java::io::File arg0) const;
		void setNextOutputFile(java::io::FileDescriptor arg0) const;
		void setOnErrorListener(JObject arg0) const;
		void setOnInfoListener(JObject arg0) const;
		void setOrientationHint(jint arg0) const;
		void setOutputFile(java::io::File arg0) const;
		void setOutputFile(java::io::FileDescriptor arg0) const;
		void setOutputFile(JString arg0) const;
		void setOutputFormat(jint arg0) const;
		jboolean setPreferredDevice(android::media::AudioDeviceInfo arg0) const;
		jboolean setPreferredMicrophoneDirection(jint arg0) const;
		jboolean setPreferredMicrophoneFieldDimension(jfloat arg0) const;
		void setPreviewDisplay(android::view::Surface arg0) const;
		void setPrivacySensitive(jboolean arg0) const;
		void setProfile(android::media::CamcorderProfile arg0) const;
		void setVideoEncoder(jint arg0) const;
		void setVideoEncodingBitRate(jint arg0) const;
		void setVideoEncodingProfileLevel(jint arg0, jint arg1) const;
		void setVideoFrameRate(jint arg0) const;
		void setVideoProfile(android::media::EncoderProfiles_VideoProfile arg0) const;
		void setVideoSize(jint arg0, jint arg1) const;
		void setVideoSource(jint arg0) const;
		void start() const;
		void stop() const;
		void unregisterAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0) const;
	};
} // namespace android::media

