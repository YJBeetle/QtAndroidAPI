#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./VideoProfile.hpp"

namespace android::telecom
{
	// Fields
	JObject VideoProfile::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.VideoProfile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint VideoProfile::QUALITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_DEFAULT"
		);
	}
	jint VideoProfile::QUALITY_HIGH()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_HIGH"
		);
	}
	jint VideoProfile::QUALITY_LOW()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_LOW"
		);
	}
	jint VideoProfile::QUALITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_MEDIUM"
		);
	}
	jint VideoProfile::STATE_AUDIO_ONLY()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_AUDIO_ONLY"
		);
	}
	jint VideoProfile::STATE_BIDIRECTIONAL()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_BIDIRECTIONAL"
		);
	}
	jint VideoProfile::STATE_PAUSED()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_PAUSED"
		);
	}
	jint VideoProfile::STATE_RX_ENABLED()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_RX_ENABLED"
		);
	}
	jint VideoProfile::STATE_TX_ENABLED()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_TX_ENABLED"
		);
	}
	
	// Constructors
	VideoProfile::VideoProfile(jint arg0)
		: JObject(
			"android.telecom.VideoProfile",
			"(I)V",
			arg0
		) {}
	VideoProfile::VideoProfile(jint arg0, jint arg1)
		: JObject(
			"android.telecom.VideoProfile",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean VideoProfile::isAudioOnly(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isAudioOnly",
			"(I)Z",
			arg0
		);
	}
	jboolean VideoProfile::isBidirectional(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isBidirectional",
			"(I)Z",
			arg0
		);
	}
	jboolean VideoProfile::isPaused(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isPaused",
			"(I)Z",
			arg0
		);
	}
	jboolean VideoProfile::isReceptionEnabled(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isReceptionEnabled",
			"(I)Z",
			arg0
		);
	}
	jboolean VideoProfile::isTransmissionEnabled(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isTransmissionEnabled",
			"(I)Z",
			arg0
		);
	}
	jboolean VideoProfile::isVideo(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isVideo",
			"(I)Z",
			arg0
		);
	}
	JString VideoProfile::videoStateToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.VideoProfile",
			"videoStateToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint VideoProfile::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint VideoProfile::getQuality() const
	{
		return callMethod<jint>(
			"getQuality",
			"()I"
		);
	}
	jint VideoProfile::getVideoState() const
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	JString VideoProfile::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void VideoProfile::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

