#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeProvider : public __JniBaseClass
	{
	public:
		// Fields
		static jint HOST_VIEW_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		void addExtraDataToAccessibilityNodeInfo(jint arg0, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg1, jstring arg2, __jni_impl::android::os::Bundle arg3);
		void addExtraDataToAccessibilityNodeInfo(jint arg0, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg1, const QString &arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject createAccessibilityNodeInfo(jint arg0);
		QAndroidJniObject findAccessibilityNodeInfosByText(jstring arg0, jint arg1);
		QAndroidJniObject findAccessibilityNodeInfosByText(const QString &arg0, jint arg1);
		QAndroidJniObject findFocus(jint arg0);
		jboolean performAction(jint arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
	};
} // namespace __jni_impl::android::view::accessibility

#include "../../os/Bundle.hpp"
#include "./AccessibilityNodeInfo.hpp"

namespace __jni_impl::android::view::accessibility
{
	// Fields
	jint AccessibilityNodeProvider::HOST_VIEW_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeProvider",
			"HOST_VIEW_ID"
		);
	}
	
	// Constructors
	void AccessibilityNodeProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityNodeProvider",
			"()V"
		);
	}
	
	// Methods
	void AccessibilityNodeProvider::addExtraDataToAccessibilityNodeInfo(jint arg0, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg1, jstring arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(ILandroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void AccessibilityNodeProvider::addExtraDataToAccessibilityNodeInfo(jint arg0, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg1, const QString &arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(ILandroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeProvider::createAccessibilityNodeInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createAccessibilityNodeInfo",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeProvider::findAccessibilityNodeInfosByText(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"findAccessibilityNodeInfosByText",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AccessibilityNodeProvider::findAccessibilityNodeInfosByText(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"findAccessibilityNodeInfosByText",
			"(Ljava/lang/String;I)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject AccessibilityNodeProvider::findFocus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	jboolean AccessibilityNodeProvider::performAction(jint arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"performAction",
			"(IILandroid/os/Bundle;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityNodeProvider : public __jni_impl::android::view::accessibility::AccessibilityNodeProvider
	{
	public:
		AccessibilityNodeProvider(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityNodeProvider()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

