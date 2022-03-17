#pragma once

#include "./AccessNetworkConstants.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint AccessNetworkConstants::TRANSPORT_TYPE_WLAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants",
			"TRANSPORT_TYPE_WLAN"
		);
	}
	inline jint AccessNetworkConstants::TRANSPORT_TYPE_WWAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants",
			"TRANSPORT_TYPE_WWAN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

