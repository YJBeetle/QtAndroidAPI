#pragma once

#include "./VirtualDevice.def.hpp"
#include "./VirtualDeviceManager.def.hpp"

namespace android::companion::virtual
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::companion::virtual::VirtualDevice VirtualDeviceManager::getVirtualDevice(jint arg0) const
	{
		return callObjectMethod(
			"getVirtualDevice",
			"(I)Landroid/companion/virtual/VirtualDevice;",
			arg0
		);
	}
	inline JObject VirtualDeviceManager::getVirtualDevices() const
	{
		return callObjectMethod(
			"getVirtualDevices",
			"()Ljava/util/List;"
		);
	}
	inline void VirtualDeviceManager::registerVirtualDeviceListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerVirtualDeviceListener",
			"(Ljava/util/concurrent/Executor;Landroid/companion/virtual/VirtualDeviceManager$VirtualDeviceListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void VirtualDeviceManager::unregisterVirtualDeviceListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterVirtualDeviceListener",
			"(Landroid/companion/virtual/VirtualDeviceManager$VirtualDeviceListener;)V",
			arg0.object()
		);
	}
} // namespace android::companion::virtual

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion::virtual;
#endif
