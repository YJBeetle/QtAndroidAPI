#pragma once

#include "../../JArray.hpp"
#include "../content/Intent.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_Sms_Intents.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Telephony_Sms_Intents::ACTION_CHANGE_DEFAULT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"ACTION_CHANGE_DEFAULT",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::ACTION_DEFAULT_SMS_PACKAGE_CHANGED()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"ACTION_DEFAULT_SMS_PACKAGE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::ACTION_EXTERNAL_PROVIDER_CHANGE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"ACTION_EXTERNAL_PROVIDER_CHANGE",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::DATA_SMS_RECEIVED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"DATA_SMS_RECEIVED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::EXTRA_IS_DEFAULT_SMS_APP()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"EXTRA_IS_DEFAULT_SMS_APP",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::EXTRA_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline jint Telephony_Sms_Intents::RESULT_SMS_DUPLICATED()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_DUPLICATED"
		);
	}
	inline jint Telephony_Sms_Intents::RESULT_SMS_GENERIC_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_GENERIC_ERROR"
		);
	}
	inline jint Telephony_Sms_Intents::RESULT_SMS_HANDLED()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_HANDLED"
		);
	}
	inline jint Telephony_Sms_Intents::RESULT_SMS_OUT_OF_MEMORY()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_OUT_OF_MEMORY"
		);
	}
	inline jint Telephony_Sms_Intents::RESULT_SMS_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_UNSUPPORTED"
		);
	}
	inline JString Telephony_Sms_Intents::SECRET_CODE_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SECRET_CODE_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::SIM_FULL_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SIM_FULL_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::SMS_CB_RECEIVED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_CB_RECEIVED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::SMS_DELIVER_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_DELIVER_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::SMS_RECEIVED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_RECEIVED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::SMS_REJECTED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_REJECTED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::SMS_SERVICE_CATEGORY_PROGRAM_DATA_RECEIVED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_SERVICE_CATEGORY_PROGRAM_DATA_RECEIVED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::WAP_PUSH_DELIVER_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"WAP_PUSH_DELIVER_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Intents::WAP_PUSH_RECEIVED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"WAP_PUSH_RECEIVED_ACTION",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JArray Telephony_Sms_Intents::getMessagesFromIntent(android::content::Intent arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$Sms$Intents",
			"getMessagesFromIntent",
			"(Landroid/content/Intent;)[Landroid/telephony/SmsMessage;",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers

