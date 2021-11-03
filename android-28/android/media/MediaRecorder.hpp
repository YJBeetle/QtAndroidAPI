#pragma once

#include "../../JObject.hpp"

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
	class CamcorderProfile;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRecorder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRecorder(QJniObject obj);
		
		// Constructors
		MediaRecorder();
		
		// Methods
		static jint getAudioSourceMax();
		void addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1);
		JObject getActiveMicrophones();
		jint getMaxAmplitude();
		android::os::PersistableBundle getMetrics();
		android::media::AudioDeviceInfo getPreferredDevice();
		android::media::AudioDeviceInfo getRoutedDevice();
		android::view::Surface getSurface();
		void pause();
		void prepare();
		void release();
		void removeOnRoutingChangedListener(JObject arg0);
		void reset();
		void resume();
		void setAudioChannels(jint arg0);
		void setAudioEncoder(jint arg0);
		void setAudioEncodingBitRate(jint arg0);
		void setAudioSamplingRate(jint arg0);
		void setAudioSource(jint arg0);
		void setCamera(android::hardware::Camera arg0);
		void setCaptureRate(jdouble arg0);
		void setInputSurface(android::view::Surface arg0);
		void setLocation(jfloat arg0, jfloat arg1);
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
		void setPreviewDisplay(android::view::Surface arg0);
		void setProfile(android::media::CamcorderProfile arg0);
		void setVideoEncoder(jint arg0);
		void setVideoEncodingBitRate(jint arg0);
		void setVideoEncodingProfileLevel(jint arg0, jint arg1);
		void setVideoFrameRate(jint arg0);
		void setVideoSize(jint arg0, jint arg1);
		void setVideoSource(jint arg0);
		void start();
		void stop();
	};
} // namespace android::media

