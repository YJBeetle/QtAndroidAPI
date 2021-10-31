#include "../../os/Bundle.hpp"
#include "../../os/Message.hpp"
#include "../View.hpp"
#include "./AccessibilityRequestPreparer.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityRequestPreparer::REQUEST_TYPE_EXTRA_DATA()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityRequestPreparer",
			"REQUEST_TYPE_EXTRA_DATA"
		);
	}
	
	// QAndroidJniObject forward
	AccessibilityRequestPreparer::AccessibilityRequestPreparer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AccessibilityRequestPreparer::AccessibilityRequestPreparer(android::view::View arg0, jint arg1)
		: __JniBaseClass(
			"android.view.accessibility.AccessibilityRequestPreparer",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::view::View AccessibilityRequestPreparer::getView()
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	void AccessibilityRequestPreparer::onPrepareExtraData(jint arg0, jstring arg1, android::os::Bundle arg2, android::os::Message arg3)
	{
		callMethod<void>(
			"onPrepareExtraData",
			"(ILjava/lang/String;Landroid/os/Bundle;Landroid/os/Message;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::view::accessibility

