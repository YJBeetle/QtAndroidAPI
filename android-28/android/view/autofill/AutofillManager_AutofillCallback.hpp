#pragma once

#include "../View.def.hpp"
#include "./AutofillManager_AutofillCallback.def.hpp"

namespace android::view::autofill
{
	// Fields
	inline jint AutofillManager_AutofillCallback::EVENT_INPUT_HIDDEN()
	{
		return getStaticField<jint>(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"EVENT_INPUT_HIDDEN"
		);
	}
	inline jint AutofillManager_AutofillCallback::EVENT_INPUT_SHOWN()
	{
		return getStaticField<jint>(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"EVENT_INPUT_SHOWN"
		);
	}
	inline jint AutofillManager_AutofillCallback::EVENT_INPUT_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"EVENT_INPUT_UNAVAILABLE"
		);
	}
	
	// Constructors
	inline AutofillManager_AutofillCallback::AutofillManager_AutofillCallback()
		: JObject(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"()V"
		) {}
	
	// Methods
	inline void AutofillManager_AutofillCallback::onAutofillEvent(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"onAutofillEvent",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AutofillManager_AutofillCallback::onAutofillEvent(android::view::View arg0, jint arg1, jint arg2) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::autofill;
#endif
