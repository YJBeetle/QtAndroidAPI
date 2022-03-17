#pragma once

#include "./DrmInitData.def.hpp"
#include "./MediaFormat.def.hpp"
#include "./MediaParser_TrackData.def.hpp"

namespace android::media
{
	// Fields
	inline android::media::DrmInitData MediaParser_TrackData::drmInitData()
	{
		return getObjectField(
			"drmInitData",
			"Landroid/media/DrmInitData;"
		);
	}
	inline android::media::MediaFormat MediaParser_TrackData::mediaFormat()
	{
		return getObjectField(
			"mediaFormat",
			"Landroid/media/MediaFormat;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
