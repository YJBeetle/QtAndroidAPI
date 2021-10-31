#include "./AccessibilityNodeInfo_CollectionItemInfo.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// QAndroidJniObject forward
	AccessibilityNodeInfo_CollectionItemInfo::AccessibilityNodeInfo_CollectionItemInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo AccessibilityNodeInfo_CollectionItemInfo::obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo",
			"obtain",
			"(IIIIZ)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo AccessibilityNodeInfo_CollectionItemInfo::obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4, jboolean arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo",
			"obtain",
			"(IIIIZZ)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint AccessibilityNodeInfo_CollectionItemInfo::getColumnIndex()
	{
		return callMethod<jint>(
			"getColumnIndex",
			"()I"
		);
	}
	jint AccessibilityNodeInfo_CollectionItemInfo::getColumnSpan()
	{
		return callMethod<jint>(
			"getColumnSpan",
			"()I"
		);
	}
	jint AccessibilityNodeInfo_CollectionItemInfo::getRowIndex()
	{
		return callMethod<jint>(
			"getRowIndex",
			"()I"
		);
	}
	jint AccessibilityNodeInfo_CollectionItemInfo::getRowSpan()
	{
		return callMethod<jint>(
			"getRowSpan",
			"()I"
		);
	}
	jboolean AccessibilityNodeInfo_CollectionItemInfo::isHeading()
	{
		return callMethod<jboolean>(
			"isHeading",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo_CollectionItemInfo::isSelected()
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
} // namespace android::view::accessibility

