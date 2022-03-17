#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TrackChangeEvent.def.hpp"

namespace android::media::metrics
{
	// Fields
	inline JObject TrackChangeEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.TrackChangeEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TrackChangeEvent::TRACK_CHANGE_REASON_ADAPTIVE()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_CHANGE_REASON_ADAPTIVE"
		);
	}
	inline jint TrackChangeEvent::TRACK_CHANGE_REASON_INITIAL()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_CHANGE_REASON_INITIAL"
		);
	}
	inline jint TrackChangeEvent::TRACK_CHANGE_REASON_MANUAL()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_CHANGE_REASON_MANUAL"
		);
	}
	inline jint TrackChangeEvent::TRACK_CHANGE_REASON_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_CHANGE_REASON_OTHER"
		);
	}
	inline jint TrackChangeEvent::TRACK_CHANGE_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_CHANGE_REASON_UNKNOWN"
		);
	}
	inline jint TrackChangeEvent::TRACK_STATE_OFF()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_STATE_OFF"
		);
	}
	inline jint TrackChangeEvent::TRACK_STATE_ON()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_STATE_ON"
		);
	}
	inline jint TrackChangeEvent::TRACK_TYPE_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_TYPE_AUDIO"
		);
	}
	inline jint TrackChangeEvent::TRACK_TYPE_TEXT()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_TYPE_TEXT"
		);
	}
	inline jint TrackChangeEvent::TRACK_TYPE_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_TYPE_VIDEO"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TrackChangeEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TrackChangeEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint TrackChangeEvent::getAudioSampleRate() const
	{
		return callMethod<jint>(
			"getAudioSampleRate",
			"()I"
		);
	}
	inline jint TrackChangeEvent::getBitrate() const
	{
		return callMethod<jint>(
			"getBitrate",
			"()I"
		);
	}
	inline jint TrackChangeEvent::getChannelCount() const
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	inline JString TrackChangeEvent::getCodecName() const
	{
		return callObjectMethod(
			"getCodecName",
			"()Ljava/lang/String;"
		);
	}
	inline JString TrackChangeEvent::getContainerMimeType() const
	{
		return callObjectMethod(
			"getContainerMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline jint TrackChangeEvent::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline JString TrackChangeEvent::getLanguage() const
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	inline JString TrackChangeEvent::getLanguageRegion() const
	{
		return callObjectMethod(
			"getLanguageRegion",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::Bundle TrackChangeEvent::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString TrackChangeEvent::getSampleMimeType() const
	{
		return callObjectMethod(
			"getSampleMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline jlong TrackChangeEvent::getTimeSinceCreatedMillis() const
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
	inline jint TrackChangeEvent::getTrackChangeReason() const
	{
		return callMethod<jint>(
			"getTrackChangeReason",
			"()I"
		);
	}
	inline jint TrackChangeEvent::getTrackState() const
	{
		return callMethod<jint>(
			"getTrackState",
			"()I"
		);
	}
	inline jint TrackChangeEvent::getTrackType() const
	{
		return callMethod<jint>(
			"getTrackType",
			"()I"
		);
	}
	inline jfloat TrackChangeEvent::getVideoFrameRate() const
	{
		return callMethod<jfloat>(
			"getVideoFrameRate",
			"()F"
		);
	}
	inline jint TrackChangeEvent::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jint TrackChangeEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString TrackChangeEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TrackChangeEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./Event.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
