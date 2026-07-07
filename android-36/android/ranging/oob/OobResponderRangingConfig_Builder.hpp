#pragma once

#include "./DeviceHandle.def.hpp"
#include "./OobResponderRangingConfig.def.hpp"
#include "./OobResponderRangingConfig_Builder.def.hpp"

namespace android::ranging::oob
{
	// Fields
	
	// Constructors
	inline OobResponderRangingConfig_Builder::OobResponderRangingConfig_Builder(android::ranging::oob::DeviceHandle arg0)
		: JObject(
			"android.ranging.oob.OobResponderRangingConfig$Builder",
			"(Landroid/ranging/oob/DeviceHandle;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::ranging::oob::OobResponderRangingConfig OobResponderRangingConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/oob/OobResponderRangingConfig;"
		);
	}
} // namespace android::ranging::oob

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::oob;
#endif
