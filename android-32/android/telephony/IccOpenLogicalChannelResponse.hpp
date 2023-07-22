#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./IccOpenLogicalChannelResponse.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject IccOpenLogicalChannelResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.IccOpenLogicalChannelResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint IccOpenLogicalChannelResponse::INVALID_CHANNEL()
	{
		return getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"INVALID_CHANNEL"
		);
	}
	inline jint IccOpenLogicalChannelResponse::STATUS_MISSING_RESOURCE()
	{
		return getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_MISSING_RESOURCE"
		);
	}
	inline jint IccOpenLogicalChannelResponse::STATUS_NO_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_NO_ERROR"
		);
	}
	inline jint IccOpenLogicalChannelResponse::STATUS_NO_SUCH_ELEMENT()
	{
		return getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_NO_SUCH_ELEMENT"
		);
	}
	inline jint IccOpenLogicalChannelResponse::STATUS_UNKNOWN_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_UNKNOWN_ERROR"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint IccOpenLogicalChannelResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint IccOpenLogicalChannelResponse::getChannel() const
	{
		return callMethod<jint>(
			"getChannel",
			"()I"
		);
	}
	inline JByteArray IccOpenLogicalChannelResponse::getSelectResponse() const
	{
		return callObjectMethod(
			"getSelectResponse",
			"()[B"
		);
	}
	inline jint IccOpenLogicalChannelResponse::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	inline JString IccOpenLogicalChannelResponse::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void IccOpenLogicalChannelResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
