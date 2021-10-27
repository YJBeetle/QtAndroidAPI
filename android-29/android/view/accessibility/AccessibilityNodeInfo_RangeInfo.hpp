#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::accessibility
{
	class AccessibilityNodeInfo_RangeInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint RANGE_TYPE_FLOAT();
		static jint RANGE_TYPE_INT();
		static jint RANGE_TYPE_PERCENT();
		
		AccessibilityNodeInfo_RangeInfo(QAndroidJniObject obj);
		// Constructors
		AccessibilityNodeInfo_RangeInfo() = default;
		
		// Methods
		static QAndroidJniObject obtain(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jfloat getCurrent();
		jfloat getMax();
		jfloat getMin();
		jint getType();
	};
} // namespace android::view::accessibility

