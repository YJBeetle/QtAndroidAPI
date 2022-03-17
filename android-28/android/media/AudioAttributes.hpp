#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AudioAttributes.def.hpp"

namespace android::media
{
	// Fields
	inline jint AudioAttributes::CONTENT_TYPE_MOVIE()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_MOVIE"
		);
	}
	inline jint AudioAttributes::CONTENT_TYPE_MUSIC()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_MUSIC"
		);
	}
	inline jint AudioAttributes::CONTENT_TYPE_SONIFICATION()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_SONIFICATION"
		);
	}
	inline jint AudioAttributes::CONTENT_TYPE_SPEECH()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_SPEECH"
		);
	}
	inline jint AudioAttributes::CONTENT_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"CONTENT_TYPE_UNKNOWN"
		);
	}
	inline JObject AudioAttributes::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AudioAttributes::FLAG_AUDIBILITY_ENFORCED()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"FLAG_AUDIBILITY_ENFORCED"
		);
	}
	inline jint AudioAttributes::FLAG_HW_AV_SYNC()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"FLAG_HW_AV_SYNC"
		);
	}
	inline jint AudioAttributes::FLAG_LOW_LATENCY()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"FLAG_LOW_LATENCY"
		);
	}
	inline jint AudioAttributes::USAGE_ALARM()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ALARM"
		);
	}
	inline jint AudioAttributes::USAGE_ASSISTANCE_ACCESSIBILITY()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANCE_ACCESSIBILITY"
		);
	}
	inline jint AudioAttributes::USAGE_ASSISTANCE_NAVIGATION_GUIDANCE()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANCE_NAVIGATION_GUIDANCE"
		);
	}
	inline jint AudioAttributes::USAGE_ASSISTANCE_SONIFICATION()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANCE_SONIFICATION"
		);
	}
	inline jint AudioAttributes::USAGE_ASSISTANT()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_ASSISTANT"
		);
	}
	inline jint AudioAttributes::USAGE_GAME()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_GAME"
		);
	}
	inline jint AudioAttributes::USAGE_MEDIA()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_MEDIA"
		);
	}
	inline jint AudioAttributes::USAGE_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION"
		);
	}
	inline jint AudioAttributes::USAGE_NOTIFICATION_COMMUNICATION_DELAYED()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_COMMUNICATION_DELAYED"
		);
	}
	inline jint AudioAttributes::USAGE_NOTIFICATION_COMMUNICATION_INSTANT()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_COMMUNICATION_INSTANT"
		);
	}
	inline jint AudioAttributes::USAGE_NOTIFICATION_COMMUNICATION_REQUEST()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_COMMUNICATION_REQUEST"
		);
	}
	inline jint AudioAttributes::USAGE_NOTIFICATION_EVENT()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_EVENT"
		);
	}
	inline jint AudioAttributes::USAGE_NOTIFICATION_RINGTONE()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_NOTIFICATION_RINGTONE"
		);
	}
	inline jint AudioAttributes::USAGE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_UNKNOWN"
		);
	}
	inline jint AudioAttributes::USAGE_VOICE_COMMUNICATION()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_VOICE_COMMUNICATION"
		);
	}
	inline jint AudioAttributes::USAGE_VOICE_COMMUNICATION_SIGNALLING()
	{
		return getStaticField<jint>(
			"android.media.AudioAttributes",
			"USAGE_VOICE_COMMUNICATION_SIGNALLING"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AudioAttributes::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AudioAttributes::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AudioAttributes::getContentType() const
	{
		return callMethod<jint>(
			"getContentType",
			"()I"
		);
	}
	inline jint AudioAttributes::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline jint AudioAttributes::getUsage() const
	{
		return callMethod<jint>(
			"getUsage",
			"()I"
		);
	}
	inline jint AudioAttributes::getVolumeControlStream() const
	{
		return callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	inline jint AudioAttributes::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AudioAttributes::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AudioAttributes::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
