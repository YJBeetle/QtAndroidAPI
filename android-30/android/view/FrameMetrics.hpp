#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class FrameMetrics : public __JniBaseClass
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FrameMetrics(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FrameMetrics(QAndroidJniObject obj);
		
		// Constructors
		FrameMetrics(android::view::FrameMetrics &arg0);
		
		// Methods
		jlong getMetric(jint arg0);
	};
} // namespace android::view
