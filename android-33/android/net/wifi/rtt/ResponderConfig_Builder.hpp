#pragma once

#include "../../MacAddress.def.hpp"
#include "./ResponderConfig.def.hpp"
#include "./ResponderConfig_Builder.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	
	// Constructors
	inline ResponderConfig_Builder::ResponderConfig_Builder()
		: JObject(
			"android.net.wifi.rtt.ResponderConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::rtt::ResponderConfig ResponderConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/rtt/ResponderConfig;"
		);
	}
	inline android::net::wifi::rtt::ResponderConfig_Builder ResponderConfig_Builder::set80211mcSupported(jboolean arg0) const
	{
		return callObjectMethod(
			"set80211mcSupported",
			"(Z)Landroid/net/wifi/rtt/ResponderConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::ResponderConfig_Builder ResponderConfig_Builder::setCenterFreq0Mhz(jint arg0) const
	{
		return callObjectMethod(
			"setCenterFreq0Mhz",
			"(I)Landroid/net/wifi/rtt/ResponderConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::ResponderConfig_Builder ResponderConfig_Builder::setCenterFreq1Mhz(jint arg0) const
	{
		return callObjectMethod(
			"setCenterFreq1Mhz",
			"(I)Landroid/net/wifi/rtt/ResponderConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::ResponderConfig_Builder ResponderConfig_Builder::setChannelWidth(jint arg0) const
	{
		return callObjectMethod(
			"setChannelWidth",
			"(I)Landroid/net/wifi/rtt/ResponderConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::ResponderConfig_Builder ResponderConfig_Builder::setFrequencyMhz(jint arg0) const
	{
		return callObjectMethod(
			"setFrequencyMhz",
			"(I)Landroid/net/wifi/rtt/ResponderConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::ResponderConfig_Builder ResponderConfig_Builder::setMacAddress(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"setMacAddress",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/rtt/ResponderConfig$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::rtt::ResponderConfig_Builder ResponderConfig_Builder::setPreamble(jint arg0) const
	{
		return callObjectMethod(
			"setPreamble",
			"(I)Landroid/net/wifi/rtt/ResponderConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::rtt;
#endif
