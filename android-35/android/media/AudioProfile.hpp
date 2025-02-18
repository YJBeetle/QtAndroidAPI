#pragma once

#include "../../JIntArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AudioProfile.def.hpp"

namespace android::media
{
	// Fields
	inline jint AudioProfile::AUDIO_ENCAPSULATION_TYPE_IEC61937()
	{
		return getStaticField<jint>(
			"android.media.AudioProfile",
			"AUDIO_ENCAPSULATION_TYPE_IEC61937"
		);
	}
	inline jint AudioProfile::AUDIO_ENCAPSULATION_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.media.AudioProfile",
			"AUDIO_ENCAPSULATION_TYPE_NONE"
		);
	}
	inline jint AudioProfile::AUDIO_ENCAPSULATION_TYPE_PCM()
	{
		return getStaticField<jint>(
			"android.media.AudioProfile",
			"AUDIO_ENCAPSULATION_TYPE_PCM"
		);
	}
	inline JObject AudioProfile::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioProfile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AudioProfile::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AudioProfile::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JIntArray AudioProfile::getChannelIndexMasks() const
	{
		return callObjectMethod(
			"getChannelIndexMasks",
			"()[I"
		);
	}
	inline JIntArray AudioProfile::getChannelMasks() const
	{
		return callObjectMethod(
			"getChannelMasks",
			"()[I"
		);
	}
	inline jint AudioProfile::getEncapsulationType() const
	{
		return callMethod<jint>(
			"getEncapsulationType",
			"()I"
		);
	}
	inline jint AudioProfile::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	inline JIntArray AudioProfile::getSampleRates() const
	{
		return callObjectMethod(
			"getSampleRates",
			"()[I"
		);
	}
	inline jint AudioProfile::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AudioProfile::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AudioProfile::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
