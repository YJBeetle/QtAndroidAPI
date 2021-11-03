#pragma once

#include "../../../JObject.hpp"

namespace android::media::metrics
{
	class TrackChangeEvent;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::metrics
{
	class TrackChangeEvent_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TrackChangeEvent_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrackChangeEvent_Builder(QJniObject obj);
		
		// Constructors
		TrackChangeEvent_Builder(jint arg0);
		
		// Methods
		android::media::metrics::TrackChangeEvent build();
		android::media::metrics::TrackChangeEvent_Builder setAudioSampleRate(jint arg0);
		android::media::metrics::TrackChangeEvent_Builder setBitrate(jint arg0);
		android::media::metrics::TrackChangeEvent_Builder setChannelCount(jint arg0);
		android::media::metrics::TrackChangeEvent_Builder setCodecName(jstring arg0);
		android::media::metrics::TrackChangeEvent_Builder setContainerMimeType(jstring arg0);
		android::media::metrics::TrackChangeEvent_Builder setHeight(jint arg0);
		android::media::metrics::TrackChangeEvent_Builder setLanguage(jstring arg0);
		android::media::metrics::TrackChangeEvent_Builder setLanguageRegion(jstring arg0);
		android::media::metrics::TrackChangeEvent_Builder setMetricsBundle(android::os::Bundle arg0);
		android::media::metrics::TrackChangeEvent_Builder setSampleMimeType(jstring arg0);
		android::media::metrics::TrackChangeEvent_Builder setTimeSinceCreatedMillis(jlong arg0);
		android::media::metrics::TrackChangeEvent_Builder setTrackChangeReason(jint arg0);
		android::media::metrics::TrackChangeEvent_Builder setTrackState(jint arg0);
		android::media::metrics::TrackChangeEvent_Builder setVideoFrameRate(jfloat arg0);
		android::media::metrics::TrackChangeEvent_Builder setWidth(jint arg0);
	};
} // namespace android::media::metrics

