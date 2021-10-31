#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./PlaybackMetrics.hpp"

namespace android::media::metrics
{
	// Fields
	jint PlaybackMetrics::CONTENT_TYPE_AD()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"CONTENT_TYPE_AD"
		);
	}
	jint PlaybackMetrics::CONTENT_TYPE_MAIN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"CONTENT_TYPE_MAIN"
		);
	}
	jint PlaybackMetrics::CONTENT_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"CONTENT_TYPE_OTHER"
		);
	}
	jint PlaybackMetrics::CONTENT_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"CONTENT_TYPE_UNKNOWN"
		);
	}
	__JniBaseClass PlaybackMetrics::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.PlaybackMetrics",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PlaybackMetrics::DRM_TYPE_CLEARKEY()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_CLEARKEY"
		);
	}
	jint PlaybackMetrics::DRM_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_NONE"
		);
	}
	jint PlaybackMetrics::DRM_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_OTHER"
		);
	}
	jint PlaybackMetrics::DRM_TYPE_PLAY_READY()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_PLAY_READY"
		);
	}
	jint PlaybackMetrics::DRM_TYPE_WIDEVINE_L1()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_WIDEVINE_L1"
		);
	}
	jint PlaybackMetrics::DRM_TYPE_WIDEVINE_L3()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_WIDEVINE_L3"
		);
	}
	jint PlaybackMetrics::DRM_TYPE_WV_L3_FALLBACK()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"DRM_TYPE_WV_L3_FALLBACK"
		);
	}
	jint PlaybackMetrics::PLAYBACK_TYPE_LIVE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"PLAYBACK_TYPE_LIVE"
		);
	}
	jint PlaybackMetrics::PLAYBACK_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"PLAYBACK_TYPE_OTHER"
		);
	}
	jint PlaybackMetrics::PLAYBACK_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"PLAYBACK_TYPE_UNKNOWN"
		);
	}
	jint PlaybackMetrics::PLAYBACK_TYPE_VOD()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"PLAYBACK_TYPE_VOD"
		);
	}
	jint PlaybackMetrics::STREAM_SOURCE_DEVICE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_SOURCE_DEVICE"
		);
	}
	jint PlaybackMetrics::STREAM_SOURCE_MIXED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_SOURCE_MIXED"
		);
	}
	jint PlaybackMetrics::STREAM_SOURCE_NETWORK()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_SOURCE_NETWORK"
		);
	}
	jint PlaybackMetrics::STREAM_SOURCE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_SOURCE_UNKNOWN"
		);
	}
	jint PlaybackMetrics::STREAM_TYPE_DASH()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_DASH"
		);
	}
	jint PlaybackMetrics::STREAM_TYPE_HLS()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_HLS"
		);
	}
	jint PlaybackMetrics::STREAM_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_OTHER"
		);
	}
	jint PlaybackMetrics::STREAM_TYPE_PROGRESSIVE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_PROGRESSIVE"
		);
	}
	jint PlaybackMetrics::STREAM_TYPE_SS()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_SS"
		);
	}
	jint PlaybackMetrics::STREAM_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackMetrics",
			"STREAM_TYPE_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	PlaybackMetrics::PlaybackMetrics(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PlaybackMetrics::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PlaybackMetrics::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PlaybackMetrics::getAudioUnderrunCount()
	{
		return callMethod<jint>(
			"getAudioUnderrunCount",
			"()I"
		);
	}
	jint PlaybackMetrics::getContentType()
	{
		return callMethod<jint>(
			"getContentType",
			"()I"
		);
	}
	jbyteArray PlaybackMetrics::getDrmSessionId()
	{
		return callObjectMethod(
			"getDrmSessionId",
			"()[B"
		).object<jbyteArray>();
	}
	jint PlaybackMetrics::getDrmType()
	{
		return callMethod<jint>(
			"getDrmType",
			"()I"
		);
	}
	jlongArray PlaybackMetrics::getExperimentIds()
	{
		return callObjectMethod(
			"getExperimentIds",
			"()[J"
		).object<jlongArray>();
	}
	jlong PlaybackMetrics::getLocalBytesRead()
	{
		return callMethod<jlong>(
			"getLocalBytesRead",
			"()J"
		);
	}
	jlong PlaybackMetrics::getMediaDurationMillis()
	{
		return callMethod<jlong>(
			"getMediaDurationMillis",
			"()J"
		);
	}
	android::os::Bundle PlaybackMetrics::getMetricsBundle()
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	jlong PlaybackMetrics::getNetworkBytesRead()
	{
		return callMethod<jlong>(
			"getNetworkBytesRead",
			"()J"
		);
	}
	jlong PlaybackMetrics::getNetworkTransferDurationMillis()
	{
		return callMethod<jlong>(
			"getNetworkTransferDurationMillis",
			"()J"
		);
	}
	jint PlaybackMetrics::getPlaybackType()
	{
		return callMethod<jint>(
			"getPlaybackType",
			"()I"
		);
	}
	jstring PlaybackMetrics::getPlayerName()
	{
		return callObjectMethod(
			"getPlayerName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PlaybackMetrics::getPlayerVersion()
	{
		return callObjectMethod(
			"getPlayerVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PlaybackMetrics::getStreamSource()
	{
		return callMethod<jint>(
			"getStreamSource",
			"()I"
		);
	}
	jint PlaybackMetrics::getStreamType()
	{
		return callMethod<jint>(
			"getStreamType",
			"()I"
		);
	}
	jint PlaybackMetrics::getVideoFramesDropped()
	{
		return callMethod<jint>(
			"getVideoFramesDropped",
			"()I"
		);
	}
	jint PlaybackMetrics::getVideoFramesPlayed()
	{
		return callMethod<jint>(
			"getVideoFramesPlayed",
			"()I"
		);
	}
	jint PlaybackMetrics::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PlaybackMetrics::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PlaybackMetrics::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::metrics

