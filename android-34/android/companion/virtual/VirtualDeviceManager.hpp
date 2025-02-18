#pragma once

#include "./VirtualDeviceManager.def.hpp"

namespace android::companion::virtual_
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject VirtualDeviceManager::getVirtualDevices() const
	{
		return callObjectMethod(
			"getVirtualDevices",
			"()Ljava/util/List;"
		);
	}
} // namespace android::companion::virtual_

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion::virtual_;
#endif
