#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../util/Size.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MediaItemInfo.def.hpp"

namespace android::media::metrics
{
	// Fields
	inline JObject MediaItemInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.MediaItemInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jlong MediaItemInfo::DATA_TYPE_AUDIO()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaItemInfo",
			"DATA_TYPE_AUDIO"
		);
	}
	inline jlong MediaItemInfo::DATA_TYPE_DEPTH()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaItemInfo",
			"DATA_TYPE_DEPTH"
		);
	}
	inline jlong MediaItemInfo::DATA_TYPE_GAIN_MAP()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaItemInfo",
			"DATA_TYPE_GAIN_MAP"
		);
	}
	inline jlong MediaItemInfo::DATA_TYPE_GAPLESS()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaItemInfo",
			"DATA_TYPE_GAPLESS"
		);
	}
	inline jlong MediaItemInfo::DATA_TYPE_HIGH_DYNAMIC_RANGE_VIDEO()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaItemInfo",
			"DATA_TYPE_HIGH_DYNAMIC_RANGE_VIDEO"
		);
	}
	inline jlong MediaItemInfo::DATA_TYPE_HIGH_FRAME_RATE()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaItemInfo",
			"DATA_TYPE_HIGH_FRAME_RATE"
		);
	}
	inline jlong MediaItemInfo::DATA_TYPE_IMAGE()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaItemInfo",
			"DATA_TYPE_IMAGE"
		);
	}
	inline jlong MediaItemInfo::DATA_TYPE_METADATA()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaItemInfo",
			"DATA_TYPE_METADATA"
		);
	}
	inline jlong MediaItemInfo::DATA_TYPE_SPATIAL_AUDIO()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaItemInfo",
			"DATA_TYPE_SPATIAL_AUDIO"
		);
	}
	inline jlong MediaItemInfo::DATA_TYPE_SPEED_SETTING_CUE_POINTS()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaItemInfo",
			"DATA_TYPE_SPEED_SETTING_CUE_POINTS"
		);
	}
	inline jlong MediaItemInfo::DATA_TYPE_VIDEO()
	{
		return getStaticField<jlong>(
			"android.media.metrics.MediaItemInfo",
			"DATA_TYPE_VIDEO"
		);
	}
	inline jint MediaItemInfo::SOURCE_TYPE_CAMERA()
	{
		return getStaticField<jint>(
			"android.media.metrics.MediaItemInfo",
			"SOURCE_TYPE_CAMERA"
		);
	}
	inline jint MediaItemInfo::SOURCE_TYPE_EDITING_SESSION()
	{
		return getStaticField<jint>(
			"android.media.metrics.MediaItemInfo",
			"SOURCE_TYPE_EDITING_SESSION"
		);
	}
	inline jint MediaItemInfo::SOURCE_TYPE_GALLERY()
	{
		return getStaticField<jint>(
			"android.media.metrics.MediaItemInfo",
			"SOURCE_TYPE_GALLERY"
		);
	}
	inline jint MediaItemInfo::SOURCE_TYPE_GENERATED()
	{
		return getStaticField<jint>(
			"android.media.metrics.MediaItemInfo",
			"SOURCE_TYPE_GENERATED"
		);
	}
	inline jint MediaItemInfo::SOURCE_TYPE_LOCAL_FILE()
	{
		return getStaticField<jint>(
			"android.media.metrics.MediaItemInfo",
			"SOURCE_TYPE_LOCAL_FILE"
		);
	}
	inline jint MediaItemInfo::SOURCE_TYPE_REMOTE_FILE()
	{
		return getStaticField<jint>(
			"android.media.metrics.MediaItemInfo",
			"SOURCE_TYPE_REMOTE_FILE"
		);
	}
	inline jint MediaItemInfo::SOURCE_TYPE_REMOTE_LIVE_STREAM()
	{
		return getStaticField<jint>(
			"android.media.metrics.MediaItemInfo",
			"SOURCE_TYPE_REMOTE_LIVE_STREAM"
		);
	}
	inline jint MediaItemInfo::SOURCE_TYPE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.media.metrics.MediaItemInfo",
			"SOURCE_TYPE_UNSPECIFIED"
		);
	}
	inline jint MediaItemInfo::VALUE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.media.metrics.MediaItemInfo",
			"VALUE_UNSPECIFIED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MediaItemInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MediaItemInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MediaItemInfo::getAudioChannelCount() const
	{
		return callMethod<jint>(
			"getAudioChannelCount",
			"()I"
		);
	}
	inline jlong MediaItemInfo::getAudioSampleCount() const
	{
		return callMethod<jlong>(
			"getAudioSampleCount",
			"()J"
		);
	}
	inline jint MediaItemInfo::getAudioSampleRateHz() const
	{
		return callMethod<jint>(
			"getAudioSampleRateHz",
			"()I"
		);
	}
	inline jlong MediaItemInfo::getClipDurationMillis() const
	{
		return callMethod<jlong>(
			"getClipDurationMillis",
			"()J"
		);
	}
	inline JObject MediaItemInfo::getCodecNames() const
	{
		return callObjectMethod(
			"getCodecNames",
			"()Ljava/util/List;"
		);
	}
	inline JString MediaItemInfo::getContainerMimeType() const
	{
		return callObjectMethod(
			"getContainerMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline jlong MediaItemInfo::getDataTypes() const
	{
		return callMethod<jlong>(
			"getDataTypes",
			"()J"
		);
	}
	inline jlong MediaItemInfo::getDurationMillis() const
	{
		return callMethod<jlong>(
			"getDurationMillis",
			"()J"
		);
	}
	inline JObject MediaItemInfo::getSampleMimeTypes() const
	{
		return callObjectMethod(
			"getSampleMimeTypes",
			"()Ljava/util/List;"
		);
	}
	inline jint MediaItemInfo::getSourceType() const
	{
		return callMethod<jint>(
			"getSourceType",
			"()I"
		);
	}
	inline jint MediaItemInfo::getVideoDataSpace() const
	{
		return callMethod<jint>(
			"getVideoDataSpace",
			"()I"
		);
	}
	inline jfloat MediaItemInfo::getVideoFrameRate() const
	{
		return callMethod<jfloat>(
			"getVideoFrameRate",
			"()F"
		);
	}
	inline jlong MediaItemInfo::getVideoSampleCount() const
	{
		return callMethod<jlong>(
			"getVideoSampleCount",
			"()J"
		);
	}
	inline android::util::Size MediaItemInfo::getVideoSize() const
	{
		return callObjectMethod(
			"getVideoSize",
			"()Landroid/util/Size;"
		);
	}
	inline jint MediaItemInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MediaItemInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MediaItemInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
