#pragma once

#include "./WifiConfiguration_GroupMgmtCipher.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline jint WifiConfiguration_GroupMgmtCipher::BIP_CMAC_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupMgmtCipher",
			"BIP_CMAC_256"
		);
	}
	inline jint WifiConfiguration_GroupMgmtCipher::BIP_GMAC_128()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupMgmtCipher",
			"BIP_GMAC_128"
		);
	}
	inline jint WifiConfiguration_GroupMgmtCipher::BIP_GMAC_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupMgmtCipher",
			"BIP_GMAC_256"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

// Base class headers

