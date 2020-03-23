#pragma once

#ifndef ANDROID_TELEPHONY_SMSMESSAGE_MESSAGECLASS
#define ANDROID_TELEPHONY_SMSMESSAGE_MESSAGECLASS

#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::telephony
{
	class SmsMessage_MessageClass : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject UNKNOWN();
		static QAndroidJniObject CLASS_0();
		static QAndroidJniObject CLASS_1();
		static QAndroidJniObject CLASS_2();
		static QAndroidJniObject CLASS_3();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject SmsMessage_MessageClass::UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsMessage$MessageClass",
			"UNKNOWN",
			"Landroid/telephony/SmsMessage$MessageClass;");
	}
	QAndroidJniObject SmsMessage_MessageClass::CLASS_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsMessage$MessageClass",
			"CLASS_0",
			"Landroid/telephony/SmsMessage$MessageClass;");
	}
	QAndroidJniObject SmsMessage_MessageClass::CLASS_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsMessage$MessageClass",
			"CLASS_1",
			"Landroid/telephony/SmsMessage$MessageClass;");
	}
	QAndroidJniObject SmsMessage_MessageClass::CLASS_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsMessage$MessageClass",
			"CLASS_2",
			"Landroid/telephony/SmsMessage$MessageClass;");
	}
	QAndroidJniObject SmsMessage_MessageClass::CLASS_3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsMessage$MessageClass",
			"CLASS_3",
			"Landroid/telephony/SmsMessage$MessageClass;");
	}
	
	// Constructors
	void SmsMessage_MessageClass::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SmsMessage$MessageClass",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SmsMessage_MessageClass::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SmsMessage$MessageClass",
			"values",
			"()[Landroid/telephony/SmsMessage$MessageClass;");
	}
	QAndroidJniObject SmsMessage_MessageClass::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SmsMessage$MessageClass",
			"valueOf",
			"(Ljava/lang/String;)Landroid/telephony/SmsMessage$MessageClass;",
			arg0);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class SmsMessage_MessageClass : public __jni_impl::android::telephony::SmsMessage_MessageClass
	{
	public:
		SmsMessage_MessageClass(QAndroidJniObject obj) { __thiz = obj; }
		SmsMessage_MessageClass()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_SMSMESSAGE_MESSAGECLASS

