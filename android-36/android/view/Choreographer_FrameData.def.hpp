#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::view
{
	class Choreographer_FrameTimeline;
}

namespace android::view
{
	class Choreographer_FrameData : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Choreographer_FrameData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Choreographer_FrameData(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jlong getFrameTimeNanos() const;
		JArray getFrameTimelines() const;
		android::view::Choreographer_FrameTimeline getPreferredFrameTimeline() const;
	};
} // namespace android::view

