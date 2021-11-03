#include "../net/Uri.hpp"
#include "./Telephony_Carriers.hpp"

namespace android::provider
{
	// Fields
	jstring Telephony_Carriers::APN()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"APN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::AUTH_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"AUTH_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::BEARER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"BEARER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::CARRIER_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CARRIER_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri Telephony_Carriers::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Carriers::CURRENT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CURRENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MCC()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MCC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MMSC()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MMSPORT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MMSPROXY()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSPROXY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MNC()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MNC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MVNO_MATCH_DATA()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MVNO_MATCH_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::MVNO_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MVNO_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::NAME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::NETWORK_TYPE_BITMASK()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NETWORK_TYPE_BITMASK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::NUMERIC()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NUMERIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::PASSWORD()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::PORT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::PROTOCOL()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PROTOCOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::PROXY()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PROXY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::ROAMING_PROTOCOL()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"ROAMING_PROTOCOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::SERVER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"SERVER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::SUBSCRIPTION_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Carriers::USER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"USER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Telephony_Carriers::Telephony_Carriers(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

