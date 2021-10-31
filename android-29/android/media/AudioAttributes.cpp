#include "../os/Parcel.hpp"
#include "./AudioAttributes.hpp"

namespace android::media
{
	// Fields
	jint AudioAttributes::ALLOW_CAPTURE_BY_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"ALLOW_CAPTURE_BY_ALL"
		);
	}
	jint AudioAttributes::ALLOW_CAPTURE_BY_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"ALLOW_CAPTURE_BY_NONE"
		);
	}
	jint AudioAttributes::ALLOW_CAPTURE_BY_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"ALLOW_CAPTURE_BY_SYSTEM"
		);
	}
	jint AudioAttributes::CONTENT_TYPE_MOVIE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_MOVIE"
		);
	}
	jint AudioAttributes::CONTENT_TYPE_MUSIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_MUSIC"
		);
	}
	jint AudioAttributes::CONTENT_TYPE_SONIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_SONIFICATION"
		);
	}
	jint AudioAttributes::CONTENT_TYPE_SPEECH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_SPEECH"
		);
	}
	jint AudioAttributes::CONTENT_TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_UNKNOWN"
		);
	}
	QAndroidJniObject AudioAttributes::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AudioAttributes::FLAG_AUDIBILITY_ENFORCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"FLAG_AUDIBILITY_ENFORCED"
		);
	}
	jint AudioAttributes::FLAG_HW_AV_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"FLAG_HW_AV_SYNC"
		);
	}
	jint AudioAttributes::FLAG_LOW_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"FLAG_LOW_LATENCY"
		);
	}
	jint AudioAttributes::USAGE_ALARM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ALARM"
		);
	}
	jint AudioAttributes::USAGE_ASSISTANCE_ACCESSIBILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANCE_ACCESSIBILITY"
		);
	}
	jint AudioAttributes::USAGE_ASSISTANCE_NAVIGATION_GUIDANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANCE_NAVIGATION_GUIDANCE"
		);
	}
	jint AudioAttributes::USAGE_ASSISTANCE_SONIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANCE_SONIFICATION"
		);
	}
	jint AudioAttributes::USAGE_ASSISTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANT"
		);
	}
	jint AudioAttributes::USAGE_GAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_GAME"
		);
	}
	jint AudioAttributes::USAGE_MEDIA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_MEDIA"
		);
	}
	jint AudioAttributes::USAGE_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION"
		);
	}
	jint AudioAttributes::USAGE_NOTIFICATION_COMMUNICATION_DELAYED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_COMMUNICATION_DELAYED"
		);
	}
	jint AudioAttributes::USAGE_NOTIFICATION_COMMUNICATION_INSTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_COMMUNICATION_INSTANT"
		);
	}
	jint AudioAttributes::USAGE_NOTIFICATION_COMMUNICATION_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_COMMUNICATION_REQUEST"
		);
	}
	jint AudioAttributes::USAGE_NOTIFICATION_EVENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_EVENT"
		);
	}
	jint AudioAttributes::USAGE_NOTIFICATION_RINGTONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_RINGTONE"
		);
	}
	jint AudioAttributes::USAGE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_UNKNOWN"
		);
	}
	jint AudioAttributes::USAGE_VOICE_COMMUNICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_VOICE_COMMUNICATION"
		);
	}
	jint AudioAttributes::USAGE_VOICE_COMMUNICATION_SIGNALLING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_VOICE_COMMUNICATION_SIGNALLING"
		);
	}
	
	// QAndroidJniObject forward
	AudioAttributes::AudioAttributes(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AudioAttributes::areHapticChannelsMuted()
	{
		return callMethod<jboolean>(
			"areHapticChannelsMuted",
			"()Z"
		);
	}
	jint AudioAttributes::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AudioAttributes::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AudioAttributes::getAllowedCapturePolicy()
	{
		return callMethod<jint>(
			"getAllowedCapturePolicy",
			"()I"
		);
	}
	jint AudioAttributes::getContentType()
	{
		return callMethod<jint>(
			"getContentType",
			"()I"
		);
	}
	jint AudioAttributes::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jint AudioAttributes::getUsage()
	{
		return callMethod<jint>(
			"getUsage",
			"()I"
		);
	}
	jint AudioAttributes::getVolumeControlStream()
	{
		return callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	jint AudioAttributes::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AudioAttributes::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AudioAttributes::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

