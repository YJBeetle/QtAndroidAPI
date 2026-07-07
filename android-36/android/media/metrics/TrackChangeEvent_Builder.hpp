#pragma once

#include "./TrackChangeEvent.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./TrackChangeEvent_Builder.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	inline TrackChangeEvent_Builder::TrackChangeEvent_Builder(jint arg0)
		: JObject(
			"android.media.metrics.TrackChangeEvent$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::media::metrics::TrackChangeEvent TrackChangeEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/TrackChangeEvent;"
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setAudioSampleRate(jint arg0) const
	{
		return callObjectMethod(
			"setAudioSampleRate",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setBitrate(jint arg0) const
	{
		return callObjectMethod(
			"setBitrate",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setChannelCount(jint arg0) const
	{
		return callObjectMethod(
			"setChannelCount",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setCodecName(JString arg0) const
	{
		return callObjectMethod(
			"setCodecName",
			"(Ljava/lang/String;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setContainerMimeType(JString arg0) const
	{
		return callObjectMethod(
			"setContainerMimeType",
			"(Ljava/lang/String;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setHeight(jint arg0) const
	{
		return callObjectMethod(
			"setHeight",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setLanguage(JString arg0) const
	{
		return callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setLanguageRegion(JString arg0) const
	{
		return callObjectMethod(
			"setLanguageRegion",
			"(Ljava/lang/String;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setMetricsBundle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setMetricsBundle",
			"(Landroid/os/Bundle;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object()
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setSampleMimeType(JString arg0) const
	{
		return callObjectMethod(
			"setSampleMimeType",
			"(Ljava/lang/String;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setTimeSinceCreatedMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setTimeSinceCreatedMillis",
			"(J)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setTrackChangeReason(jint arg0) const
	{
		return callObjectMethod(
			"setTrackChangeReason",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setTrackState(jint arg0) const
	{
		return callObjectMethod(
			"setTrackState",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setVideoFrameRate(jfloat arg0) const
	{
		return callObjectMethod(
			"setVideoFrameRate",
			"(F)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setWidth(jint arg0) const
	{
		return callObjectMethod(
			"setWidth",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
} // namespace android::media::metrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
