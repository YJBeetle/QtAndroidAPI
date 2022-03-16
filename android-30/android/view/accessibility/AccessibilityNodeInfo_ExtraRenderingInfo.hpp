#pragma once

#include "../../util/Size.def.hpp"
#include "./AccessibilityNodeInfo_ExtraRenderingInfo.def.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::util::Size AccessibilityNodeInfo_ExtraRenderingInfo::getLayoutSize() const
	{
		return callObjectMethod(
			"getLayoutSize",
			"()Landroid/util/Size;"
		);
	}
	inline jfloat AccessibilityNodeInfo_ExtraRenderingInfo::getTextSizeInPx() const
	{
		return callMethod<jfloat>(
			"getTextSizeInPx",
			"()F"
		);
	}
	inline jint AccessibilityNodeInfo_ExtraRenderingInfo::getTextSizeUnit() const
	{
		return callMethod<jint>(
			"getTextSizeUnit",
			"()I"
		);
	}
} // namespace android::view::accessibility

// Base class headers

