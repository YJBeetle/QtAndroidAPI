#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "./PixelCopy_Request.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::Bitmap PixelCopy_Request::getDestinationBitmap() const
	{
		return callObjectMethod(
			"getDestinationBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline android::graphics::Rect PixelCopy_Request::getSourceRect() const
	{
		return callObjectMethod(
			"getSourceRect",
			"()Landroid/graphics/Rect;"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
