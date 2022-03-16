#pragma once

#include "../../JObject.hpp"

class JString;
class JString;

namespace android::telephony
{
	class PhoneNumberFormattingTextWatcher : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PhoneNumberFormattingTextWatcher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhoneNumberFormattingTextWatcher(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PhoneNumberFormattingTextWatcher();
		PhoneNumberFormattingTextWatcher(JString arg0);
		
		// Methods
		void afterTextChanged(JObject arg0) const;
		void beforeTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const;
		void onTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const;
	};
} // namespace android::telephony

