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
	
	// QAndroidJniObject forward
	TrackChangeEvent::TrackChangeEvent(QAndroidJniObject obj) : android::media::metrics::Event(obj) {}
	
	// Constructors
	
	// Methods
	jint TrackChangeEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TrackChangeEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint TrackChangeEvent::getAudioSampleRate() const
	{
		return callMethod<jint>(
			"getAudioSampleRate",
			"()I"
		);
	}
	jint TrackChangeEvent::getBitrate() const
	{
		return callMethod<jint>(
			"getBitrate",
			"()I"
		);
	}
	jint TrackChangeEvent::getChannelCount() const
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	JString TrackChangeEvent::getCodecName() const
	{
		return callObjectMethod(
			"getCodecName",
			"()Ljava/lang/String;"
		);
	}
	JString TrackChangeEvent::getContainerMimeType() const
	{
		return callObjectMethod(
			"getContainerMimeType",
			"()Ljava/lang/String;"
		);
	}
	jint TrackChangeEvent::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JString TrackChangeEvent::getLanguage() const
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	JString TrackChangeEvent::getLanguageRegion() const
	{
		return callObjectMethod(
			"getLanguageRegion",
			"()Ljava/lang/String;"
		);
	}
	android::os::Bundle TrackChangeEvent::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	JString TrackChangeEvent::getSampleMimeType() const
	{
		return callObjectMethod(
			"getSampleMimeType",
			"()Ljava/lang/String;"
		);
	}
	jlong TrackChangeEvent::getTimeSinceCreatedMillis() const
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
	jint TrackChangeEvent::getTrackChangeReason() const
	{
		return callMethod<jint>(
			"getTrackChangeReason",
			"()I"
		);
	}
	jint TrackChangeEvent::getTrackState() const
	{
		return callMethod<jint>(
			"getTrackState",
			"()I"
		);
	}
	jint TrackChangeEvent::getTrackType() const
	{
		return callMethod<jint>(
			"getTrackType",
			"()I"
		);
	}
	jfloat TrackChangeEvent::getVideoFrameRate() const
	{
		return callMethod<jfloat>(
			"getVideoFrameRate",
			"()F"
		);
	}
	jint TrackChangeEvent::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint TrackChangeEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString TrackChangeEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TrackChangeEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::metrics

