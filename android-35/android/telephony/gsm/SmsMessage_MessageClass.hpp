#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SmsMessage_MessageClass.def.hpp"

namespace android::telephony::gsm
{
	// Fields
	inline android::telephony::gsm::SmsMessage_MessageClass SmsMessage_MessageClass::CLASS_0()
	{
		return getStaticObjectField(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"CLASS_0",
			"Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	inline android::telephony::gsm::SmsMessage_MessageClass SmsMessage_MessageClass::CLASS_1()
	{
		return getStaticObjectField(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"CLASS_1",
			"Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	inline android::telephony::gsm::SmsMessage_MessageClass SmsMessage_MessageClass::CLASS_2()
	{
		return getStaticObjectField(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"CLASS_2",
			"Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	inline android::telephony::gsm::SmsMessage_MessageClass SmsMessage_MessageClass::CLASS_3()
	{
		return getStaticObjectField(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"CLASS_3",
			"Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	inline android::telephony::gsm::SmsMessage_MessageClass SmsMessage_MessageClass::UNKNOWN()
	{
		return getStaticObjectField(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"UNKNOWN",
			"Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::telephony::gsm::SmsMessage_MessageClass SmsMessage_MessageClass::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"valueOf",
			"(Ljava/lang/String;)Landroid/telephony/gsm/SmsMessage$MessageClass;",
			arg0.object<jstring>()
		);
	}
	inline JArray SmsMessage_MessageClass::values()
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"values",
			"()[Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
} // namespace android::telephony::gsm

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::gsm;
#endif
