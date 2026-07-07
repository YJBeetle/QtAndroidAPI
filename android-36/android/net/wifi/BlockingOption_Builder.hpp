#pragma once

#include "./BlockingOption.def.hpp"
#include "./BlockingOption_Builder.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	inline BlockingOption_Builder::BlockingOption_Builder(jint arg0)
		: JObject(
			"android.net.wifi.BlockingOption$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::net::wifi::BlockingOption BlockingOption_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/BlockingOption;"
		);
	}
	inline android::net::wifi::BlockingOption_Builder BlockingOption_Builder::setBlockingBssidOnly(jboolean arg0) const
	{
		return callObjectMethod(
			"setBlockingBssidOnly",
			"(Z)Landroid/net/wifi/BlockingOption$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
