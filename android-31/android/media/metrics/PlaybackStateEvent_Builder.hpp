#pragma once

#include "../../../JObject.hpp"

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
	class PlaybackStateEvent_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PlaybackStateEvent_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackStateEvent_Builder(QJniObject obj);
		
		// Constructors
		PlaybackStateEvent_Builder();
		
		// Methods
		android::media::metrics::PlaybackStateEvent build();
		android::media::metrics::PlaybackStateEvent_Builder setMetricsBundle(android::os::Bundle arg0);
		android::media::metrics::PlaybackStateEvent_Builder setState(jint arg0);
		android::media::metrics::PlaybackStateEvent_Builder setTimeSinceCreatedMillis(jlong arg0);
	};
} // namespace android::media::metrics

