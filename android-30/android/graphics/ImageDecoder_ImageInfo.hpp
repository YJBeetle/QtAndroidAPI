#pragma once

#include "./ColorSpace.def.hpp"
#include "../util/Size.def.hpp"
#include "../../JString.hpp"
#include "./ImageDecoder_ImageInfo.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::ColorSpace ImageDecoder_ImageInfo::getColorSpace() const
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	inline JString ImageDecoder_ImageInfo::getMimeType() const
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline android::util::Size ImageDecoder_ImageInfo::getSize() const
	{
		return callObjectMethod(
			"getSize",
			"()Landroid/util/Size;"
		);
	}
	inline jboolean ImageDecoder_ImageInfo::isAnimated() const
	{
		return callMethod<jboolean>(
			"isAnimated",
			"()Z"
		);
	}
} // namespace android::graphics

// Base class headers

