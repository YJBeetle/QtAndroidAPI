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
		FrameStats(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FrameStats();
		
		// Methods
		jlong getEndTimeNano() const;
		jint getFrameCount() const;
		jlong getFramePresentedTimeNano(jint arg0) const;
		jlong getRefreshPeriodNano() const;
		jlong getStartTimeNano() const;
	};
} // namespace android::view

