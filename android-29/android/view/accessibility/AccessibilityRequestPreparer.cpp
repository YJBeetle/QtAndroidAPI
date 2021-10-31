#include "../../os/Bundle.hpp"
#include "../../os/Message.hpp"
#include "../View.hpp"
#include "./AccessibilityRequestPreparer.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityRequestPreparer::REQUEST_TYPE_EXTRA_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityRequestPreparer",
			"REQUEST_TYPE_EXTRA_DATA"
		);
	}
	
	AccessibilityRequestPreparer::AccessibilityRequestPreparer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccessibilityRequestPreparer::AccessibilityRequestPreparer(android::view::View arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityRequestPreparer",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject AccessibilityRequestPreparer::getView()
	{
		return __thiz.callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	void AccessibilityRequestPreparer::onPrepareExtraData(jint arg0, jstring arg1, android::os::Bundle arg2, android::os::Message arg3)
	{
		__thiz.callMethod<void>(
			"onPrepareExtraData",
			"(ILjava/lang/String;Landroid/os/Bundle;Landroid/os/Message;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
} // namespace android::view::accessibility

