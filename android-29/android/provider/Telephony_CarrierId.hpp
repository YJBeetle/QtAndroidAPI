#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_CARRIERID
#define ANDROID_PROVIDER_TELEPHONY_CARRIERID

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_CarrierId : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CARRIER_ID();
		static jstring CARRIER_NAME();
		static QAndroidJniObject CONTENT_URI();
		static jstring SPECIFIC_CARRIER_ID();
		static jstring SPECIFIC_CARRIER_ID_NAME();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getSpecificCarrierIdUriForSubscriptionId(jint arg0);
		static QAndroidJniObject getUriForSubscriptionId(jint arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Telephony_CarrierId::CARRIER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CARRIER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_CarrierId::CARRIER_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CARRIER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Telephony_CarrierId::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_CarrierId::SPECIFIC_CARRIER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"SPECIFIC_CARRIER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_CarrierId::SPECIFIC_CARRIER_ID_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"SPECIFIC_CARRIER_ID_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_CarrierId::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$CarrierId",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Telephony_CarrierId::getSpecificCarrierIdUriForSubscriptionId(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Telephony$CarrierId",
			"getSpecificCarrierIdUriForSubscriptionId",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject Telephony_CarrierId::getUriForSubscriptionId(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Telephony$CarrierId",
			"getUriForSubscriptionId",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_CarrierId : public __jni_impl::android::provider::Telephony_CarrierId
	{
	public:
		Telephony_CarrierId(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_CarrierId()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_CARRIERID

