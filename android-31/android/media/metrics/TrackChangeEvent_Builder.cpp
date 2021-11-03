#include "./TrackChangeEvent.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./TrackChangeEvent_Builder.hpp"

namespace android::media::metrics
{
	// Fields
	
	// QAndroidJniObject forward
	TrackChangeEvent_Builder::TrackChangeEvent_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TrackChangeEvent_Builder::TrackChangeEvent_Builder(jint arg0)
		: JObject(
			"android.media.metrics.TrackChangeEvent$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	android::media::metrics::TrackChangeEvent TrackChangeEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/TrackChangeEvent;"
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setAudioSampleRate(jint arg0) const
	{
		return callObjectMethod(
			"setAudioSampleRate",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setBitrate(jint arg0) const
	{
		return callObjectMethod(
			"setBitrate",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setChannelCount(jint arg0) const
	{
		return callObjectMethod(
			"setChannelCount",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setCodecName(JString arg0) const
	{
		return callObjectMethod(
			"setCodecName",
			"(Ljava/lang/String;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setContainerMimeType(JString arg0) const
	{
		return callObjectMethod(
			"setContainerMimeType",
			"(Ljava/lang/String;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setHeight(jint arg0) const
	{
		return callObjectMethod(
			"setHeight",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setLanguage(JString arg0) const
	{
		return callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setLanguageRegion(JString arg0) const
	{
		return callObjectMethod(
			"setLanguageRegion",
			"(Ljava/lang/String;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setMetricsBundle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setMetricsBundle",
			"(Landroid/os/Bundle;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object()
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setSampleMimeType(JString arg0) const
	{
		return callObjectMethod(
			"setSampleMimeType",
			"(Ljava/lang/String;)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setTimeSinceCreatedMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setTimeSinceCreatedMillis",
			"(J)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setTrackChangeReason(jint arg0) const
	{
		return callObjectMethod(
			"setTrackChangeReason",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setTrackState(jint arg0) const
	{
		return callObjectMethod(
			"setTrackState",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setVideoFrameRate(jfloat arg0) const
	{
		return callObjectMethod(
			"setVideoFrameRate",
			"(F)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
	android::media::metrics::TrackChangeEvent_Builder TrackChangeEvent_Builder::setWidth(jint arg0) const
	{
		return callObjectMethod(
			"setWidth",
			"(I)Landroid/media/metrics/TrackChangeEvent$Builder;",
			arg0
		);
	}
} // namespace android::media::metrics

