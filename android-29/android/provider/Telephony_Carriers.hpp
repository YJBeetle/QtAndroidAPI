#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_CARRIERS
#define ANDROID_PROVIDER_TELEPHONY_CARRIERS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Carriers : public __JniBaseClass
	{
	public:
		// Fields
		static jstring APN();
		static jstring AUTH_TYPE();
		static jstring BEARER();
		static jstring CARRIER_ENABLED();
		static jstring CARRIER_ID();
		static QAndroidJniObject CONTENT_URI();
		static jstring CURRENT();
		static jstring DEFAULT_SORT_ORDER();
		static jstring MCC();
		static jstring MMSC();
		static jstring MMSPORT();
		static jstring MMSPROXY();
		static jstring MNC();
		static jstring MVNO_MATCH_DATA();
		static jstring MVNO_TYPE();
		static jstring NAME();
		static jstring NETWORK_TYPE_BITMASK();
		static jstring NUMERIC();
		static jstring PASSWORD();
		static jstring PORT();
		static jstring PROTOCOL();
		static jstring PROXY();
		static jstring ROAMING_PROTOCOL();
		static jstring SERVER();
		static QAndroidJniObject SIM_APN_URI();
		static jstring SUBSCRIPTION_ID();
		static jstring TYPE();
		static jstring USER();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Telephony_Carriers::APN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"APN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::AUTH_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"AUTH_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::BEARER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"BEARER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::CARRIER_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CARRIER_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::CARRIER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CARRIER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Telephony_Carriers::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Carriers::CURRENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CURRENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MCC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MCC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MMSC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MMSPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MMSPROXY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSPROXY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MNC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MNC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MVNO_MATCH_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MVNO_MATCH_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MVNO_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MVNO_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::NETWORK_TYPE_BITMASK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NETWORK_TYPE_BITMASK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::NUMERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NUMERIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::PORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::PROTOCOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PROTOCOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::PROXY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PROXY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::ROAMING_PROTOCOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"ROAMING_PROTOCOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::SERVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"SERVER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Telephony_Carriers::SIM_APN_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"SIM_APN_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Carriers::SUBSCRIPTION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::USER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"USER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_Carriers::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Carriers",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Carriers : public __jni_impl::android::provider::Telephony_Carriers
	{
	public:
		Telephony_Carriers(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Carriers()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_CARRIERS

