#pragma once

#include "../../JString.hpp"
#include "./Telephony_Mms_Addr.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Telephony_Mms_Addr::ADDRESS()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"ADDRESS",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Mms_Addr::CHARSET()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"CHARSET",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Mms_Addr::CONTACT_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"CONTACT_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Mms_Addr::MSG_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"MSG_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Mms_Addr::TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"TYPE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

