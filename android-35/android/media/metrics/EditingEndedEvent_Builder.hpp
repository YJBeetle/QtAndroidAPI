#pragma once

#include "./EditingEndedEvent.def.hpp"
#include "./MediaItemInfo.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./EditingEndedEvent_Builder.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	inline EditingEndedEvent_Builder::EditingEndedEvent_Builder(jint arg0)
		: JObject(
			"android.media.metrics.EditingEndedEvent$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::media::metrics::EditingEndedEvent_Builder EditingEndedEvent_Builder::addInputMediaItemInfo(android::media::metrics::MediaItemInfo arg0) const
	{
		return callObjectMethod(
			"addInputMediaItemInfo",
			"(Landroid/media/metrics/MediaItemInfo;)Landroid/media/metrics/EditingEndedEvent$Builder;",
			arg0.object()
		);
	}
	inline android::media::metrics::EditingEndedEvent_Builder EditingEndedEvent_Builder::addOperationType(jlong arg0) const
	{
		return callObjectMethod(
			"addOperationType",
			"(J)Landroid/media/metrics/EditingEndedEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::EditingEndedEvent EditingEndedEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/EditingEndedEvent;"
		);
	}
	inline android::media::metrics::EditingEndedEvent_Builder EditingEndedEvent_Builder::setErrorCode(jint arg0) const
	{
		return callObjectMethod(
			"setErrorCode",
			"(I)Landroid/media/metrics/EditingEndedEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::EditingEndedEvent_Builder EditingEndedEvent_Builder::setExporterName(JString arg0) const
	{
		return callObjectMethod(
			"setExporterName",
			"(Ljava/lang/String;)Landroid/media/metrics/EditingEndedEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::EditingEndedEvent_Builder EditingEndedEvent_Builder::setFinalProgressPercent(jfloat arg0) const
	{
		return callObjectMethod(
			"setFinalProgressPercent",
			"(F)Landroid/media/metrics/EditingEndedEvent$Builder;",
			arg0
		);
	}
	inline android::media::metrics::EditingEndedEvent_Builder EditingEndedEvent_Builder::setMetricsBundle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setMetricsBundle",
			"(Landroid/os/Bundle;)Landroid/media/metrics/EditingEndedEvent$Builder;",
			arg0.object()
		);
	}
	inline android::media::metrics::EditingEndedEvent_Builder EditingEndedEvent_Builder::setMuxerName(JString arg0) const
	{
		return callObjectMethod(
			"setMuxerName",
			"(Ljava/lang/String;)Landroid/media/metrics/EditingEndedEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::EditingEndedEvent_Builder EditingEndedEvent_Builder::setOutputMediaItemInfo(android::media::metrics::MediaItemInfo arg0) const
	{
		return callObjectMethod(
			"setOutputMediaItemInfo",
			"(Landroid/media/metrics/MediaItemInfo;)Landroid/media/metrics/EditingEndedEvent$Builder;",
			arg0.object()
		);
	}
	inline android::media::metrics::EditingEndedEvent_Builder EditingEndedEvent_Builder::setTimeSinceCreatedMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setTimeSinceCreatedMillis",
			"(J)Landroid/media/metrics/EditingEndedEvent$Builder;",
			arg0
		);
	}
} // namespace android::media::metrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
