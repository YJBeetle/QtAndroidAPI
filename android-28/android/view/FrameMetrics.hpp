#pragma once

#include "./FrameMetrics.def.hpp"

namespace android::view
{
	// Fields
	inline jint FrameMetrics::ANIMATION_DURATION()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"ANIMATION_DURATION"
		);
	}
	inline jint FrameMetrics::COMMAND_ISSUE_DURATION()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"COMMAND_ISSUE_DURATION"
		);
	}
	inline jint FrameMetrics::DRAW_DURATION()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"DRAW_DURATION"
		);
	}
	inline jint FrameMetrics::FIRST_DRAW_FRAME()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"FIRST_DRAW_FRAME"
		);
	}
	inline jint FrameMetrics::INPUT_HANDLING_DURATION()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"INPUT_HANDLING_DURATION"
		);
	}
	inline jint FrameMetrics::INTENDED_VSYNC_TIMESTAMP()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"INTENDED_VSYNC_TIMESTAMP"
		);
	}
	inline jint FrameMetrics::LAYOUT_MEASURE_DURATION()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"LAYOUT_MEASURE_DURATION"
		);
	}
	inline jint FrameMetrics::SWAP_BUFFERS_DURATION()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"SWAP_BUFFERS_DURATION"
		);
	}
	inline jint FrameMetrics::SYNC_DURATION()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"SYNC_DURATION"
		);
	}
	inline jint FrameMetrics::TOTAL_DURATION()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"TOTAL_DURATION"
		);
	}
	inline jint FrameMetrics::UNKNOWN_DELAY_DURATION()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"UNKNOWN_DELAY_DURATION"
		);
	}
	inline jint FrameMetrics::VSYNC_TIMESTAMP()
	{
		return getStaticField<jint>(
			"android.view.FrameMetrics",
			"VSYNC_TIMESTAMP"
		);
	}
	
	// Constructors
	inline FrameMetrics::FrameMetrics(android::view::FrameMetrics &arg0)
		: JObject(
			"android.view.FrameMetrics",
			"(Landroid/view/FrameMetrics;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jlong FrameMetrics::getMetric(jint arg0) const
	{
		return callMethod<jlong>(
			"getMetric",
			"(I)J",
			arg0
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
