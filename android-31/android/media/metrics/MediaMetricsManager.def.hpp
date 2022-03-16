#pragma once

#include "../../../JObject.hpp"

namespace android::media::metrics
{
	class PlaybackSession;
}
namespace android::media::metrics
{
	class RecordingSession;
}

namespace android::media::metrics
{
	class MediaMetricsManager : public JObject
	{
	public:
		// Fields
		static jlong INVALID_TIMESTAMP();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaMetricsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaMetricsManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::media::metrics::PlaybackSession createPlaybackSession() const;
		android::media::metrics::RecordingSession createRecordingSession() const;
	};
} // namespace android::media::metrics

