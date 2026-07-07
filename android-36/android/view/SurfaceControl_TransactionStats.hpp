#pragma once

#include "../hardware/SyncFence.def.hpp"
#include "./SurfaceControl_TransactionStats.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jlong SurfaceControl_TransactionStats::getLatchTimeNanos() const
	{
		return callMethod<jlong>(
			"getLatchTimeNanos",
			"()J"
		);
	}
	inline android::hardware::SyncFence SurfaceControl_TransactionStats::getPresentFence() const
	{
		return callObjectMethod(
			"getPresentFence",
			"()Landroid/hardware/SyncFence;"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
