#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./VideoProfile.def.hpp"

namespace android::telecom
{
	// Fields
	inline JObject VideoProfile::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.VideoProfile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint VideoProfile::QUALITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_DEFAULT"
		);
	}
	inline jint VideoProfile::QUALITY_HIGH()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_HIGH"
		);
	}
	inline jint VideoProfile::QUALITY_LOW()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_LOW"
		);
	}
	inline jint VideoProfile::QUALITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_MEDIUM"
		);
	}
	inline jint VideoProfile::STATE_AUDIO_ONLY()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_AUDIO_ONLY"
		);
	}
	inline jint VideoProfile::STATE_BIDIRECTIONAL()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_BIDIRECTIONAL"
		);
	}
	inline jint VideoProfile::STATE_PAUSED()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_PAUSED"
		);
	}
	inline jint VideoProfile::STATE_RX_ENABLED()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_RX_ENABLED"
		);
	}
	inline jint VideoProfile::STATE_TX_ENABLED()
	{
		return getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_TX_ENABLED"
		);
	}
	
	// Constructors
	inline VideoProfile::VideoProfile(jint arg0)
		: JObject(
			"android.telecom.VideoProfile",
			"(I)V",
			arg0
		) {}
	inline VideoProfile::VideoProfile(jint arg0, jint arg1)
		: JObject(
			"android.telecom.VideoProfile",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean VideoProfile::isAudioOnly(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isAudioOnly",
			"(I)Z",
			arg0
		);
	}
	inline jboolean VideoProfile::isBidirectional(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isBidirectional",
			"(I)Z",
			arg0
		);
	}
	inline jboolean VideoProfile::isPaused(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isPaused",
			"(I)Z",
			arg0
		);
	}
	inline jboolean VideoProfile::isReceptionEnabled(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isReceptionEnabled",
			"(I)Z",
			arg0
		);
	}
	inline jboolean VideoProfile::isTransmissionEnabled(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isTransmissionEnabled",
			"(I)Z",
			arg0
		);
	}
	inline jboolean VideoProfile::isVideo(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isVideo",
			"(I)Z",
			arg0
		);
	}
	inline JString VideoProfile::videoStateToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.VideoProfile",
			"videoStateToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint VideoProfile::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint VideoProfile::getQuality() const
	{
		return callMethod<jint>(
			"getQuality",
			"()I"
		);
	}
	inline jint VideoProfile::getVideoState() const
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	inline JString VideoProfile::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void VideoProfile::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

// Base class headers

