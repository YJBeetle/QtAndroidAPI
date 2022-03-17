#pragma once

#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./PhoneNumberFormattingTextWatcher.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher()
		: JObject(
			"android.telephony.PhoneNumberFormattingTextWatcher",
			"()V"
		) {}
	inline PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher(JString arg0)
		: JObject(
			"android.telephony.PhoneNumberFormattingTextWatcher",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline void PhoneNumberFormattingTextWatcher::afterTextChanged(JObject arg0) const
	{
		callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.object()
		);
	}
	inline void PhoneNumberFormattingTextWatcher::beforeTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void PhoneNumberFormattingTextWatcher::onTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
