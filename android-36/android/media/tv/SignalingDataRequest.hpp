#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SignalingDataRequest.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject SignalingDataRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SignalingDataRequest::SIGNALING_DATA_NO_GROUP_ID()
	{
		return getStaticField<jint>(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_DATA_NO_GROUP_ID"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_AEAT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_AEAT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_AEI()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_AEI",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_APD()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_APD",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_ASD()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_ASD",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_ASPD()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_ASPD",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_CAD()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_CAD",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_CDT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_CDT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_CRIT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_CRIT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_DCIT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_DCIT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_DWD()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_DWD",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_EMSG()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_EMSG",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_EVTI()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_EVTI",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_HELD()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_HELD",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_IED()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_IED",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_MPD()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_MPD",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_MPIT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_MPIT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_MPT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_MPT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_OSN()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_OSN",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_PAT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_PAT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_RDT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_RDT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_RRT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_RRT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_RSAT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_RSAT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_SLT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_SLT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_SMT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_SMT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_SSD()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_SSD",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_STSID()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_STSID",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_STT()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_STT",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_USBD()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_USBD",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_USD()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_USD",
			"Ljava/lang/String;"
		);
	}
	inline JString SignalingDataRequest::SIGNALING_METADATA_VSPD()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataRequest",
			"SIGNALING_METADATA_VSPD",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline SignalingDataRequest::SignalingDataRequest(jint arg0, jint arg1, jint arg2, JObject arg3)
		: android::media::tv::BroadcastInfoRequest(
			"android.media.tv.SignalingDataRequest",
			"(IIILjava/util/List;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	inline jint SignalingDataRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint SignalingDataRequest::getGroup() const
	{
		return callMethod<jint>(
			"getGroup",
			"()I"
		);
	}
	inline JObject SignalingDataRequest::getSignalingDataTypes() const
	{
		return callObjectMethod(
			"getSignalingDataTypes",
			"()Ljava/util/List;"
		);
	}
	inline void SignalingDataRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

// Base class headers
#include "./BroadcastInfoRequest.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
