#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JLongArray.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PlaybackMetrics.def.hpp"

namespace android::media::metrics
{
	// Fields
	inline jint PlaybackMetrics::CONTENT_TYPE_AD()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"CONTENT_TYPE_AD"
		);
	}
	inline jint PlaybackMetrics::CONTENT_TYPE_MAIN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"CONTENT_TYPE_MAIN"
		);
	}
	inline jint PlaybackMetrics::CONTENT_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"CONTENT_TYPE_OTHER"
		);
	}
	inline jint PlaybackMetrics::CONTENT_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"CONTENT_TYPE_UNKNOWN"
		);
	}
	inline JObject PlaybackMetrics::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.PlaybackMetrics",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PlaybackMetrics::DRM_TYPE_CLEARKEY()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_CLEARKEY"
		);
	}
	inline jint PlaybackMetrics::DRM_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_NONE"
		);
	}
	inline jint PlaybackMetrics::DRM_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_OTHER"
		);
	}
	inline jint PlaybackMetrics::DRM_TYPE_PLAY_READY()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_PLAY_READY"
		);
	}
	inline jint PlaybackMetrics::DRM_TYPE_WIDEVINE_L1()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_WIDEVINE_L1"
		);
	}
	inline jint PlaybackMetrics::DRM_TYPE_WIDEVINE_L3()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_WIDEVINE_L3"
		);
	}
	inline jint PlaybackMetrics::DRM_TYPE_WV_L3_FALLBACK()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_WV_L3_FALLBACK"
		);
	}
	inline jint PlaybackMetrics::PLAYBACK_TYPE_LIVE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"PLAYBACK_TYPE_LIVE"
		);
	}
	inline jint PlaybackMetrics::PLAYBACK_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"PLAYBACK_TYPE_OTHER"
		);
	}
	inline jint PlaybackMetrics::PLAYBACK_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"PLAYBACK_TYPE_UNKNOWN"
		);
	}
	inline jint PlaybackMetrics::PLAYBACK_TYPE_VOD()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"PLAYBACK_TYPE_VOD"
		);
	}
	inline jint PlaybackMetrics::STREAM_SOURCE_DEVICE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_SOURCE_DEVICE"
		);
	}
	inline jint PlaybackMetrics::STREAM_SOURCE_MIXED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_SOURCE_MIXED"
		);
	}
	inline jint PlaybackMetrics::STREAM_SOURCE_NETWORK()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_SOURCE_NETWORK"
		);
	}
	inline jint PlaybackMetrics::STREAM_SOURCE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_SOURCE_UNKNOWN"
		);
	}
	inline jint PlaybackMetrics::STREAM_TYPE_DASH()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_DASH"
		);
	}
	inline jint PlaybackMetrics::STREAM_TYPE_HLS()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_HLS"
		);
	}
	inline jint PlaybackMetrics::STREAM_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_OTHER"
		);
	}
	inline jint PlaybackMetrics::STREAM_TYPE_PROGRESSIVE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_PROGRESSIVE"
		);
	}
	inline jint PlaybackMetrics::STREAM_TYPE_SS()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_SS"
		);
	}
	inline jint PlaybackMetrics::STREAM_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PlaybackMetrics::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PlaybackMetrics::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PlaybackMetrics::getAudioUnderrunCount() const
	{
		return callMethod<jint>(
			"getAudioUnderrunCount",
			"()I"
		);
	}
	inline jint PlaybackMetrics::getContentType() const
	{
		return callMethod<jint>(
			"getContentType",
			"()I"
		);
	}
	inline JByteArray PlaybackMetrics::getDrmSessionId() const
	{
		return callObjectMethod(
			"getDrmSessionId",
			"()[B"
		);
	}
	inline jint PlaybackMetrics::getDrmType() const
	{
		return callMethod<jint>(
			"getDrmType",
			"()I"
		);
	}
	inline JLongArray PlaybackMetrics::getExperimentIds() const
	{
		return callObjectMethod(
			"getExperimentIds",
			"()[J"
		);
	}
	inline jlong PlaybackMetrics::getLocalBytesRead() const
	{
		return callMethod<jlong>(
			"getLocalBytesRead",
			"()J"
		);
	}
	inline jlong PlaybackMetrics::getMediaDurationMillis() const
	{
		return callMethod<jlong>(
			"getMediaDurationMillis",
			"()J"
		);
	}
	inline android::os::Bundle PlaybackMetrics::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	inline jlong PlaybackMetrics::getNetworkBytesRead() const
	{
		return callMethod<jlong>(
			"getNetworkBytesRead",
			"()J"
		);
	}
	inline jlong PlaybackMetrics::getNetworkTransferDurationMillis() const
	{
		return callMethod<jlong>(
			"getNetworkTransferDurationMillis",
			"()J"
		);
	}
	inline jint PlaybackMetrics::getPlaybackType() const
	{
		return callMethod<jint>(
			"getPlaybackType",
			"()I"
		);
	}
	inline JString PlaybackMetrics::getPlayerName() const
	{
		return callObjectMethod(
			"getPlayerName",
			"()Ljava/lang/String;"
		);
	}
	inline JString PlaybackMetrics::getPlayerVersion() const
	{
		return callObjectMethod(
			"getPlayerVersion",
			"()Ljava/lang/String;"
		);
	}
	inline jint PlaybackMetrics::getStreamSource() const
	{
		return callMethod<jint>(
			"getStreamSource",
			"()I"
		);
	}
	inline jint PlaybackMetrics::getStreamType() const
	{
		return callMethod<jint>(
			"getStreamType",
			"()I"
		);
	}
	inline jint PlaybackMetrics::getVideoFramesDropped() const
	{
		return callMethod<jint>(
			"getVideoFramesDropped",
			"()I"
		);
	}
	inline jint PlaybackMetrics::getVideoFramesPlayed() const
	{
		return callMethod<jint>(
			"getVideoFramesPlayed",
			"()I"
		);
	}
	inline jint PlaybackMetrics::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PlaybackMetrics::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PlaybackMetrics::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::metrics

// Base class headers

