#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "./PixelCopy_Result.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::Bitmap PixelCopy_Result::getBitmap() const
	{
		return callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline jint PixelCopy_Result::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
