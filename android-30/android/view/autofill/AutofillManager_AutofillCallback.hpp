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
		
		// QJniObject forward
		template<typename ...Ts> explicit AutofillManager_AutofillCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AutofillManager_AutofillCallback(QJniObject obj);
		
		// Constructors
		AutofillManager_AutofillCallback();
		
		// Methods
		void onAutofillEvent(android::view::View arg0, jint arg1);
		void onAutofillEvent(android::view::View arg0, jint arg1, jint arg2);
	};
} // namespace android::view::autofill

