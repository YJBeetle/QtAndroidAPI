#include "../hardware/Camera.hpp"
#include "./AudioDeviceInfo.hpp"
#include "./AudioManager_AudioRecordingCallback.hpp"
#include "./AudioRecordingConfiguration.hpp"
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
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_ERROR_SERVER_DIED"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_ERROR_UNKNOWN"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_DURATION_REACHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_DURATION_REACHED"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_FILESIZE_APPROACHING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_FILESIZE_APPROACHING"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_NEXT_OUTPUT_FILE_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_NEXT_OUTPUT_FILE_STARTED"
		);
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_UNKNOWN"
		);
	}
	
	MediaRecorder::MediaRecorder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaRecorder::MediaRecorder()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRecorder",
			"()V"
		);
	}
	
	// Methods
	jint MediaRecorder::getAudioSourceMax()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.MediaRecorder",
			"getAudioSourceMax",
			"()I"
		);
	}
	void MediaRecorder::addOnRoutingChangedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaRecorder::getActiveMicrophones()
	{
		return __thiz.callObjectMethod(
			"getActiveMicrophones",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject MediaRecorder::getActiveRecordingConfiguration()
	{
		return __thiz.callObjectMethod(
			"getActiveRecordingConfiguration",
			"()Landroid/media/AudioRecordingConfiguration;"
		);
	}
	jint MediaRecorder::getMaxAmplitude()
	{
		return __thiz.callMethod<jint>(
			"getMaxAmplitude",
			"()I"
		);
	}
	QAndroidJniObject MediaRecorder::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	QAndroidJniObject MediaRecorder::getPreferredDevice()
	{
		return __thiz.callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	QAndroidJniObject MediaRecorder::getRoutedDevice()
	{
		return __thiz.callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	QAndroidJniObject MediaRecorder::getSurface()
	{
		return __thiz.callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	void MediaRecorder::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V"
		);
	}
	void MediaRecorder::prepare()
	{
		__thiz.callMethod<void>(
			"prepare",
			"()V"
		);
	}
	void MediaRecorder::registerAudioRecordingCallback(__JniBaseClass arg0, android::media::AudioManager_AudioRecordingCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerAudioRecordingCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaRecorder::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaRecorder::removeOnRoutingChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRecorder::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void MediaRecorder::resume()
	{
		__thiz.callMethod<void>(
			"resume",
			"()V"
		);
	}
	void MediaRecorder::setAudioChannels(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioChannels",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setAudioEncoder(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioEncoder",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setAudioEncodingBitRate(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioEncodingBitRate",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setAudioSamplingRate(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioSamplingRate",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setAudioSource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioSource",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setCamera(android::hardware::Camera arg0)
	{
		__thiz.callMethod<void>(
			"setCamera",
			"(Landroid/hardware/Camera;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRecorder::setCaptureRate(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setCaptureRate",
			"(D)V",
			arg0
		);
	}
	void MediaRecorder::setInputSurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setInputSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRecorder::setLocation(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setLocation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void MediaRecorder::setMaxDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxDuration",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setMaxFileSize(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setMaxFileSize",
			"(J)V",
			arg0
		);
	}
	void MediaRecorder::setNextOutputFile(java::io::File arg0)
	{
		__thiz.callMethod<void>(
			"setNextOutputFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRecorder::setNextOutputFile(java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setNextOutputFile",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRecorder::setOnErrorListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaRecorder$OnErrorListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRecorder::setOnInfoListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaRecorder$OnInfoListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRecorder::setOrientationHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrientationHint",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setOutputFile(java::io::File arg0)
	{
		__thiz.callMethod<void>(
			"setOutputFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRecorder::setOutputFile(java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setOutputFile",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRecorder::setOutputFile(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setOutputFile",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaRecorder::setOutputFile(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setOutputFile",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaRecorder::setOutputFormat(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOutputFormat",
			"(I)V",
			arg0
		);
	}
	jboolean MediaRecorder::setPreferredDevice(android::media::AudioDeviceInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean MediaRecorder::setPreferredMicrophoneDirection(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredMicrophoneDirection",
			"(I)Z",
			arg0
		);
	}
	jboolean MediaRecorder::setPreferredMicrophoneFieldDimension(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredMicrophoneFieldDimension",
			"(F)Z",
			arg0
		);
	}
	void MediaRecorder::setPreviewDisplay(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewDisplay",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRecorder::setProfile(android::media::CamcorderProfile arg0)
	{
		__thiz.callMethod<void>(
			"setProfile",
			"(Landroid/media/CamcorderProfile;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRecorder::setVideoEncoder(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoEncoder",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setVideoEncodingBitRate(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoEncodingBitRate",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setVideoEncodingProfileLevel(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setVideoEncodingProfileLevel",
			"(II)V",
			arg0,
			arg1
		);
	}
	void MediaRecorder::setVideoFrameRate(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoFrameRate",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::setVideoSize(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setVideoSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void MediaRecorder::setVideoSource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoSource",
			"(I)V",
			arg0
		);
	}
	void MediaRecorder::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void MediaRecorder::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void MediaRecorder::unregisterAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterAudioRecordingCallback",
			"(Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media

