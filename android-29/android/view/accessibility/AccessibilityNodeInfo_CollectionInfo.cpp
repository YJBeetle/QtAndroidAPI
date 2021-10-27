#include "./AccessibilityNodeInfo_CollectionInfo.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_MULTIPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"SELECTION_MODE_MULTIPLE"
		);
	}
	jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"SELECTION_MODE_NONE"
		);
	}
	jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_SINGLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"SELECTION_MODE_SINGLE"
		);
	}
	
	AccessibilityNodeInfo_CollectionInfo::AccessibilityNodeInfo_CollectionInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AccessibilityNodeInfo_CollectionInfo::obtain(jint arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"obtain",
			"(IIZ)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_CollectionInfo::obtain(jint arg0, jint arg1, jboolean arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"obtain",
			"(IIZI)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint AccessibilityNodeInfo_CollectionInfo::getColumnCount()
	{
		return __thiz.callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	jint AccessibilityNodeInfo_CollectionInfo::getRowCount()
	{
		return __thiz.callMethod<jint>(
			"getRowCount",
			"()I"
		);
	}
	jint AccessibilityNodeInfo_CollectionInfo::getSelectionMode()
	{
		return __thiz.callMethod<jint>(
			"getSelectionMode",
			"()I"
		);
	}
	jboolean AccessibilityNodeInfo_CollectionInfo::isHierarchical()
	{
		return __thiz.callMethod<jboolean>(
			"isHierarchical",
			"()Z"
		);
	}
} // namespace android::view::accessibility

