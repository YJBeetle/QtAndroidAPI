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
		void addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1);
		JObject getActiveMicrophones();
		android::media::AudioRecordingConfiguration getActiveRecordingConfiguration();
		android::media::metrics::LogSessionId getLogSessionId();
		jint getMaxAmplitude();
		android::os::PersistableBundle getMetrics();
		android::media::AudioDeviceInfo getPreferredDevice();
		android::media::AudioDeviceInfo getRoutedDevice();
		android::view::Surface getSurface();
		jboolean isPrivacySensitive();
		void pause();
		void prepare();
		void registerAudioRecordingCallback(JObject arg0, android::media::AudioManager_AudioRecordingCallback arg1);
		void release();
		void removeOnRoutingChangedListener(JObject arg0);
		void reset();
		void resume();
		void setAudioChannels(jint arg0);
		void setAudioEncoder(jint arg0);
		void setAudioEncodingBitRate(jint arg0);
		void setAudioProfile(android::media::EncoderProfiles_AudioProfile arg0);
		void setAudioSamplingRate(jint arg0);
		void setAudioSource(jint arg0);
		void setCamera(android::hardware::Camera arg0);
		void setCaptureRate(jdouble arg0);
		void setInputSurface(android::view::Surface arg0);
		void setLocation(jfloat arg0, jfloat arg1);
		void setLogSessionId(android::media::metrics::LogSessionId arg0);
		void setMaxDuration(jint arg0);
		void setMaxFileSize(jlong arg0);
		void setNextOutputFile(java::io::File arg0);
		void setNextOutputFile(java::io::FileDescriptor arg0);
		void setOnErrorListener(JObject arg0);
		void setOnInfoListener(JObject arg0);
		void setOrientationHint(jint arg0);
		void setOutputFile(java::io::File arg0);
		void setOutputFile(java::io::FileDescriptor arg0);
		void setOutputFile(JString arg0);
		void setOutputFormat(jint arg0);
		jboolean setPreferredDevice(android::media::AudioDeviceInfo arg0);
		jboolean setPreferredMicrophoneDirection(jint arg0);
		jboolean setPreferredMicrophoneFieldDimension(jfloat arg0);
		void setPreviewDisplay(android::view::Surface arg0);
		void setPrivacySensitive(jboolean arg0);
		void setProfile(android::media::CamcorderProfile arg0);
		void setVideoEncoder(jint arg0);
		void setVideoEncodingBitRate(jint arg0);
		void setVideoEncodingProfileLevel(jint arg0, jint arg1);
		void setVideoFrameRate(jint arg0);
		void setVideoProfile(android::media::EncoderProfiles_VideoProfile arg0);
		void setVideoSize(jint arg0, jint arg1);
		void setVideoSource(jint arg0);
		void start();
		void stop();
		void unregisterAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0);
	};
} // namespace android::media

