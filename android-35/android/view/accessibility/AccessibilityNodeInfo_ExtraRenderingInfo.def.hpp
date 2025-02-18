#pragma once

#include "../../../JObject.hpp"

namespace android::util
{
	class Size;
}

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_ExtraRenderingInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeInfo_ExtraRenderingInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeInfo_ExtraRenderingInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::util::Size getLayoutSize() const;
		jfloat getTextSizeInPx() const;
		jint getTextSizeUnit() const;
	};
} // namespace android::view::accessibility

