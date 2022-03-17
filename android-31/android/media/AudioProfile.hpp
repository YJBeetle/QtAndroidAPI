#pragma once

#include "../../JIntArray.hpp"
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
	
	// Constructors
	
	// Methods
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
	inline JString AudioProfile::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

