#pragma once

#include "./BugreportManager_BugreportCallback.def.hpp"
#include "./ParcelFileDescriptor.def.hpp"
#include "./BugreportManager.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void BugreportManager::cancelBugreport() const
	{
		callMethod<void>(
			"cancelBugreport",
			"()V"
		);
	}
	inline void BugreportManager::startConnectivityBugreport(android::os::ParcelFileDescriptor arg0, JObject arg1, android::os::BugreportManager_BugreportCallback arg2) const
	{
		callMethod<void>(
			"startConnectivityBugreport",
			"(Landroid/os/ParcelFileDescriptor;Ljava/util/concurrent/Executor;Landroid/os/BugreportManager$BugreportCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::os

// Base class headers

