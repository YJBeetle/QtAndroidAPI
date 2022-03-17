#pragma once

#include "../../../JCharArray.hpp"
#include "../Rect.def.hpp"
#include "./MeasuredText.def.hpp"

namespace android::graphics::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MeasuredText::getBounds(jint arg0, jint arg1, android::graphics::Rect arg2) const
	{
		callMethod<void>(
			"getBounds",
			"(IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jfloat MeasuredText::getCharWidthAt(jint arg0) const
	{
		return callMethod<jfloat>(
			"getCharWidthAt",
			"(I)F",
			arg0
		);
	}
	inline jfloat MeasuredText::getWidth(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getWidth",
			"(II)F",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::text;
#endif
