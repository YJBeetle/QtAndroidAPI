#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}

namespace android::view::autofill
{
	class AutofillManager_AutofillCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint EVENT_INPUT_HIDDEN();
		static jint EVENT_INPUT_SHOWN();
		static jint EVENT_INPUT_UNAVAILABLE();
		
		AutofillManager_AutofillCallback(QAndroidJniObject obj);
		// Constructors
		AutofillManager_AutofillCallback();
		
		// Methods
		void onAutofillEvent(android::view::View arg0, jint arg1);
		void onAutofillEvent(android::view::View arg0, jint arg1, jint arg2);
	};
} // namespace android::view::autofill

