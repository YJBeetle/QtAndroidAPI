#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::util
{
	class Size;
}

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_ExtraRenderingInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeInfo_ExtraRenderingInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeInfo_ExtraRenderingInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::util::Size getLayoutSize();
		jfloat getTextSizeInPx();
		jint getTextSizeUnit();
	};
} // namespace android::view::accessibility

