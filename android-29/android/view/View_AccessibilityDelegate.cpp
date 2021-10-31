#include "../os/Bundle.hpp"
#include "./View.hpp"
#include "./ViewGroup.hpp"
#include "./accessibility/AccessibilityEvent.hpp"
#include "./accessibility/AccessibilityNodeInfo.hpp"
#include "./accessibility/AccessibilityNodeProvider.hpp"
#include "./View_AccessibilityDelegate.hpp"

namespace android::view
{
	// Fields
	
	View_AccessibilityDelegate::View_AccessibilityDelegate(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	View_AccessibilityDelegate::View_AccessibilityDelegate()
	{
		__thiz = QAndroidJniObject(
			"android.view.View$AccessibilityDelegate",
			"()V"
		);
	}
	
	// Methods
	void View_AccessibilityDelegate::addExtraDataToAccessibilityNodeInfo(android::view::View arg0, android::view::accessibility::AccessibilityNodeInfo arg1, jstring arg2, android::os::Bundle arg3)
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
	jboolean View_AccessibilityDelegate::dispatchPopulateAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject View_AccessibilityDelegate::getAccessibilityNodeProvider(android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"getAccessibilityNodeProvider",
			"(Landroid/view/View;)Landroid/view/accessibility/AccessibilityNodeProvider;",
			arg0.__jniObject().object()
		);
	}
	void View_AccessibilityDelegate::onInitializeAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1)
	{
		__thiz.callMethod<void>(
			"onInitializeAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void View_AccessibilityDelegate::onInitializeAccessibilityNodeInfo(android::view::View arg0, android::view::accessibility::AccessibilityNodeInfo arg1)
	{
		__thiz.callMethod<void>(
			"onInitializeAccessibilityNodeInfo",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void View_AccessibilityDelegate::onPopulateAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1)
	{
		__thiz.callMethod<void>(
			"onPopulateAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean View_AccessibilityDelegate::onRequestSendAccessibilityEvent(android::view::ViewGroup arg0, android::view::View arg1, android::view::accessibility::AccessibilityEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onRequestSendAccessibilityEvent",
			"(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean View_AccessibilityDelegate::performAccessibilityAction(android::view::View arg0, jint arg1, android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"performAccessibilityAction",
			"(Landroid/view/View;ILandroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void View_AccessibilityDelegate::sendAccessibilityEvent(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEvent",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View_AccessibilityDelegate::sendAccessibilityEventUnchecked(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::view

