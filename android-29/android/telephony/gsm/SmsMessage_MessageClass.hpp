#pragma once

#ifndef ANDROID_TELEPHONY_GSM_SMSMESSAGE_MESSAGECLASS
#define ANDROID_TELEPHONY_GSM_SMSMESSAGE_MESSAGECLASS

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::telephony::gsm
{
	class SmsMessage_MessageClass : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLASS_0();
		static QAndroidJniObject CLASS_1();
		static QAndroidJniObject CLASS_2();
		static QAndroidJniObject CLASS_3();
		static QAndroidJniObject UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::telephony::gsm


namespace __jni_impl::android::telephony::gsm
{
	// Fields
	QAndroidJniObject SmsMessage_MessageClass::CLASS_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"CLASS_0",
			"Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	QAndroidJniObject SmsMessage_MessageClass::CLASS_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"CLASS_1",
			"Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	QAndroidJniObject SmsMessage_MessageClass::CLASS_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"CLASS_2",
			"Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	QAndroidJniObject SmsMessage_MessageClass::CLASS_3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"CLASS_3",
			"Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	QAndroidJniObject SmsMessage_MessageClass::UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"UNKNOWN",
			"Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	
	// Constructors
	void SmsMessage_MessageClass::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SmsMessage_MessageClass::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"valueOf",
			"(Ljava/lang/String;)Landroid/telephony/gsm/SmsMessage$MessageClass;",
			arg0
		);
	}
	QAndroidJniObject SmsMessage_MessageClass::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"valueOf",
			"(Ljava/lang/String;)Landroid/telephony/gsm/SmsMessage$MessageClass;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray SmsMessage_MessageClass::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage$MessageClass",
			"values",
			"()[Landroid/telephony/gsm/SmsMessage$MessageClass;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::telephony::gsm

namespace android::telephony::gsm
{
	class SmsMessage_MessageClass : public __jni_impl::android::telephony::gsm::SmsMessage_MessageClass
	{
	public:
		SmsMessage_MessageClass(QAndroidJniObject obj) { __thiz = obj; }
		SmsMessage_MessageClass()
		{
			__constructor();
		}
	};
} // namespace android::telephony::gsm

#endif // ANDROID_TELEPHONY_GSM_SMSMESSAGE_MESSAGECLASS

