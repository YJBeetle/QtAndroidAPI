#pragma once

#include "./EncoderProfiles.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject EncoderProfiles::getAudioProfiles() const
	{
		return callObjectMethod(
			"getAudioProfiles",
			"()Ljava/util/List;"
		);
	}
	inline jint EncoderProfiles::getDefaultDurationSeconds() const
	{
		return callMethod<jint>(
			"getDefaultDurationSeconds",
			"()I"
		);
	}
	inline jint EncoderProfiles::getRecommendedFileFormat() const
	{
		return callMethod<jint>(
			"getRecommendedFileFormat",
			"()I"
		);
	}
	inline JObject EncoderProfiles::getVideoProfiles() const
	{
		return callObjectMethod(
			"getVideoProfiles",
			"()Ljava/util/List;"
		);
	}
} // namespace android::media

// Base class headers

