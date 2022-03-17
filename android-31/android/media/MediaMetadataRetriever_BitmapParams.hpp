#pragma once

#include "../graphics/Bitmap_Config.def.hpp"
#include "./MediaMetadataRetriever_BitmapParams.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaMetadataRetriever_BitmapParams::MediaMetadataRetriever_BitmapParams()
		: JObject(
			"android.media.MediaMetadataRetriever$BitmapParams",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::Bitmap_Config MediaMetadataRetriever_BitmapParams::getActualConfig() const
	{
		return callObjectMethod(
			"getActualConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	inline android::graphics::Bitmap_Config MediaMetadataRetriever_BitmapParams::getPreferredConfig() const
	{
		return callObjectMethod(
			"getPreferredConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	inline void MediaMetadataRetriever_BitmapParams::setPreferredConfig(android::graphics::Bitmap_Config arg0) const
	{
		callMethod<void>(
			"setPreferredConfig",
			"(Landroid/graphics/Bitmap$Config;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
