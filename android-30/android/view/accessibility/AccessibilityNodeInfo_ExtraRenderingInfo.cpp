#include "../../util/Size.hpp"
#include "./AccessibilityNodeInfo_ExtraRenderingInfo.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// QAndroidJniObject forward
	AccessibilityNodeInfo_ExtraRenderingInfo::AccessibilityNodeInfo_ExtraRenderingInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::util::Size AccessibilityNodeInfo_ExtraRenderingInfo::getLayoutSize()
	{
		return callObjectMethod(
			"getLayoutSize",
			"()Landroid/util/Size;"
		);
	}
	jfloat AccessibilityNodeInfo_ExtraRenderingInfo::getTextSizeInPx()
	{
		return callMethod<jfloat>(
			"getTextSizeInPx",
			"()F"
		);
	}
	jint AccessibilityNodeInfo_ExtraRenderingInfo::getTextSizeUnit()
	{
		return callMethod<jint>(
			"getTextSizeUnit",
			"()I"
		);
	}
} // namespace android::view::accessibility

