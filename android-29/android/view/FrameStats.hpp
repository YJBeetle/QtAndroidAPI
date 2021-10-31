#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class FrameStats : public __JniBaseClass
	{
	public:
		// Fields
		static jlong UNDEFINED_TIME_NANO();
		
		// QJniObject forward
		template<typename ...Ts> explicit FrameStats(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FrameStats(QJniObject obj);
		
		// Constructors
		FrameStats();
		
		// Methods
		jlong getEndTimeNano();
		jint getFrameCount();
		jlong getFramePresentedTimeNano(jint arg0);
		jlong getRefreshPeriodNano();
		jlong getStartTimeNano();
	};
} // namespace android::view

