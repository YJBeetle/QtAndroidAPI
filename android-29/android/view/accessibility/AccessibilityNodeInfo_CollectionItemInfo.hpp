#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_COLLECTIONITEMINFO
#define ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_COLLECTIONITEMINFO

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionItemInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isHeading();
		jboolean isSelected();
		static QAndroidJniObject obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4);
		static QAndroidJniObject obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4, jboolean arg5);
		jint getColumnIndex();
		jint getRowIndex();
		jint getColumnSpan();
		jint getRowSpan();
	};
} // namespace __jni_impl::android::view::accessibility


namespace __jni_impl::android::view::accessibility
{
	// Fields
	
	// Constructors
	void AccessibilityNodeInfo_CollectionItemInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo",
			"(V)V");
	}
	
	// Methods
	jboolean AccessibilityNodeInfo_CollectionItemInfo::isHeading()
	{
		return __thiz.callMethod<jboolean>(
			"isHeading",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo_CollectionItemInfo::isSelected()
	{
		return __thiz.callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_CollectionItemInfo::obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4)
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
	QAndroidJniObject AccessibilityNodeInfo_CollectionItemInfo::obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4, jboolean arg5)
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
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"()I"
		);
	}
	jint AccessibilityNodeInfo_CollectionItemInfo::getRowIndex()
	{
		return __thiz.callMethod<jint>(
			"getRowIndex",
			"()I"
		);
	}
	jint AccessibilityNodeInfo_CollectionItemInfo::getColumnSpan()
	{
		return __thiz.callMethod<jint>(
			"getColumnSpan",
			"()I"
		);
	}
	jint AccessibilityNodeInfo_CollectionItemInfo::getRowSpan()
	{
		return __thiz.callMethod<jint>(
			"getRowSpan",
			"()I"
		);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionItemInfo : public __jni_impl::android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo
	{
	public:
		AccessibilityNodeInfo_CollectionItemInfo(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityNodeInfo_CollectionItemInfo()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

#endif // ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_COLLECTIONITEMINFO

