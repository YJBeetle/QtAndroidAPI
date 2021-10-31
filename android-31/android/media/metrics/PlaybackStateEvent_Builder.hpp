#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::metrics
{
	class PlaybackStateEvent;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::metrics
{
	class PlaybackStateEvent_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PlaybackStateEvent_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackStateEvent_Builder(QAndroidJniObject obj);
		
		// Constructors
		PlaybackStateEvent_Builder();
		
		// Methods
		android::media::metrics::PlaybackStateEvent build();
		android::media::metrics::PlaybackStateEvent_Builder setMetricsBundle(android::os::Bundle arg0);
		android::media::metrics::PlaybackStateEvent_Builder setState(jint arg0);
		android::media::metrics::PlaybackStateEvent_Builder setTimeSinceCreatedMillis(jlong arg0);
	};
} // namespace android::media::metrics

