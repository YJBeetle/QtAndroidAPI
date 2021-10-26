#pragma once

#ifndef ANDROID_MEDIA_AUDIORECORD
#define ANDROID_MEDIA_AUDIORECORD

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::android::media
{
	class AudioFormat;
}
namespace __jni_impl::android::media
{
	class AudioRecordingConfiguration;
}
namespace __jni_impl::android::media
{
	class MediaSyncEvent;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::media
{
	class AudioDeviceInfo;
}
namespace __jni_impl::android::media
{
	class AudioTimestamp;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::media
{
	class AudioManager_AudioRecordingCallback;
}

namespace __jni_impl::android::media
{
	class AudioRecord : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR();
		static jint ERROR_BAD_VALUE();
		static jint ERROR_DEAD_OBJECT();
		static jint ERROR_INVALID_OPERATION();
		static jint READ_BLOCKING();
		static jint READ_NON_BLOCKING();
		static jint RECORDSTATE_RECORDING();
		static jint RECORDSTATE_STOPPED();
		static jint STATE_INITIALIZED();
		static jint STATE_UNINITIALIZED();
		static jint SUCCESS();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		jint read(jshortArray arg0, jint arg1, jint arg2, jint arg3);
		jint read(jshortArray arg0, jint arg1, jint arg2);
		jint read(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read(jfloatArray arg0, jint arg1, jint arg2, jint arg3);
		jint read(__jni_impl::java::nio::ByteBuffer arg0, jint arg1);
		jint read(__jni_impl::java::nio::ByteBuffer arg0, jint arg1, jint arg2);
		void stop();
		jint getState();
		void release();
		QAndroidJniObject getFormat();
		QAndroidJniObject getActiveMicrophones();
		jboolean setPreferredMicrophoneDirection(jint arg0);
		jboolean setPreferredMicrophoneFieldDimension(jfloat arg0);
		QAndroidJniObject getActiveRecordingConfiguration();
		jint getAudioSource();
		jint getRecordingState();
		void startRecording();
		void startRecording(__jni_impl::android::media::MediaSyncEvent arg0);
		void setRecordPositionUpdateListener(__jni_impl::__JniBaseClass arg0);
		void setRecordPositionUpdateListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		jint getAudioFormat();
		jint getChannelConfiguration();
		jint getBufferSizeInFrames();
		jint getNotificationMarkerPosition();
		jint getPositionNotificationPeriod();
		static jint getMinBufferSize(jint arg0, jint arg1, jint arg2);
		jint setNotificationMarkerPosition(jint arg0);
		jint setPositionNotificationPeriod(jint arg0);
		jboolean setPreferredDevice(__jni_impl::android::media::AudioDeviceInfo arg0);
		QAndroidJniObject getPreferredDevice();
		QAndroidJniObject getRoutedDevice();
		void addOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void removeOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0);
		jint getTimestamp(__jni_impl::android::media::AudioTimestamp arg0, jint arg1);
		QAndroidJniObject getMetrics();
		jint getSampleRate();
		jint getChannelCount();
		void registerAudioRecordingCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::media::AudioManager_AudioRecordingCallback arg1);
		void unregisterAudioRecordingCallback(__jni_impl::android::media::AudioManager_AudioRecordingCallback arg0);
		jint getAudioSessionId();
	};
} // namespace __jni_impl::android::media

