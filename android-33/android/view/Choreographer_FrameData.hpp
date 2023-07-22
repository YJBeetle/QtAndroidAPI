#pragma once

#include "../../JArray.hpp"
#include "./Choreographer_FrameTimeline.def.hpp"
#include "./Choreographer_FrameData.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jlong Choreographer_FrameData::getFrameTimeNanos() const
	{
		return callMethod<jlong>(
			"getFrameTimeNanos",
			"()J"
		);
	}
	inline JArray Choreographer_FrameData::getFrameTimelines() const
	{
		return callObjectMethod(
			"getFrameTimelines",
			"()[Landroid/view/Choreographer$FrameTimeline;"
		);
	}
	inline android::view::Choreographer_FrameTimeline Choreographer_FrameData::getPreferredFrameTimeline() const
	{
		return callObjectMethod(
			"getPreferredFrameTimeline",
			"()Landroid/view/Choreographer$FrameTimeline;"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
