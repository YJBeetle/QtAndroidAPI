#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./SmsMessage_SubmitPdu.def.hpp"

namespace android::telephony::gsm
{
	// Fields
	inline JByteArray SmsMessage_SubmitPdu::encodedMessage()
	{
		return getObjectField(
			"encodedMessage",
			"[B"
		);
	}
	inline JByteArray SmsMessage_SubmitPdu::encodedScAddress()
	{
		return getObjectField(
			"encodedScAddress",
			"[B"
		);
	}
	
	// Constructors
	inline SmsMessage_SubmitPdu::SmsMessage_SubmitPdu()
		: JObject(
			"android.telephony.gsm.SmsMessage$SubmitPdu",
			"()V"
		) {}
	
	// Methods
	inline JString SmsMessage_SubmitPdu::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telephony::gsm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::gsm;
#endif
