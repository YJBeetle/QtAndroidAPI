#pragma once

#include "../RangingDevice.def.hpp"
#include "./DeviceHandle.def.hpp"
#include "./DeviceHandle_Builder.def.hpp"

namespace android::ranging::oob
{
	// Fields
	
	// Constructors
	inline DeviceHandle_Builder::DeviceHandle_Builder(android::ranging::RangingDevice arg0, JObject arg1)
		: JObject(
			"android.ranging.oob.DeviceHandle$Builder",
			"(Landroid/ranging/RangingDevice;Landroid/ranging/oob/TransportHandle;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::ranging::oob::DeviceHandle DeviceHandle_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/oob/DeviceHandle;"
		);
	}
} // namespace android::ranging::oob

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::oob;
#endif
