#include "../hardware/Camera.hpp"
#include "./AudioDeviceInfo.hpp"
#include "./CamcorderProfile.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../view/Surface.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "./MediaRecorder.hpp"

namespace android::media
{
	// Fields
	jint MediaRecorder::MEDIA_ERROR_SERVER_DIED()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_ERROR_SERVER_DIED"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_ERROR_UNKNOWN"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_DURATION_REACHED()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_DURATION_REACHED"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_FILESIZE_APPROACHING()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_FILESIZE_APPROACHING"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_NEXT_OUTPUT_FILE_STARTED()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_NEXT_OUTPUT_FILE_STARTED"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	MediaRecorder::MediaRecorder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaRecorder::MediaRecorder()
		: JObject(
			"android.media.MediaRecorder",
			"()V"
		) {}
	
	// Methods
	jint MediaRecorder::getAudioSourceMax()
	{
		return callStaticMethod<jint>(
			"android.media.MediaRecorder",
			"getAudioSourceMax",
			"()I"
		);
	}
	void MediaRecorder::addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject MediaRecorder::getActiveMicrophones()
	{
		return callObjectMethod(
			"getActiveMicrophones",
			"()Ljava/util/List;"
		);
	}
	jint MediaRecorder::getMaxAmplitude()
	{
		return callMethod<jint>(
			"getMaxAmplitude",
			"()I"
		);
	}
	android::os::PersistableBundle MediaRecorder::getMetrics()
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	android::media::AudioDeviceInfo MediaRecorder::getPreferredDevice()
	{
		return callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	android::media::AudioDeviceInfo MediaRecorder::getRoutedDevice()
	{
		return callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	android::view::Surface MediaRecorder::getSurface()
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	void MediaRecorder::pause()
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	void MediaRecorder::prepare()
	{
		callMethod<void>(
			"prepare",
			"()V"
		);
	}
	void MediaRecorder::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaRecorder::removeOnRoutingChangedListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;)V",
			arg0.object()
		);
	}
	void MediaRecorder::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void MediaRecorder::resume()
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	void MediaRecorder::setAudioChannels(jint arg0)
	{
		callMethod<void>(
			"setAudioChannels",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setAudioEncoder(jint arg0)
	{
		callMethod<void>(
			"setAudioEncoder",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setAudioEncodingBitRate(jint arg0)
	{
		callMethod<void>(
			"setAudioEncodingBitRate",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setAudioSamplingRate(jint arg0)
	{
		callMethod<void>(
			"setAudioSamplingRate",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setAudioSource(jint arg0)
	{
		callMethod<void>(
			"setAudioSource",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setCamera(android::hardware::Camera arg0)
	{
		callMethod<void>(
			"setCamera",
			"(Landroid/hardware/Camera;)V",
			arg0.object()
		);
	}
	void MediaRecorder::setCaptureRate(jdouble arg0)
	{
		callMethod<void>(
			"setCaptureRate",
			"(D)V",
			arg0
		);
	}
	void MediaRecorder::setInputSurface(android::view::Surface arg0)
	{
		callMethod<void>(
			"setInputSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void MediaRecorder::setLocation(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setLocation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void MediaRecorder::setMaxDuration(jint arg0)
	{
		callMethod<void>(
			"setMaxDuration",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setMaxFileSize(jlong arg0)
	{
		callMethod<void>(
			"setMaxFileSize",
			"(J)V",
			arg0
		);
	}
	void MediaRecorder::setNextOutputFile(java::io::File arg0)
	{
		callMethod<void>(
			"setNextOutputFile",
			"(Ljava/io/File;)V",
			arg0.object()
		);
	}
	void MediaRecorder::setNextOutputFile(java::io::FileDescriptor arg0)
	{
		callMethod<void>(
			"setNextOutputFile",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void MediaRecorder::setOnErrorListener(JObject arg0)
	{
		callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaRecorder$OnErrorListener;)V",
			arg0.object()
		);
	}
	void MediaRecorder::setOnInfoListener(JObject arg0)
	{
		callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaRecorder$OnInfoListener;)V",
			arg0.object()
		);
	}
	void MediaRecorder::setOrientationHint(jint arg0)
	{
		callMethod<void>(
			"setOrientationHint",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setOutputFile(java::io::File arg0)
	{
		callMethod<void>(
			"setOutputFile",
			"(Ljava/io/File;)V",
			arg0.object()
		);
	}
	void MediaRecorder::setOutputFile(java::io::FileDescriptor arg0)
	{
		callMethod<void>(
			"setOutputFile",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void MediaRecorder::setOutputFile(jstring arg0)
	{
		callMethod<void>(
			"setOutputFile",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaRecorder::setOutputFormat(jint arg0)
	{
		callMethod<void>(
			"setOutputFormat",
			"(I)V",
			arg0
		);
	}
	jboolean MediaRecorder::setPreferredDevice(android::media::AudioDeviceInfo arg0)
	{
		return callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.object()
		);
	}
	void MediaRecorder::setPreviewDisplay(android::view::Surface arg0)
	{
		callMethod<void>(
			"setPreviewDisplay",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void MediaRecorder::setProfile(android::media::CamcorderProfile arg0)
	{
		callMethod<void>(
			"setProfile",
			"(Landroid/media/CamcorderProfile;)V",
			arg0.object()
		);
	}
	void MediaRecorder::setVideoEncoder(jint arg0)
	{
		callMethod<void>(
			"setVideoEncoder",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setVideoEncodingBitRate(jint arg0)
	{
		callMethod<void>(
			"setVideoEncodingBitRate",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setVideoEncodingProfileLevel(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setVideoEncodingProfileLevel",
			"(II)V",
			arg0,
			arg1
		);
	}
	void MediaRecorder::setVideoFrameRate(jint arg0)
	{
		callMethod<void>(
			"setVideoFrameRate",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setVideoSize(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setVideoSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void MediaRecorder::setVideoSource(jint arg0)
	{
		callMethod<void>(
			"setVideoSource",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void MediaRecorder::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media

