#pragma once

#include "./AudioFormat.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AudioMixerAttributes.def.hpp"

namespace android::media
{
	// Fields
	inline JObject AudioMixerAttributes::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioMixerAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AudioMixerAttributes::MIXER_BEHAVIOR_BIT_PERFECT()
	{
		return getStaticField<jint>(
			"android.media.AudioMixerAttributes",
			"MIXER_BEHAVIOR_BIT_PERFECT"
		);
	}
	inline jint AudioMixerAttributes::MIXER_BEHAVIOR_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.AudioMixerAttributes",
			"MIXER_BEHAVIOR_DEFAULT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AudioMixerAttributes::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AudioMixerAttributes::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::media::AudioFormat AudioMixerAttributes::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	inline jint AudioMixerAttributes::getMixerBehavior() const
	{
		return callMethod<jint>(
			"getMixerBehavior",
			"()I"
		);
	}
	inline jint AudioMixerAttributes::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AudioMixerAttributes::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AudioMixerAttributes::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
