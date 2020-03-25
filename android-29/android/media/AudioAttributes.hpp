#pragma once

#ifndef ANDROID_MEDIA_AUDIOATTRIBUTES
#define ANDROID_MEDIA_AUDIOATTRIBUTES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media
{
	class AudioAttributes : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALLOW_CAPTURE_BY_ALL();
		static jint ALLOW_CAPTURE_BY_NONE();
		static jint ALLOW_CAPTURE_BY_SYSTEM();
		static jint CONTENT_TYPE_MOVIE();
		static jint CONTENT_TYPE_MUSIC();
		static jint CONTENT_TYPE_SONIFICATION();
		static jint CONTENT_TYPE_SPEECH();
		static jint CONTENT_TYPE_UNKNOWN();
		static QAndroidJniObject CREATOR();
		static jint FLAG_AUDIBILITY_ENFORCED();
		static jint FLAG_HW_AV_SYNC();
		static jint FLAG_LOW_LATENCY();
		static jint USAGE_ALARM();
		static jint USAGE_ASSISTANCE_ACCESSIBILITY();
		static jint USAGE_ASSISTANCE_NAVIGATION_GUIDANCE();
		static jint USAGE_ASSISTANCE_SONIFICATION();
		static jint USAGE_ASSISTANT();
		static jint USAGE_GAME();
		static jint USAGE_MEDIA();
		static jint USAGE_NOTIFICATION();
		static jint USAGE_NOTIFICATION_COMMUNICATION_DELAYED();
		static jint USAGE_NOTIFICATION_COMMUNICATION_INSTANT();
		static jint USAGE_NOTIFICATION_COMMUNICATION_REQUEST();
		static jint USAGE_NOTIFICATION_EVENT();
		static jint USAGE_NOTIFICATION_RINGTONE();
		static jint USAGE_UNKNOWN();
		static jint USAGE_VOICE_COMMUNICATION();
		static jint USAGE_VOICE_COMMUNICATION_SIGNALLING();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getFlags();
		jint getUsage();
		jint getVolumeControlStream();
		jboolean areHapticChannelsMuted();
		jint getAllowedCapturePolicy();
		jint getContentType();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint AudioAttributes::ALLOW_CAPTURE_BY_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"ALLOW_CAPTURE_BY_ALL");
	}
	jint AudioAttributes::ALLOW_CAPTURE_BY_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"ALLOW_CAPTURE_BY_NONE");
	}
	jint AudioAttributes::ALLOW_CAPTURE_BY_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"ALLOW_CAPTURE_BY_SYSTEM");
	}
	jint AudioAttributes::CONTENT_TYPE_MOVIE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_MOVIE");
	}
	jint AudioAttributes::CONTENT_TYPE_MUSIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_MUSIC");
	}
	jint AudioAttributes::CONTENT_TYPE_SONIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_SONIFICATION");
	}
	jint AudioAttributes::CONTENT_TYPE_SPEECH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_SPEECH");
	}
	jint AudioAttributes::CONTENT_TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_UNKNOWN");
	}
	QAndroidJniObject AudioAttributes::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint AudioAttributes::FLAG_AUDIBILITY_ENFORCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"FLAG_AUDIBILITY_ENFORCED");
	}
	jint AudioAttributes::FLAG_HW_AV_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"FLAG_HW_AV_SYNC");
	}
	jint AudioAttributes::FLAG_LOW_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"FLAG_LOW_LATENCY");
	}
	jint AudioAttributes::USAGE_ALARM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ALARM");
	}
	jint AudioAttributes::USAGE_ASSISTANCE_ACCESSIBILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANCE_ACCESSIBILITY");
	}
	jint AudioAttributes::USAGE_ASSISTANCE_NAVIGATION_GUIDANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANCE_NAVIGATION_GUIDANCE");
	}
	jint AudioAttributes::USAGE_ASSISTANCE_SONIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANCE_SONIFICATION");
	}
	jint AudioAttributes::USAGE_ASSISTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANT");
	}
	jint AudioAttributes::USAGE_GAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_GAME");
	}
	jint AudioAttributes::USAGE_MEDIA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_MEDIA");
	}
	jint AudioAttributes::USAGE_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION");
	}
	jint AudioAttributes::USAGE_NOTIFICATION_COMMUNICATION_DELAYED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_COMMUNICATION_DELAYED");
	}
	jint AudioAttributes::USAGE_NOTIFICATION_COMMUNICATION_INSTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_COMMUNICATION_INSTANT");
	}
	jint AudioAttributes::USAGE_NOTIFICATION_COMMUNICATION_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_COMMUNICATION_REQUEST");
	}
	jint AudioAttributes::USAGE_NOTIFICATION_EVENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_EVENT");
	}
	jint AudioAttributes::USAGE_NOTIFICATION_RINGTONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_RINGTONE");
	}
	jint AudioAttributes::USAGE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_UNKNOWN");
	}
	jint AudioAttributes::USAGE_VOICE_COMMUNICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_VOICE_COMMUNICATION");
	}
	jint AudioAttributes::USAGE_VOICE_COMMUNICATION_SIGNALLING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_VOICE_COMMUNICATION_SIGNALLING");
	}
	
	// Constructors
	void AudioAttributes::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioAttributes",
			"(V)V");
	}
	
	// Methods
	jboolean AudioAttributes::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject AudioAttributes::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint AudioAttributes::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint AudioAttributes::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I");
	}
	jint AudioAttributes::getUsage()
	{
		return __thiz.callMethod<jint>(
			"getUsage",
			"()I");
	}
	jint AudioAttributes::getVolumeControlStream()
	{
		return __thiz.callMethod<jint>(
			"getVolumeControlStream",
			"()I");
	}
	jboolean AudioAttributes::areHapticChannelsMuted()
	{
		return __thiz.callMethod<jboolean>(
			"areHapticChannelsMuted",
			"()Z");
	}
	jint AudioAttributes::getAllowedCapturePolicy()
	{
		return __thiz.callMethod<jint>(
			"getAllowedCapturePolicy",
			"()I");
	}
	jint AudioAttributes::getContentType()
	{
		return __thiz.callMethod<jint>(
			"getContentType",
			"()I");
	}
	jint AudioAttributes::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void AudioAttributes::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioAttributes : public __jni_impl::android::media::AudioAttributes
	{
	public:
		AudioAttributes(QAndroidJniObject obj) { __thiz = obj; }
		AudioAttributes()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOATTRIBUTES

