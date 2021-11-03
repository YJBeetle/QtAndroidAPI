#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class FrameStats : public JObject
	{
	public:
		// Fields
		static jlong UNDEFINED_TIME_NANO();
		
		// QJniObject forward
		template<typename ...Ts> explicit FrameStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
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

