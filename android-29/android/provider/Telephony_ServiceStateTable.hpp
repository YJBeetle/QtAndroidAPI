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
		static jstring AUTHORITY();
		static QAndroidJniObject CONTENT_URI();
		static jstring IS_MANUAL_NETWORK_SELECTION();
		static jstring VOICE_OPERATOR_NUMERIC();
		static jstring VOICE_REG_STATE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getUriForSubscriptionId(jint arg0);
		static QAndroidJniObject getUriForSubscriptionIdAndField(jint arg0, jstring arg1);
		static QAndroidJniObject getUriForSubscriptionIdAndField(jint arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Telephony_ServiceStateTable::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Telephony_ServiceStateTable::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_ServiceStateTable::IS_MANUAL_NETWORK_SELECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"IS_MANUAL_NETWORK_SELECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_ServiceStateTable::VOICE_OPERATOR_NUMERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"VOICE_OPERATOR_NUMERIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_ServiceStateTable::VOICE_REG_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"VOICE_REG_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_ServiceStateTable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$ServiceStateTable",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Telephony_ServiceStateTable::getUriForSubscriptionId(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Telephony$ServiceStateTable",
			"getUriForSubscriptionId",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject Telephony_ServiceStateTable::getUriForSubscriptionIdAndField(jint arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Telephony$ServiceStateTable",
			"getUriForSubscriptionIdAndField",
			"(ILjava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Telephony_ServiceStateTable::getUriForSubscriptionIdAndField(jint arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Telephony$ServiceStateTable",
			"getUriForSubscriptionIdAndField",
			"(ILjava/lang/String;)Landroid/net/Uri;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
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

