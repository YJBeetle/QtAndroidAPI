#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionItemInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeInfo_CollectionItemInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeInfo_CollectionItemInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4);
		static android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4, jboolean arg5);
		jint getColumnIndex();
		jint getColumnSpan();
		jint getRowIndex();
		jint getRowSpan();
		jboolean isHeading();
		jboolean isSelected();
	};
} // namespace android::view::accessibility

