#pragma once

#include "./Choreographer_FrameTimeline.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jlong Choreographer_FrameTimeline::getDeadlineNanos() const
	{
		return callMethod<jlong>(
			"getDeadlineNanos",
			"()J"
		);
	}
	inline jlong Choreographer_FrameTimeline::getExpectedPresentationTimeNanos() const
	{
		return callMethod<jlong>(
			"getExpectedPresentationTimeNanos",
			"()J"
		);
	}
	inline jlong Choreographer_FrameTimeline::getVsyncId() const
	{
		return callMethod<jlong>(
			"getVsyncId",
			"()J"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
