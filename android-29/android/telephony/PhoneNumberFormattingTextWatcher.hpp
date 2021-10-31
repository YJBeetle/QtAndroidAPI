#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class PhoneNumberFormattingTextWatcher : public __JniBaseClass
	{
	public:
		// Fields
		
		PhoneNumberFormattingTextWatcher(QAndroidJniObject obj);
		// Constructors
		PhoneNumberFormattingTextWatcher();
		PhoneNumberFormattingTextWatcher(jstring arg0);
		
		// Methods
		void afterTextChanged(__JniBaseClass arg0);
		void beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
		void onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::telephony

