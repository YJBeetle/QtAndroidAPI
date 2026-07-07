#pragma once

#include "../../../../JByteArray.hpp"
#include "./RttRangingParams.def.hpp"
#include "../../../../JString.hpp"
#include "./RttRangingParams_Builder.def.hpp"

namespace android::ranging::wifi::rtt
{
	// Fields
	
	// Constructors
	inline RttRangingParams_Builder::RttRangingParams_Builder(JString arg0)
		: JObject(
			"android.ranging.wifi.rtt.RttRangingParams$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::ranging::wifi::rtt::RttRangingParams RttRangingParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/wifi/rtt/RttRangingParams;"
		);
	}
	inline android::ranging::wifi::rtt::RttRangingParams_Builder RttRangingParams_Builder::setMatchFilter(JByteArray arg0) const
	{
		return callObjectMethod(
			"setMatchFilter",
			"([B)Landroid/ranging/wifi/rtt/RttRangingParams$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::ranging::wifi::rtt::RttRangingParams_Builder RttRangingParams_Builder::setPeriodicRangingHwFeatureEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setPeriodicRangingHwFeatureEnabled",
			"(Z)Landroid/ranging/wifi/rtt/RttRangingParams$Builder;",
			arg0
		);
	}
	inline android::ranging::wifi::rtt::RttRangingParams_Builder RttRangingParams_Builder::setRangingUpdateRate(jint arg0) const
	{
		return callObjectMethod(
			"setRangingUpdateRate",
			"(I)Landroid/ranging/wifi/rtt/RttRangingParams$Builder;",
			arg0
		);
	}
} // namespace android::ranging::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::wifi::rtt;
#endif
