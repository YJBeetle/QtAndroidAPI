#pragma once

#include "./AwarePairingConfig.def.hpp"
#include "./AwarePairingConfig_Builder.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	inline AwarePairingConfig_Builder::AwarePairingConfig_Builder()
		: JObject(
			"android.net.wifi.aware.AwarePairingConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::aware::AwarePairingConfig AwarePairingConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/AwarePairingConfig;"
		);
	}
	inline android::net::wifi::aware::AwarePairingConfig_Builder AwarePairingConfig_Builder::setBootstrappingMethods(jint arg0) const
	{
		return callObjectMethod(
			"setBootstrappingMethods",
			"(I)Landroid/net/wifi/aware/AwarePairingConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::aware::AwarePairingConfig_Builder AwarePairingConfig_Builder::setPairingCacheEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setPairingCacheEnabled",
			"(Z)Landroid/net/wifi/aware/AwarePairingConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::aware::AwarePairingConfig_Builder AwarePairingConfig_Builder::setPairingSetupEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setPairingSetupEnabled",
			"(Z)Landroid/net/wifi/aware/AwarePairingConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::aware::AwarePairingConfig_Builder AwarePairingConfig_Builder::setPairingVerificationEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setPairingVerificationEnabled",
			"(Z)Landroid/net/wifi/aware/AwarePairingConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
