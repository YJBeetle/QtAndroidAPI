#pragma once

#ifndef ANDROID_VIEW_VIEW_ACCESSIBILITYDELEGATE
#define ANDROID_VIEW_VIEW_ACCESSIBILITYDELEGATE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeProvider;
}

namespace __jni_impl::android::view
{
	class View_AccessibilityDelegate : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean onRequestSendAccessibilityEvent(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::accessibility::AccessibilityEvent arg2);
		void sendAccessibilityEvent(__jni_impl::android::view::View arg0, jint arg1);
		void sendAccessibilityEventUnchecked(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1);
		void onPopulateAccessibilityEvent(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1);
		void onInitializeAccessibilityEvent(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1);
		void onInitializeAccessibilityNodeInfo(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg1);
		void addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg1, jstring arg2, __jni_impl::android::os::Bundle arg3);
		void addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg1, const QString &arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject getAccessibilityNodeProvider(__jni_impl::android::view::View arg0);
		jboolean performAccessibilityAction(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		jboolean dispatchPopulateAccessibilityEvent(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1);
	};
} // namespace __jni_impl::android::view

#include "ViewGroup.hpp"
#include "View.hpp"
#include "accessibility/AccessibilityEvent.hpp"
#include "accessibility/AccessibilityNodeInfo.hpp"
#include "../os/Bundle.hpp"
#include "accessibility/AccessibilityNodeProvider.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void View_AccessibilityDelegate::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.View$AccessibilityDelegate",
			"()V"
		);
	}
	
	// Methods
	jboolean View_AccessibilityDelegate::onRequestSendAccessibilityEvent(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::accessibility::AccessibilityEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onRequestSendAccessibilityEvent",
			"(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void View_AccessibilityDelegate::sendAccessibilityEvent(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEvent",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View_AccessibilityDelegate::sendAccessibilityEventUnchecked(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void View_AccessibilityDelegate::onPopulateAccessibilityEvent(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1)
	{
		__thiz.callMethod<void>(
			"onPopulateAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void View_AccessibilityDelegate::onInitializeAccessibilityEvent(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1)
	{
		__thiz.callMethod<void>(
			"onInitializeAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void View_AccessibilityDelegate::onInitializeAccessibilityNodeInfo(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg1)
	{
		__thiz.callMethod<void>(
			"onInitializeAccessibilityNodeInfo",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void View_AccessibilityDelegate::addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg1, jstring arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void View_AccessibilityDelegate::addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg1, const QString &arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject View_AccessibilityDelegate::getAccessibilityNodeProvider(__jni_impl::android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"getAccessibilityNodeProvider",
			"(Landroid/view/View;)Landroid/view/accessibility/AccessibilityNodeProvider;",
			arg0.__jniObject().object()
		);
	}
	jboolean View_AccessibilityDelegate::performAccessibilityAction(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"performAccessibilityAction",
			"(Landroid/view/View;ILandroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean View_AccessibilityDelegate::dispatchPopulateAccessibilityEvent(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class View_AccessibilityDelegate : public __jni_impl::android::view::View_AccessibilityDelegate
	{
	public:
		View_AccessibilityDelegate(QAndroidJniObject obj) { __thiz = obj; }
		View_AccessibilityDelegate()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEW_ACCESSIBILITYDELEGATE

