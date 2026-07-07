#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./CommandResponse.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject CommandResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.CommandResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString CommandResponse::RESPONSE_TYPE_JSON()
	{
		return getStaticObjectField(
			"android.media.tv.CommandResponse",
			"RESPONSE_TYPE_JSON",
			"Ljava/lang/String;"
		);
	}
	inline JString CommandResponse::RESPONSE_TYPE_XML()
	{
		return getStaticObjectField(
			"android.media.tv.CommandResponse",
			"RESPONSE_TYPE_XML",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline CommandResponse::CommandResponse(jint arg0, jint arg1, jint arg2, JString arg3, JString arg4)
		: android::media::tv::BroadcastInfoResponse(
			"android.media.tv.CommandResponse",
			"(IIILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jstring>(),
			arg4.object<jstring>()
		) {}
	
	// Methods
	inline jint CommandResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString CommandResponse::getResponse() const
	{
		return callObjectMethod(
			"getResponse",
			"()Ljava/lang/String;"
		);
	}
	inline JString CommandResponse::getResponseType() const
	{
		return callObjectMethod(
			"getResponseType",
			"()Ljava/lang/String;"
		);
	}
	inline void CommandResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
