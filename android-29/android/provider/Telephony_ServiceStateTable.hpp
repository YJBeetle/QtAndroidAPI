#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_SERVICESTATETABLE
#define ANDROID_PROVIDER_TELEPHONY_SERVICESTATETABLE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_ServiceStateTable : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject AUTHORITY();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject IS_MANUAL_NETWORK_SELECTION();
		static QAndroidJniObject VOICE_OPERATOR_NUMERIC();
		static QAndroidJniObject VOICE_REG_STATE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getUriForSubscriptionIdAndField(jint arg0, jstring arg1);
		static QAndroidJniObject getUriForSubscriptionId(jint arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_ServiceStateTable::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"AUTHORITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_ServiceStateTable::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Telephony_ServiceStateTable::IS_MANUAL_NETWORK_SELECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"IS_MANUAL_NETWORK_SELECTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_ServiceStateTable::VOICE_OPERATOR_NUMERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"VOICE_OPERATOR_NUMERIC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_ServiceStateTable::VOICE_REG_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"VOICE_REG_STATE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Telephony_ServiceStateTable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$ServiceStateTable",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Telephony_ServiceStateTable::getUriForSubscriptionIdAndField(jint arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Telephony$ServiceStateTable",
			"getUriForSubscriptionIdAndField",
			"(ILjava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1);
	}
	QAndroidJniObject Telephony_ServiceStateTable::getUriForSubscriptionId(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Telephony$ServiceStateTable",
			"getUriForSubscriptionId",
			"(I)Landroid/net/Uri;",
			arg0);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_ServiceStateTable : public __jni_impl::android::provider::Telephony_ServiceStateTable
	{
	public:
		Telephony_ServiceStateTable(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_ServiceStateTable()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_SERVICESTATETABLE

