#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_SMS_INTENTS
#define ANDROID_PROVIDER_TELEPHONY_SMS_INTENTS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::provider
{
	class Telephony_Sms_Intents : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_CHANGE_DEFAULT();
		static QAndroidJniObject ACTION_DEFAULT_SMS_PACKAGE_CHANGED();
		static QAndroidJniObject ACTION_EXTERNAL_PROVIDER_CHANGE();
		static QAndroidJniObject DATA_SMS_RECEIVED_ACTION();
		static QAndroidJniObject EXTRA_IS_DEFAULT_SMS_APP();
		static QAndroidJniObject EXTRA_PACKAGE_NAME();
		static jint RESULT_SMS_DUPLICATED();
		static jint RESULT_SMS_GENERIC_ERROR();
		static jint RESULT_SMS_HANDLED();
		static jint RESULT_SMS_OUT_OF_MEMORY();
		static jint RESULT_SMS_UNSUPPORTED();
		static QAndroidJniObject SECRET_CODE_ACTION();
		static QAndroidJniObject SIM_FULL_ACTION();
		static QAndroidJniObject SMS_CB_RECEIVED_ACTION();
		static QAndroidJniObject SMS_DELIVER_ACTION();
		static QAndroidJniObject SMS_RECEIVED_ACTION();
		static QAndroidJniObject SMS_REJECTED_ACTION();
		static QAndroidJniObject SMS_SERVICE_CATEGORY_PROGRAM_DATA_RECEIVED_ACTION();
		static QAndroidJniObject WAP_PUSH_DELIVER_ACTION();
		static QAndroidJniObject WAP_PUSH_RECEIVED_ACTION();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getMessagesFromIntent(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::provider

#include "../content/Intent.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Sms_Intents::ACTION_CHANGE_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"ACTION_CHANGE_DEFAULT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::ACTION_DEFAULT_SMS_PACKAGE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"ACTION_DEFAULT_SMS_PACKAGE_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::ACTION_EXTERNAL_PROVIDER_CHANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"ACTION_EXTERNAL_PROVIDER_CHANGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::DATA_SMS_RECEIVED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"DATA_SMS_RECEIVED_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::EXTRA_IS_DEFAULT_SMS_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"EXTRA_IS_DEFAULT_SMS_APP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::EXTRA_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;");
	}
	jint Telephony_Sms_Intents::RESULT_SMS_DUPLICATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_DUPLICATED");
	}
	jint Telephony_Sms_Intents::RESULT_SMS_GENERIC_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_GENERIC_ERROR");
	}
	jint Telephony_Sms_Intents::RESULT_SMS_HANDLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_HANDLED");
	}
	jint Telephony_Sms_Intents::RESULT_SMS_OUT_OF_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_OUT_OF_MEMORY");
	}
	jint Telephony_Sms_Intents::RESULT_SMS_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$Sms$Intents",
			"RESULT_SMS_UNSUPPORTED");
	}
	QAndroidJniObject Telephony_Sms_Intents::SECRET_CODE_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SECRET_CODE_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::SIM_FULL_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SIM_FULL_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::SMS_CB_RECEIVED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_CB_RECEIVED_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::SMS_DELIVER_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_DELIVER_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::SMS_RECEIVED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_RECEIVED_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::SMS_REJECTED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_REJECTED_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::SMS_SERVICE_CATEGORY_PROGRAM_DATA_RECEIVED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"SMS_SERVICE_CATEGORY_PROGRAM_DATA_RECEIVED_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::WAP_PUSH_DELIVER_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"WAP_PUSH_DELIVER_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Intents::WAP_PUSH_RECEIVED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Intents",
			"WAP_PUSH_RECEIVED_ACTION",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Telephony_Sms_Intents::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Sms$Intents",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Telephony_Sms_Intents::getMessagesFromIntent(__jni_impl::android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Telephony$Sms$Intents",
			"getMessagesFromIntent",
			"(Landroid/content/Intent;)[Landroid/telephony/SmsMessage;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Sms_Intents : public __jni_impl::android::provider::Telephony_Sms_Intents
	{
	public:
		Telephony_Sms_Intents(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Sms_Intents()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_SMS_INTENTS

