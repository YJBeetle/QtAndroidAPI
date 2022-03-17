#pragma once

#include "../../os/Parcel.def.hpp"
#include "./MessagePdu.def.hpp"

namespace android::service::carrier
{
	// Fields
	inline JObject MessagePdu::CREATOR()
	{
		return getStaticObjectField(
			"android.service.carrier.MessagePdu",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline MessagePdu::MessagePdu(JObject arg0)
		: JObject(
			"android.service.carrier.MessagePdu",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint MessagePdu::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject MessagePdu::getPdus() const
	{
		return callObjectMethod(
			"getPdus",
			"()Ljava/util/List;"
		);
	}
	inline void MessagePdu::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::carrier

// Base class headers

