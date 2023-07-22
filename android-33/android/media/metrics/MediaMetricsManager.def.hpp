#pragma once

#include "../../../JObject.hpp"

namespace android::media::metrics
{
	class BundleSession;
}
namespace android::media::metrics
{
	class EditingSession;
}
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
	class TranscodingSession;
}
class JString;

namespace android::media::metrics
{
	class MediaMetricsManager : public JObject
	{
	public:
		// Fields
		static jlong INVALID_TIMESTAMP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaMetricsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaMetricsManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::media::metrics::BundleSession createBundleSession() const;
		android::media::metrics::EditingSession createEditingSession() const;
		android::media::metrics::PlaybackSession createPlaybackSession() const;
		android::media::metrics::RecordingSession createRecordingSession() const;
		android::media::metrics::TranscodingSession createTranscodingSession() const;
		void releaseSessionId(JString arg0) const;
	};
} // namespace android::media::metrics

