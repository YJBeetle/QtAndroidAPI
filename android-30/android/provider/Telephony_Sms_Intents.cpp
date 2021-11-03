#include "../content/Intent.hpp"
#include "./Telephony_Sms_Intents.hpp"

namespace android::provider
{
	// Fields
	jstring Telephony_Sms_Intents::ACTION_CHANGE_DEFAULT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"ACTION_CHANGE_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::ACTION_DEFAULT_SMS_PACKAGE_CHANGED()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"ACTION_DEFAULT_SMS_PACKAGE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::ACTION_EXTERNAL_PROVIDER_CHANGE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"ACTION_EXTERNAL_PROVIDER_CHANGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::DATA_SMS_RECEIVED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"DATA_SMS_RECEIVED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::EXTRA_IS_DEFAULT_SMS_APP()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"EXTRA_IS_DEFAULT_SMS_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::EXTRA_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Telephony_Sms_Intents::RESULT_SMS_DATABASE_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_DATABASE_ERROR"
		);
	}
	jint Telephony_Sms_Intents::RESULT_SMS_DISPATCH_FAILURE()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_DISPATCH_FAILURE"
		);
	}
	jint Telephony_Sms_Intents::RESULT_SMS_DUPLICATED()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_DUPLICATED"
		);
	}
	jint Telephony_Sms_Intents::RESULT_SMS_GENERIC_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_GENERIC_ERROR"
		);
	}
	jint Telephony_Sms_Intents::RESULT_SMS_HANDLED()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_HANDLED"
		);
	}
	jint Telephony_Sms_Intents::RESULT_SMS_INVALID_URI()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_INVALID_URI"
		);
	}
	jint Telephony_Sms_Intents::RESULT_SMS_NULL_MESSAGE()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_NULL_MESSAGE"
		);
	}
	jint Telephony_Sms_Intents::RESULT_SMS_NULL_PDU()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_NULL_PDU"
		);
	}
	jint Telephony_Sms_Intents::RESULT_SMS_OUT_OF_MEMORY()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_OUT_OF_MEMORY"
		);
	}
	jint Telephony_Sms_Intents::RESULT_SMS_RECEIVED_WHILE_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_RECEIVED_WHILE_ENCRYPTED"
		);
	}
	jint Telephony_Sms_Intents::RESULT_SMS_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_UNSUPPORTED"
		);
	}
	jstring Telephony_Sms_Intents::SECRET_CODE_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SECRET_CODE_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::SIM_FULL_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SIM_FULL_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::SMS_CB_RECEIVED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_CB_RECEIVED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::SMS_DELIVER_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_DELIVER_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::SMS_RECEIVED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_RECEIVED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::SMS_REJECTED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_REJECTED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::SMS_SERVICE_CATEGORY_PROGRAM_DATA_RECEIVED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_SERVICE_CATEGORY_PROGRAM_DATA_RECEIVED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::WAP_PUSH_DELIVER_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"WAP_PUSH_DELIVER_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Intents::WAP_PUSH_RECEIVED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"WAP_PUSH_RECEIVED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Telephony_Sms_Intents::Telephony_Sms_Intents(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jarray Telephony_Sms_Intents::getMessagesFromIntent(android::content::Intent arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$Sms$Intents",
			"getMessagesFromIntent",
			"(Landroid/content/Intent;)[Landroid/telephony/SmsMessage;",
			arg0.object()
		).object<jarray>();
	}
} // namespace android::provider

