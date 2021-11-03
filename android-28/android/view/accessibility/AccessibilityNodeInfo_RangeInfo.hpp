#pragma once

#include "../../../JObject.hpp"

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_RangeInfo : public JObject
	{
	public:
		// Fields
		static jint RANGE_TYPE_FLOAT();
		static jint RANGE_TYPE_INT();
		static jint RANGE_TYPE_PERCENT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeInfo_RangeInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeInfo_RangeInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::accessibility::AccessibilityNodeInfo_RangeInfo obtain(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jfloat getCurrent();
		jfloat getMax();
		jfloat getMin();
		jint getType();
	};
} // namespace android::view::accessibility

