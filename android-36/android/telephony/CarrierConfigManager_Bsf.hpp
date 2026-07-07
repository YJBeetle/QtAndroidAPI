#pragma once

#include "../../JString.hpp"
#include "./CarrierConfigManager_Bsf.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString CarrierConfigManager_Bsf::KEY_BSF_SERVER_FQDN_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Bsf",
			"KEY_BSF_SERVER_FQDN_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Bsf::KEY_BSF_SERVER_PORT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Bsf",
			"KEY_BSF_SERVER_PORT_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Bsf::KEY_BSF_TRANSPORT_TYPE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Bsf",
			"KEY_BSF_TRANSPORT_TYPE_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString CarrierConfigManager_Bsf::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Bsf",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
