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
		static QAndroidJniObject APN();
		static QAndroidJniObject AUTH_TYPE();
		static QAndroidJniObject BEARER();
		static QAndroidJniObject CARRIER_ENABLED();
		static QAndroidJniObject CARRIER_ID();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject CURRENT();
		static QAndroidJniObject DEFAULT_SORT_ORDER();
		static QAndroidJniObject MCC();
		static QAndroidJniObject MMSC();
		static QAndroidJniObject MMSPORT();
		static QAndroidJniObject MMSPROXY();
		static QAndroidJniObject MNC();
		static QAndroidJniObject MVNO_MATCH_DATA();
		static QAndroidJniObject MVNO_TYPE();
		static QAndroidJniObject NAME();
		static QAndroidJniObject NETWORK_TYPE_BITMASK();
		static QAndroidJniObject NUMERIC();
		static QAndroidJniObject PASSWORD();
		static QAndroidJniObject PORT();
		static QAndroidJniObject PROTOCOL();
		static QAndroidJniObject PROXY();
		static QAndroidJniObject ROAMING_PROTOCOL();
		static QAndroidJniObject SERVER();
		static QAndroidJniObject SIM_APN_URI();
		static QAndroidJniObject SUBSCRIPTION_ID();
		static QAndroidJniObject TYPE();
		static QAndroidJniObject USER();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Carriers::APN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"APN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::AUTH_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"AUTH_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::BEARER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"BEARER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::CARRIER_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CARRIER_ENABLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::CARRIER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CARRIER_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Telephony_Carriers::CURRENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CURRENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::MCC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MCC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::MMSC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::MMSPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSPORT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::MMSPROXY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSPROXY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::MNC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MNC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::MVNO_MATCH_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MVNO_MATCH_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::MVNO_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MVNO_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::NETWORK_TYPE_BITMASK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NETWORK_TYPE_BITMASK",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::NUMERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NUMERIC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PASSWORD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::PORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PORT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::PROTOCOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PROTOCOL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::PROXY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PROXY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::ROAMING_PROTOCOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"ROAMING_PROTOCOL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::SERVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"SERVER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::SIM_APN_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"SIM_APN_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Telephony_Carriers::SUBSCRIPTION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Carriers::USER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"USER",
			"Ljava/lang/String;");
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

