#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./SmsMessage_SubmitPdu.def.hpp"

namespace android::telephony
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
	
	// Methods
	inline JString SmsMessage_SubmitPdu::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telephony

// Base class headers

