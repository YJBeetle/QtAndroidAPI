#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_COLLECTIONINFO
#define ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_COLLECTIONINFO

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint SELECTION_MODE_MULTIPLE();
		static jint SELECTION_MODE_NONE();
		static jint SELECTION_MODE_SINGLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getColumnCount();
		jint getSelectionMode();
		jint getRowCount();
		jboolean isHierarchical();
		static QAndroidJniObject obtain(jint arg0, jint arg1, jboolean arg2);
		static QAndroidJniObject obtain(jint arg0, jint arg1, jboolean arg2, jint arg3);
	};
} // namespace __jni_impl::android::view::accessibility


namespace __jni_impl::android::view::accessibility
{
	// Fields
	jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_MULTIPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"SELECTION_MODE_MULTIPLE");
	}
	jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"SELECTION_MODE_NONE");
	}
	jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_SINGLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"SELECTION_MODE_SINGLE");
	}
	
	// Constructors
	void AccessibilityNodeInfo_CollectionInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"(V)V");
	}
	
	// Methods
	jint AccessibilityNodeInfo_CollectionInfo::getColumnCount()
	{
		return __thiz.callMethod<jint>(
			"getColumnCount",
			"()I");
	}
	jint AccessibilityNodeInfo_CollectionInfo::getSelectionMode()
	{
		return __thiz.callMethod<jint>(
			"getSelectionMode",
			"()I");
	}
	jint AccessibilityNodeInfo_CollectionInfo::getRowCount()
	{
		return __thiz.callMethod<jint>(
			"getRowCount",
			"()I");
	}
	jboolean AccessibilityNodeInfo_CollectionInfo::isHierarchical()
	{
		return __thiz.callMethod<jboolean>(
			"isHierarchical",
			"()Z");
	}
	QAndroidJniObject AccessibilityNodeInfo_CollectionInfo::obtain(jint arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"obtain",
			"(IIZ)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;",
			arg0,
			arg1,
			arg2);
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
			arg3);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionInfo : public __jni_impl::android::view::accessibility::AccessibilityNodeInfo_CollectionInfo
	{
	public:
		AccessibilityNodeInfo_CollectionInfo(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityNodeInfo_CollectionInfo()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

#endif // ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_COLLECTIONINFO

