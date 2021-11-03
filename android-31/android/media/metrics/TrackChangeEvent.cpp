#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TrackChangeEvent.hpp"

namespace android::media::metrics
{
	// Fields
	JObject TrackChangeEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.TrackChangeEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TrackChangeEvent::TRACK_CHANGE_REASON_ADAPTIVE()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_CHANGE_REASON_ADAPTIVE"
		);
	}
	jint TrackChangeEvent::TRACK_CHANGE_REASON_INITIAL()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_CHANGE_REASON_INITIAL"
		);
	}
	jint TrackChangeEvent::TRACK_CHANGE_REASON_MANUAL()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_CHANGE_REASON_MANUAL"
		);
	}
	jint TrackChangeEvent::TRACK_CHANGE_REASON_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_CHANGE_REASON_OTHER"
		);
	}
	jint TrackChangeEvent::TRACK_CHANGE_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_CHANGE_REASON_UNKNOWN"
		);
	}
	jint TrackChangeEvent::TRACK_STATE_OFF()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_STATE_OFF"
		);
	}
	jint TrackChangeEvent::TRACK_STATE_ON()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_STATE_ON"
		);
	}
	jint TrackChangeEvent::TRACK_TYPE_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_TYPE_AUDIO"
		);
	}
	jint TrackChangeEvent::TRACK_TYPE_TEXT()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_TYPE_TEXT"
		);
	}
	jint TrackChangeEvent::TRACK_TYPE_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.metrics.TrackChangeEvent",
			"TRACK_TYPE_VIDEO"
		);
	}
	
	// QJniObject forward
	TrackChangeEvent::TrackChangeEvent(QJniObject obj) : android::media::metrics::Event(obj) {}
	
	// Constructors
	
	// Methods
	jint TrackChangeEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TrackChangeEvent::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint TrackChangeEvent::getAudioSampleRate()
	{
		return callMethod<jint>(
			"getAudioSampleRate",
			"()I"
		);
	}
	jint TrackChangeEvent::getBitrate()
	{
		return callMethod<jint>(
			"getBitrate",
			"()I"
		);
	}
	jint TrackChangeEvent::getChannelCount()
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	JString TrackChangeEvent::getCodecName()
	{
		return callObjectMethod(
			"getCodecName",
			"()Ljava/lang/String;"
		);
	}
	JString TrackChangeEvent::getContainerMimeType()
	{
		return callObjectMethod(
			"getContainerMimeType",
			"()Ljava/lang/String;"
		);
	}
	jint TrackChangeEvent::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JString TrackChangeEvent::getLanguage()
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	JString TrackChangeEvent::getLanguageRegion()
	{
		return callObjectMethod(
			"getLanguageRegion",
			"()Ljava/lang/String;"
		);
	}
	android::os::Bundle TrackChangeEvent::getMetricsBundle()
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	JString TrackChangeEvent::getSampleMimeType()
	{
		return callObjectMethod(
			"getSampleMimeType",
			"()Ljava/lang/String;"
		);
	}
	jlong TrackChangeEvent::getTimeSinceCreatedMillis()
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
	jint TrackChangeEvent::getTrackChangeReason()
	{
		return callMethod<jint>(
			"getTrackChangeReason",
			"()I"
		);
	}
	jint TrackChangeEvent::getTrackState()
	{
		return callMethod<jint>(
			"getTrackState",
			"()I"
		);
	}
	jint TrackChangeEvent::getTrackType()
	{
		return callMethod<jint>(
			"getTrackType",
			"()I"
		);
	}
	jfloat TrackChangeEvent::getVideoFrameRate()
	{
		return callMethod<jfloat>(
			"getVideoFrameRate",
			"()F"
		);
	}
	jint TrackChangeEvent::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint TrackChangeEvent::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString TrackChangeEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TrackChangeEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::metrics

