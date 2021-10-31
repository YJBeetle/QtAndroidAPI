#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class MediaMetricsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jlong INVALID_TIMESTAMP();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaMetricsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaMetricsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::metrics::PlaybackSession createPlaybackSession();
		android::media::metrics::RecordingSession createRecordingSession();
	};
} // namespace android::media::metrics

