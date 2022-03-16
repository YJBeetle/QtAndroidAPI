#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_ServiceStateTable.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Telephony_ServiceStateTable::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Telephony_ServiceStateTable::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Telephony_ServiceStateTable::IS_MANUAL_NETWORK_SELECTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"IS_MANUAL_NETWORK_SELECTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_ServiceStateTable::VOICE_OPERATOR_NUMERIC()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"VOICE_OPERATOR_NUMERIC",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_ServiceStateTable::VOICE_REG_STATE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"VOICE_REG_STATE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::Uri Telephony_ServiceStateTable::getUriForSubscriptionId(jint arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$ServiceStateTable",
			"getUriForSubscriptionId",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	inline android::net::Uri Telephony_ServiceStateTable::getUriForSubscriptionIdAndField(jint arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$ServiceStateTable",
			"getUriForSubscriptionIdAndField",
			"(ILjava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

