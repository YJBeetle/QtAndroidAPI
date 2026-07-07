#pragma once

#include "../../../../JByteArray.hpp"
#include "../WifiSsid.def.hpp"
#include "./PasnConfig.def.hpp"
#include "../../../../JString.hpp"
#include "./PasnConfig_Builder.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	
	// Constructors
	inline PasnConfig_Builder::PasnConfig_Builder(jint arg0, jint arg1)
		: JObject(
			"android.net.wifi.rtt.PasnConfig$Builder",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::net::wifi::rtt::PasnConfig PasnConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/rtt/PasnConfig;"
		);
	}
	inline android::net::wifi::rtt::PasnConfig_Builder PasnConfig_Builder::setPasnComebackCookie(JByteArray arg0) const
	{
		return callObjectMethod(
			"setPasnComebackCookie",
			"([B)Landroid/net/wifi/rtt/PasnConfig$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::wifi::rtt::PasnConfig_Builder PasnConfig_Builder::setPassword(JString arg0) const
	{
		return callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/net/wifi/rtt/PasnConfig$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::rtt::PasnConfig_Builder PasnConfig_Builder::setWifiSsid(android::net::wifi::WifiSsid arg0) const
	{
		return callObjectMethod(
			"setWifiSsid",
			"(Landroid/net/wifi/WifiSsid;)Landroid/net/wifi/rtt/PasnConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::rtt;
#endif
