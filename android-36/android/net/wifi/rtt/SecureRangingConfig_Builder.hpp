#pragma once

#include "./PasnConfig.def.hpp"
#include "./SecureRangingConfig.def.hpp"
#include "./SecureRangingConfig_Builder.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	
	// Constructors
	inline SecureRangingConfig_Builder::SecureRangingConfig_Builder(android::net::wifi::rtt::PasnConfig arg0)
		: JObject(
			"android.net.wifi.rtt.SecureRangingConfig$Builder",
			"(Landroid/net/wifi/rtt/PasnConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::wifi::rtt::SecureRangingConfig SecureRangingConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/rtt/SecureRangingConfig;"
		);
	}
	inline android::net::wifi::rtt::SecureRangingConfig_Builder SecureRangingConfig_Builder::setRangingFrameProtectionEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setRangingFrameProtectionEnabled",
			"(Z)Landroid/net/wifi/rtt/SecureRangingConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::SecureRangingConfig_Builder SecureRangingConfig_Builder::setSecureHeLtfEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setSecureHeLtfEnabled",
			"(Z)Landroid/net/wifi/rtt/SecureRangingConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::rtt;
#endif
