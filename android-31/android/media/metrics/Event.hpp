#pragma once

#include "../../os/Bundle.def.hpp"
#include "./Event.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::os::Bundle Event::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	inline jlong Event::getTimeSinceCreatedMillis() const
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
} // namespace android::media::metrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
