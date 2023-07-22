#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class Choreographer_FrameTimeline : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Choreographer_FrameTimeline(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Choreographer_FrameTimeline(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jlong getDeadlineNanos() const;
		jlong getExpectedPresentationTimeNanos() const;
		jlong getVsyncId() const;
	};
} // namespace android::view

