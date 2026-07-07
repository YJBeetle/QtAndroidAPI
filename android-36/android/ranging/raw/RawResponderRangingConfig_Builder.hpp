#pragma once

#include "./RawRangingDevice.def.hpp"
#include "./RawResponderRangingConfig.def.hpp"
#include "./RawResponderRangingConfig_Builder.def.hpp"

namespace android::ranging::raw
{
	// Fields
	
	// Constructors
	inline RawResponderRangingConfig_Builder::RawResponderRangingConfig_Builder()
		: JObject(
			"android.ranging.raw.RawResponderRangingConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::ranging::raw::RawResponderRangingConfig RawResponderRangingConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/raw/RawResponderRangingConfig;"
		);
	}
	inline android::ranging::raw::RawResponderRangingConfig_Builder RawResponderRangingConfig_Builder::setRawRangingDevice(android::ranging::raw::RawRangingDevice arg0) const
	{
		return callObjectMethod(
			"setRawRangingDevice",
			"(Landroid/ranging/raw/RawRangingDevice;)Landroid/ranging/raw/RawResponderRangingConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::ranging::raw

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::raw;
#endif
