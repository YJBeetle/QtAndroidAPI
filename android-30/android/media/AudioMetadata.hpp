#pragma once

#include "./AudioMetadata.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject AudioMetadata::createMap()
	{
		return callStaticObjectMethod(
			"android.media.AudioMetadata",
			"createMap",
			"()Landroid/media/AudioMetadataMap;"
		);
	}
} // namespace android::media

// Base class headers

