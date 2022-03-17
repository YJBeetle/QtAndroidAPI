#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_Carriers.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Telephony_Carriers::APN()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"APN",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::AUTH_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"AUTH_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::BEARER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"BEARER",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::CARRIER_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CARRIER_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::CARRIER_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CARRIER_ID",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Telephony_Carriers::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Telephony_Carriers::CURRENT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"CURRENT",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::MCC()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MCC",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::MMSC()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSC",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::MMSPORT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSPORT",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::MMSPROXY()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MMSPROXY",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::MNC()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MNC",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::MVNO_MATCH_DATA()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MVNO_MATCH_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::MVNO_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"MVNO_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::NAME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::NETWORK_TYPE_BITMASK()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NETWORK_TYPE_BITMASK",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::NUMERIC()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"NUMERIC",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::PASSWORD()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PASSWORD",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::PORT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PORT",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::PROTOCOL()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PROTOCOL",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::PROXY()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"PROXY",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::ROAMING_PROTOCOL()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"ROAMING_PROTOCOL",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::SERVER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"SERVER",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Telephony_Carriers::SIM_APN_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"SIM_APN_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Telephony_Carriers::SUBSCRIPTION_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Carriers::USER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Carriers",
			"USER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
