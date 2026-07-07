#pragma once

#include "./MediaItemInfo.def.hpp"
#include "../../util/Size.def.hpp"
#include "../../../JString.hpp"
#include "./MediaItemInfo_Builder.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	inline MediaItemInfo_Builder::MediaItemInfo_Builder()
		: JObject(
			"android.media.metrics.MediaItemInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::addCodecName(JString arg0) const
	{
		return callObjectMethod(
			"addCodecName",
			"(Ljava/lang/String;)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::addDataType(jlong arg0) const
	{
		return callObjectMethod(
			"addDataType",
			"(J)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::addSampleMimeType(JString arg0) const
	{
		return callObjectMethod(
			"addSampleMimeType",
			"(Ljava/lang/String;)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::MediaItemInfo MediaItemInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/metrics/MediaItemInfo;"
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::setAudioChannelCount(jint arg0) const
	{
		return callObjectMethod(
			"setAudioChannelCount",
			"(I)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::setAudioSampleCount(jlong arg0) const
	{
		return callObjectMethod(
			"setAudioSampleCount",
			"(J)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::setAudioSampleRateHz(jint arg0) const
	{
		return callObjectMethod(
			"setAudioSampleRateHz",
			"(I)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::setClipDurationMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setClipDurationMillis",
			"(J)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::setContainerMimeType(JString arg0) const
	{
		return callObjectMethod(
			"setContainerMimeType",
			"(Ljava/lang/String;)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::setDurationMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setDurationMillis",
			"(J)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::setSourceType(jint arg0) const
	{
		return callObjectMethod(
			"setSourceType",
			"(I)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::setVideoDataSpace(jint arg0) const
	{
		return callObjectMethod(
			"setVideoDataSpace",
			"(I)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::setVideoFrameRate(jfloat arg0) const
	{
		return callObjectMethod(
			"setVideoFrameRate",
			"(F)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::setVideoSampleCount(jlong arg0) const
	{
		return callObjectMethod(
			"setVideoSampleCount",
			"(J)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0
		);
	}
	inline android::media::metrics::MediaItemInfo_Builder MediaItemInfo_Builder::setVideoSize(android::util::Size arg0) const
	{
		return callObjectMethod(
			"setVideoSize",
			"(Landroid/util/Size;)Landroid/media/metrics/MediaItemInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::media::metrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
