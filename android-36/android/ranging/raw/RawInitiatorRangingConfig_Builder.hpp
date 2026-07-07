#pragma once

#include "./RawInitiatorRangingConfig.def.hpp"
#include "./RawRangingDevice.def.hpp"
#include "./RawInitiatorRangingConfig_Builder.def.hpp"

namespace android::ranging::raw
{
	// Fields
	
	// Constructors
	inline RawInitiatorRangingConfig_Builder::RawInitiatorRangingConfig_Builder()
		: JObject(
			"android.ranging.raw.RawInitiatorRangingConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::ranging::raw::RawInitiatorRangingConfig_Builder RawInitiatorRangingConfig_Builder::addRawRangingDevice(android::ranging::raw::RawRangingDevice arg0) const
	{
		return callObjectMethod(
			"addRawRangingDevice",
			"(Landroid/ranging/raw/RawRangingDevice;)Landroid/ranging/raw/RawInitiatorRangingConfig$Builder;",
			arg0.object()
		);
	}
	inline android::ranging::raw::RawInitiatorRangingConfig_Builder RawInitiatorRangingConfig_Builder::addRawRangingDevices(JObject arg0) const
	{
		return callObjectMethod(
			"addRawRangingDevices",
			"(Ljava/util/List;)Landroid/ranging/raw/RawInitiatorRangingConfig$Builder;",
			arg0.object()
		);
	}
	inline android::ranging::raw::RawInitiatorRangingConfig RawInitiatorRangingConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/raw/RawInitiatorRangingConfig;"
		);
	}
} // namespace android::ranging::raw

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::raw;
#endif