#include "../../java/nio/ByteBuffer.hpp"
#include "AudioFormat.hpp"
#include "AudioRecordingConfiguration.hpp"
#include "MediaSyncEvent.hpp"
#include "../os/Handler.hpp"
#include "AudioDeviceInfo.hpp"
#include "AudioTimestamp.hpp"
#include "../os/PersistableBundle.hpp"
#include "AudioManager_AudioRecordingCallback.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint AudioRecord::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR"
		);
	}
	jint AudioRecord::ERROR_BAD_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_BAD_VALUE"
		);
	}
	jint AudioRecord::ERROR_DEAD_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_DEAD_OBJECT"
		);
	}
	jint AudioRecord::ERROR_INVALID_OPERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"ERROR_INVALID_OPERATION"
		);
	}
	jint AudioRecord::READ_BLOCKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"READ_BLOCKING"
		);
	}
	jint AudioRecord::READ_NON_BLOCKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"READ_NON_BLOCKING"
		);
	}
	jint AudioRecord::RECORDSTATE_RECORDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"RECORDSTATE_RECORDING"
		);
	}
	jint AudioRecord::RECORDSTATE_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"RECORDSTATE_STOPPED"
		);
	}
	jint AudioRecord::STATE_INITIALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"STATE_INITIALIZED"
		);
	}
	jint AudioRecord::STATE_UNINITIALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"STATE_UNINITIALIZED"
		);
	}
	jint AudioRecord::SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioRecord",
			"SUCCESS"
		);
	}
	
	// Constructors
	void AudioRecord::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioRecord",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jint AudioRecord::read(jshortArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([SIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint AudioRecord::read(jshortArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([SII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioRecord::read(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint AudioRecord::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioRecord::read(jfloatArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([FIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint AudioRecord::read(__jni_impl::java::nio::ByteBuffer arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint AudioRecord::read(__jni_impl::java::nio::ByteBuffer arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AudioRecord::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	jint AudioRecord::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	void AudioRecord::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	QAndroidJniObject AudioRecord::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	QAndroidJniObject AudioRecord::getActiveMicrophones()
	{
		return __thiz.callObjectMethod(
			"getActiveMicrophones",
			"()Ljava/util/List;"
		);
	}
	jboolean AudioRecord::setPreferredMicrophoneDirection(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredMicrophoneDirection",
			"(I)Z",
			arg0
		);
	}
	jboolean AudioRecord::setPreferredMicrophoneFieldDimension(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredMicrophoneFieldDimension",
			"(F)Z",
			arg0
		);
	}
	QAndroidJniObject AudioRecord::getActiveRecordingConfiguration()
	{
		return __thiz.callObjectMethod(
			"getActiveRecordingConfiguration",
			"()Landroid/media/AudioRecordingConfiguration;"
		);
	}
	jint AudioRecord::getAudioSource()
	{
		return __thiz.callMethod<jint>(
			"getAudioSource",
			"()I"
		);
	}
	jint AudioRecord::getRecordingState()
	{
		return __thiz.callMethod<jint>(
			"getRecordingState",
			"()I"
		);
	}
	void AudioRecord::startRecording()
	{
		__thiz.callMethod<void>(
			"startRecording",
			"()V"
		);
	}
	void AudioRecord::startRecording(__jni_impl::android::media::MediaSyncEvent arg0)
	{
		__thiz.callMethod<void>(
			"startRecording",
			"(Landroid/media/MediaSyncEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioRecord::setRecordPositionUpdateListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRecordPositionUpdateListener",
			"(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioRecord::setRecordPositionUpdateListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setRecordPositionUpdateListener",
			"(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint AudioRecord::getAudioFormat()
	{
		return __thiz.callMethod<jint>(
			"getAudioFormat",
			"()I"
		);
	}
	jint AudioRecord::getChannelConfiguration()
	{
		return __thiz.callMethod<jint>(
			"getChannelConfiguration",
			"()I"
		);
	}
	jint AudioRecord::getBufferSizeInFrames()
	{
		return __thiz.callMethod<jint>(
			"getBufferSizeInFrames",
			"()I"
		);
	}
	jint AudioRecord::getNotificationMarkerPosition()
	{
		return __thiz.callMethod<jint>(
			"getNotificationMarkerPosition",
			"()I"
		);
	}
	jint AudioRecord::getPositionNotificationPeriod()
	{
		return __thiz.callMethod<jint>(
			"getPositionNotificationPeriod",
			"()I"
		);
	}
	jint AudioRecord::getMinBufferSize(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.AudioRecord",
			"getMinBufferSize",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioRecord::setNotificationMarkerPosition(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setNotificationMarkerPosition",
			"(I)I",
			arg0
		);
	}
	jint AudioRecord::setPositionNotificationPeriod(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setPositionNotificationPeriod",
			"(I)I",
			arg0
		);
	}
	jboolean AudioRecord::setPreferredDevice(__jni_impl::android::media::AudioDeviceInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioRecord::getPreferredDevice()
	{
		return __thiz.callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	QAndroidJniObject AudioRecord::getRoutedDevice()
	{
		return __thiz.callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	void AudioRecord::addOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRecord$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AudioRecord::removeOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	jint AudioRecord::getTimestamp(__jni_impl::android::media::AudioTimestamp arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getTimestamp",
			"(Landroid/media/AudioTimestamp;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AudioRecord::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint AudioRecord::getSampleRate()
	{
		return __thiz.callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	jint AudioRecord::getChannelCount()
	{
		return __thiz.callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	void AudioRecord::registerAudioRecordingCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::media::AudioManager_AudioRecordingCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerAudioRecordingCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AudioRecord::unregisterAudioRecordingCallback(__jni_impl::android::media::AudioManager_AudioRecordingCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterAudioRecordingCallback",
			"(Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.__jniObject().object()
		);
	}
	jint AudioRecord::getAudioSessionId()
	{
		return __thiz.callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioRecord : public __jni_impl::android::media::AudioRecord
	{
	public:
		AudioRecord(QAndroidJniObject obj) { __thiz = obj; }
		AudioRecord(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIORECORD

