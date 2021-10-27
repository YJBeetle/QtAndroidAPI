#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionItemInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		AccessibilityNodeInfo_CollectionItemInfo(QAndroidJniObject obj);
		// Constructors
		AccessibilityNodeInfo_CollectionItemInfo() = default;
		
		// Methods
		static QAndroidJniObject obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4);
		static QAndroidJniObject obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4, jboolean arg5);
		jint getColumnIndex();
		jint getColumnSpan();
		jint getRowIndex();
		jint getRowSpan();
		jboolean isHeading();
		jboolean isSelected();
	};
} // namespace android::view::accessibility

