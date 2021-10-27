#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint SELECTION_MODE_MULTIPLE();
		static jint SELECTION_MODE_NONE();
		static jint SELECTION_MODE_SINGLE();
		
		AccessibilityNodeInfo_CollectionInfo(QAndroidJniObject obj);
		// Constructors
		AccessibilityNodeInfo_CollectionInfo() = default;
		
		// Methods
		static QAndroidJniObject obtain(jint arg0, jint arg1, jboolean arg2);
		static QAndroidJniObject obtain(jint arg0, jint arg1, jboolean arg2, jint arg3);
		jint getColumnCount();
		jint getRowCount();
		jint getSelectionMode();
		jboolean isHierarchical();
	};
} // namespace android::view::accessibility

