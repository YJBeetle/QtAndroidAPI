#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./PhoneNumberFormattingTextWatcher.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher()
		: JObject(
			"android.telephony.PhoneNumberFormattingTextWatcher",
			"()V"
		) {}
	PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher(JString arg0)
		: JObject(
			"android.telephony.PhoneNumberFormattingTextWatcher",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	void PhoneNumberFormattingTextWatcher::afterTextChanged(JObject arg0) const
	{
		callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.object()
		);
	}
	void PhoneNumberFormattingTextWatcher::beforeTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	void PhoneNumberFormattingTextWatcher::onTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::telephony

