#pragma once

#include "../../JArray.hpp"
#include "./MediaPlayer_DrmInfo.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject MediaPlayer_DrmInfo::getPssh() const
	{
		return callObjectMethod(
			"getPssh",
			"()Ljava/util/Map;"
		);
	}
	inline JArray MediaPlayer_DrmInfo::getSupportedSchemes() const
	{
		return callObjectMethod(
			"getSupportedSchemes",
			"()[Ljava/util/UUID;"
		);
	}
} // namespace android::media

// Base class headers

