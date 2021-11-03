#pragma once

#include "../../JObject.hpp"


namespace android::telephony
{
	class PhoneNumberFormattingTextWatcher : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PhoneNumberFormattingTextWatcher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhoneNumberFormattingTextWatcher(QJniObject obj);
		
		// Constructors
		PhoneNumberFormattingTextWatcher();
		PhoneNumberFormattingTextWatcher(jstring arg0);
		
		// Methods
		void afterTextChanged(JObject arg0);
		void beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
		void onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::telephony

