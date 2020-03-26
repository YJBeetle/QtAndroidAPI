#pragma once

#ifndef ANDROID_MEDIA_AUDIOPLAYBACKCONFIGURATION
#define ANDROID_MEDIA_AUDIOPLAYBACKCONFIGURATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}

namespace __jni_impl::android::media
{
	class AudioPlaybackConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getAudioAttributes();
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"
#include "AudioAttributes.hpp"

namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject AudioPlaybackConfiguration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioPlaybackConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void AudioPlaybackConfiguration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioPlaybackConfiguration",
			"(V)V");
	}
	
	// Methods
	jboolean AudioPlaybackConfiguration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AudioPlaybackConfiguration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint AudioPlaybackConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AudioPlaybackConfiguration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AudioPlaybackConfiguration::getAudioAttributes()
	{
		return __thiz.callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioPlaybackConfiguration : public __jni_impl::android::media::AudioPlaybackConfiguration
	{
	public:
		AudioPlaybackConfiguration(QAndroidJniObject obj) { __thiz = obj; }
		AudioPlaybackConfiguration()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOPLAYBACKCONFIGURATION

