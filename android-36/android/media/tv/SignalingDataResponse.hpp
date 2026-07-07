#pragma once

#include "../../os/Parcel.def.hpp"
#include "./SignalingDataResponse.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject SignalingDataResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.SignalingDataResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SignalingDataResponse::SignalingDataResponse(jint arg0, jint arg1, jint arg2, JObject arg3, JObject arg4)
		: android::media::tv::BroadcastInfoResponse(
			"android.media.tv.SignalingDataResponse",
			"(IIILjava/util/List;Ljava/util/List;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		) {}
	
	// Methods
	inline jint SignalingDataResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject SignalingDataResponse::getSignalingDataInfoList() const
	{
		return callObjectMethod(
			"getSignalingDataInfoList",
			"()Ljava/util/List;"
		);
	}
	inline JObject SignalingDataResponse::getSignalingDataTypes() const
	{
		return callObjectMethod(
			"getSignalingDataTypes",
			"()Ljava/util/List;"
		);
	}
	inline void SignalingDataResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./BroadcastInfoResponse.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
