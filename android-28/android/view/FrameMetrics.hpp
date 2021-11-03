#pragma once

#include "../../JObject.hpp"


namespace android::view
{
	class FrameMetrics : public JObject
	{
	public:
		// Fields
		static jint ANIMATION_DURATION();
		static jint COMMAND_ISSUE_DURATION();
		static jint DRAW_DURATION();
		static jint FIRST_DRAW_FRAME();
		static jint INPUT_HANDLING_DURATION();
		static jint INTENDED_VSYNC_TIMESTAMP();
		static jint LAYOUT_MEASURE_DURATION();
		static jint SWAP_BUFFERS_DURATION();
		static jint SYNC_DURATION();
		static jint TOTAL_DURATION();
		static jint UNKNOWN_DELAY_DURATION();
		static jint VSYNC_TIMESTAMP();
		
		// QJniObject forward
		template<typename ...Ts> explicit FrameMetrics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FrameMetrics(QJniObject obj);
		
		// Constructors
		FrameMetrics(android::view::FrameMetrics &arg0);
		
		// Methods
		jlong getMetric(jint arg0);
	};
} // namespace android::view

