#pragma once

#ifndef ANDROID_MEDIA_MEDIARECORDER
#define ANDROID_MEDIA_MEDIARECORDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::android::media
{
	class CamcorderProfile;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::android::media
{
	class AudioRecordingConfiguration;
}
namespace __jni_impl::android::hardware
{
	class Camera;
}
namespace __jni_impl::android::media
{
	class AudioManager_AudioRecordingCallback;
}
namespace __jni_impl::android::media
{
	class AudioDeviceInfo;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::media
{
	class MediaRecorder : public __JniBaseClass
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
		
		// Constructors
		void __constructor();
		
		// Methods
		void start();
		void resume();
		void stop();
		void prepare();
		void reset();
		void release();
		QAndroidJniObject getMetrics();
		void setInputSurface(__jni_impl::android::view::Surface arg0);
		void setAudioSource(jint arg0);
		static jint getAudioSourceMax();
		void setVideoSource(jint arg0);
		void setProfile(__jni_impl::android::media::CamcorderProfile arg0);
		void setCaptureRate(jdouble arg0);
		void setOrientationHint(jint arg0);
		void setOutputFormat(jint arg0);
		void setVideoSize(jint arg0, jint arg1);
		void setVideoFrameRate(jint arg0);
		void setMaxDuration(jint arg0);
		void setMaxFileSize(jlong arg0);
		void setAudioEncoder(jint arg0);
		void setVideoEncoder(jint arg0);
		void setAudioSamplingRate(jint arg0);
		void setAudioChannels(jint arg0);
		void setAudioEncodingBitRate(jint arg0);
		void setVideoEncodingBitRate(jint arg0);
		void setVideoEncodingProfileLevel(jint arg0, jint arg1);
		void setOutputFile(jstring arg0);
		void setOutputFile(__jni_impl::java::io::File arg0);
		void setOutputFile(__jni_impl::java::io::FileDescriptor arg0);
		void setNextOutputFile(__jni_impl::java::io::File arg0);
		void setNextOutputFile(__jni_impl::java::io::FileDescriptor arg0);
		jint getMaxAmplitude();
		QAndroidJniObject getActiveMicrophones();
		jboolean setPreferredMicrophoneDirection(jint arg0);
		jboolean setPreferredMicrophoneFieldDimension(jfloat arg0);
		QAndroidJniObject getActiveRecordingConfiguration();
		QAndroidJniObject getSurface();
		void setCamera(__jni_impl::android::hardware::Camera arg0);
		void pause();
		void registerAudioRecordingCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::media::AudioManager_AudioRecordingCallback arg1);
		void unregisterAudioRecordingCallback(__jni_impl::android::media::AudioManager_AudioRecordingCallback arg0);
		void setPreviewDisplay(__jni_impl::android::view::Surface arg0);
		jboolean setPreferredDevice(__jni_impl::android::media::AudioDeviceInfo arg0);
		QAndroidJniObject getPreferredDevice();
		QAndroidJniObject getRoutedDevice();
		void addOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void removeOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0);
		void setLocation(jfloat arg0, jfloat arg1);
		void setOnInfoListener(__jni_impl::__JniBaseClass arg0);
		void setOnErrorListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::media

#include "../os/PersistableBundle.hpp"
#include "../view/Surface.hpp"
#include "CamcorderProfile.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "AudioRecordingConfiguration.hpp"
#include "../hardware/Camera.hpp"
#include "AudioManager_AudioRecordingCallback.hpp"
#include "AudioDeviceInfo.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaRecorder::MEDIA_ERROR_SERVER_DIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_ERROR_SERVER_DIED");
	}
	jint MediaRecorder::MEDIA_RECORDER_ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_ERROR_UNKNOWN");
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_DURATION_REACHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_DURATION_REACHED");
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_FILESIZE_APPROACHING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_FILESIZE_APPROACHING");
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED");
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_NEXT_OUTPUT_FILE_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_NEXT_OUTPUT_FILE_STARTED");
	}
	jint MediaRecorder::MEDIA_RECORDER_INFO_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder",
			"MEDIA_RECORDER_INFO_UNKNOWN");
	}
	
	// Constructors
	void MediaRecorder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRecorder",
			"()V");
	}
	
	// Methods
	void MediaRecorder::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V");
	}
	void MediaRecorder::resume()
	{
		__thiz.callMethod<void>(
			"resume",
			"()V");
	}
	void MediaRecorder::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V");
	}
	void MediaRecorder::prepare()
	{
		__thiz.callMethod<void>(
			"prepare",
			"()V");
	}
	void MediaRecorder::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	void MediaRecorder::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V");
	}
	QAndroidJniObject MediaRecorder::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;");
	}
	void MediaRecorder::setInputSurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setInputSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object());
	}
	void MediaRecorder::setAudioSource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioSource",
			"(I)V",
			arg0);
	}
	jint MediaRecorder::getAudioSourceMax()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.MediaRecorder",
			"getAudioSourceMax",
			"()I");
	}
	void MediaRecorder::setVideoSource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoSource",
			"(I)V",
			arg0);
	}
	void MediaRecorder::setProfile(__jni_impl::android::media::CamcorderProfile arg0)
	{
		__thiz.callMethod<void>(
			"setProfile",
			"(Landroid/media/CamcorderProfile;)V",
			arg0.__jniObject().object());
	}
	void MediaRecorder::setCaptureRate(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setCaptureRate",
			"(D)V",
			arg0);
	}
	void MediaRecorder::setOrientationHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrientationHint",
			"(I)V",
			arg0);
	}
	void MediaRecorder::setOutputFormat(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOutputFormat",
			"(I)V",
			arg0);
	}
	void MediaRecorder::setVideoSize(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setVideoSize",
			"(II)V",
			arg0,
			arg1);
	}
	void MediaRecorder::setVideoFrameRate(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoFrameRate",
			"(I)V",
			arg0);
	}
	void MediaRecorder::setMaxDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxDuration",
			"(I)V",
			arg0);
	}
	void MediaRecorder::setMaxFileSize(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setMaxFileSize",
			"(J)V",
			arg0);
	}
	void MediaRecorder::setAudioEncoder(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioEncoder",
			"(I)V",
			arg0);
	}
	void MediaRecorder::setVideoEncoder(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoEncoder",
			"(I)V",
			arg0);
	}
	void MediaRecorder::setAudioSamplingRate(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioSamplingRate",
			"(I)V",
			arg0);
	}
	void MediaRecorder::setAudioChannels(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioChannels",
			"(I)V",
			arg0);
	}
	void MediaRecorder::setAudioEncodingBitRate(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioEncodingBitRate",
			"(I)V",
			arg0);
	}
	void MediaRecorder::setVideoEncodingBitRate(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoEncodingBitRate",
			"(I)V",
			arg0);
	}
	void MediaRecorder::setVideoEncodingProfileLevel(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setVideoEncodingProfileLevel",
			"(II)V",
			arg0,
			arg1);
	}
	void MediaRecorder::setOutputFile(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setOutputFile",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void MediaRecorder::setOutputFile(__jni_impl::java::io::File arg0)
	{
		__thiz.callMethod<void>(
			"setOutputFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void MediaRecorder::setOutputFile(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setOutputFile",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object());
	}
	void MediaRecorder::setNextOutputFile(__jni_impl::java::io::File arg0)
	{
		__thiz.callMethod<void>(
			"setNextOutputFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void MediaRecorder::setNextOutputFile(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setNextOutputFile",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object());
	}
	jint MediaRecorder::getMaxAmplitude()
	{
		return __thiz.callMethod<jint>(
			"getMaxAmplitude",
			"()I");
	}
	QAndroidJniObject MediaRecorder::getActiveMicrophones()
	{
		return __thiz.callObjectMethod(
			"getActiveMicrophones",
			"()Ljava/util/List;");
	}
	jboolean MediaRecorder::setPreferredMicrophoneDirection(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredMicrophoneDirection",
			"(I)Z",
			arg0);
	}
	jboolean MediaRecorder::setPreferredMicrophoneFieldDimension(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredMicrophoneFieldDimension",
			"(F)Z",
			arg0);
	}
	QAndroidJniObject MediaRecorder::getActiveRecordingConfiguration()
	{
		return __thiz.callObjectMethod(
			"getActiveRecordingConfiguration",
			"()Landroid/media/AudioRecordingConfiguration;");
	}
	QAndroidJniObject MediaRecorder::getSurface()
	{
		return __thiz.callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;");
	}
	void MediaRecorder::setCamera(__jni_impl::android::hardware::Camera arg0)
	{
		__thiz.callMethod<void>(
			"setCamera",
			"(Landroid/hardware/Camera;)V",
			arg0.__jniObject().object());
	}
	void MediaRecorder::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V");
	}
	void MediaRecorder::registerAudioRecordingCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::media::AudioManager_AudioRecordingCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerAudioRecordingCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaRecorder::unregisterAudioRecordingCallback(__jni_impl::android::media::AudioManager_AudioRecordingCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterAudioRecordingCallback",
			"(Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.__jniObject().object());
	}
	void MediaRecorder::setPreviewDisplay(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewDisplay",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object());
	}
	jboolean MediaRecorder::setPreferredDevice(__jni_impl::android::media::AudioDeviceInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaRecorder::getPreferredDevice()
	{
		return __thiz.callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;");
	}
	QAndroidJniObject MediaRecorder::getRoutedDevice()
	{
		return __thiz.callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;");
	}
	void MediaRecorder::addOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaRecorder::removeOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;)V",
			arg0.__jniObject().object());
	}
	void MediaRecorder::setLocation(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setLocation",
			"(FF)V",
			arg0,
			arg1);
	}
	void MediaRecorder::setOnInfoListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaRecorder$OnInfoListener;)V",
			arg0.__jniObject().object());
	}
	void MediaRecorder::setOnErrorListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaRecorder$OnErrorListener;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRecorder : public __jni_impl::android::media::MediaRecorder
	{
	public:
		MediaRecorder(QAndroidJniObject obj) { __thiz = obj; }
		MediaRecorder()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIARECORDER

