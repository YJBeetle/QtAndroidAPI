#include "../View.hpp"
#include "./AutofillManager_AutofillCallback.hpp"

namespace android::view::autofill
{
	// Fields
	jint AutofillManager_AutofillCallback::EVENT_INPUT_HIDDEN()
	{
		return getStaticField<jint>(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"EVENT_INPUT_HIDDEN"
		);
	}
	jint AutofillManager_AutofillCallback::EVENT_INPUT_SHOWN()
	{
		return getStaticField<jint>(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"EVENT_INPUT_SHOWN"
		);
	}
	jint AutofillManager_AutofillCallback::EVENT_INPUT_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"EVENT_INPUT_UNAVAILABLE"
		);
	}
	
	// QAndroidJniObject forward
	AutofillManager_AutofillCallback::AutofillManager_AutofillCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AutofillManager_AutofillCallback::AutofillManager_AutofillCallback()
		: __JniBaseClass(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"()V"
		) {}
	
	// Methods
	void AutofillManager_AutofillCallback::onAutofillEvent(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"onAutofillEvent",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AutofillManager_AutofillCallback::onAutofillEvent(android::view::View arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"onAutofillEvent",
			"(Landroid/view/View;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace android::view::autofill

