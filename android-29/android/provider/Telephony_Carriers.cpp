#include "../net/Uri.hpp"
#include "./Telephony_Carriers.hpp"

namespace android::provider
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
	
	// QAndroidJniObject forward
	Telephony_Carriers::Telephony_Carriers(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

