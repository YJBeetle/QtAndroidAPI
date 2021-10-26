#pragma once

#ifndef ANDROID_MEDIA_AUDIORECORDINGCONFIGURATION
#define ANDROID_MEDIA_AUDIORECORDINGCONFIGURATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::media
{
	class AudioFormat;
}
namespace __jni_impl::android::media
{
	class AudioDeviceInfo;
}

namespace __jni_impl::android::media
{
	class AudioRecordingConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getFormat();
		jint getAudioSource();
		jint getClientAudioSource();
		jint getClientAudioSessionId();
		QAndroidJniObject getClientFormat();
		QAndroidJniObject getAudioDevice();
		jboolean isClientSilenced();
		QAndroidJniObject getClientEffects();
		QAndroidJniObject getEffects();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"
#include "AudioFormat.hpp"
#include "AudioDeviceInfo.hpp"

namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject AudioRecordingConfiguration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecordingConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void AudioRecordingConfiguration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioRecordingConfiguration",
			"(V)V");
	}
	
	// Methods
	jboolean AudioRecordingConfiguration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AudioRecordingConfiguration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	jint AudioRecordingConfiguration::getAudioSource()
	{
		return __thiz.callMethod<jint>(
			"getAudioSource",
			"()I"
		);
	}
	jint AudioRecordingConfiguration::getClientAudioSource()
	{
		return __thiz.callMethod<jint>(
			"getClientAudioSource",
			"()I"
		);
	}
	jint AudioRecordingConfiguration::getClientAudioSessionId()
	{
		return __thiz.callMethod<jint>(
			"getClientAudioSessionId",
			"()I"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getClientFormat()
	{
		return __thiz.callObjectMethod(
			"getClientFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getAudioDevice()
	{
		return __thiz.callObjectMethod(
			"getAudioDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jboolean AudioRecordingConfiguration::isClientSilenced()
	{
		return __thiz.callMethod<jboolean>(
			"isClientSilenced",
			"()Z"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getClientEffects()
	{
		return __thiz.callObjectMethod(
			"getClientEffects",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getEffects()
	{
		return __thiz.callObjectMethod(
			"getEffects",
			"()Ljava/util/List;"
		);
	}
	jint AudioRecordingConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AudioRecordingConfiguration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioRecordingConfiguration : public __jni_impl::android::media::AudioRecordingConfiguration
	{
	public:
		AudioRecordingConfiguration(QAndroidJniObject obj) { __thiz = obj; }
		AudioRecordingConfiguration()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIORECORDINGCONFIGURATION

