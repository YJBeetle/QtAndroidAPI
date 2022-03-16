#pragma once

#include "../../JIntArray.hpp"
#include "./projection/MediaProjection.def.hpp"
#include "./AudioPlaybackCaptureConfiguration.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JIntArray AudioPlaybackCaptureConfiguration::getExcludeUids() const
	{
		return callObjectMethod(
			"getExcludeUids",
			"()[I"
		);
	}
	inline JIntArray AudioPlaybackCaptureConfiguration::getExcludeUsages() const
	{
		return callObjectMethod(
			"getExcludeUsages",
			"()[I"
		);
	}
	inline JIntArray AudioPlaybackCaptureConfiguration::getMatchingUids() const
	{
		return callObjectMethod(
			"getMatchingUids",
			"()[I"
		);
	}
	inline JIntArray AudioPlaybackCaptureConfiguration::getMatchingUsages() const
	{
		return callObjectMethod(
			"getMatchingUsages",
			"()[I"
		);
	}
	inline android::media::projection::MediaProjection AudioPlaybackCaptureConfiguration::getMediaProjection() const
	{
		return callObjectMethod(
			"getMediaProjection",
			"()Landroid/media/projection/MediaProjection;"
		);
	}
} // namespace android::media

// Base class headers

