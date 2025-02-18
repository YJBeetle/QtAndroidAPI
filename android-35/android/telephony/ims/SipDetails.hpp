#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SipDetails.def.hpp"

namespace android::telephony::ims
{
	// Fields
	inline JObject SipDetails::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.ims.SipDetails",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SipDetails::METHOD_PUBLISH()
	{
		return getStaticField<jint>(
			"android.telephony.ims.SipDetails",
			"METHOD_PUBLISH"
		);
	}
	inline jint SipDetails::METHOD_REGISTER()
	{
		return getStaticField<jint>(
			"android.telephony.ims.SipDetails",
			"METHOD_REGISTER"
		);
	}
	inline jint SipDetails::METHOD_SUBSCRIBE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.SipDetails",
			"METHOD_SUBSCRIBE"
		);
	}
	inline jint SipDetails::METHOD_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.ims.SipDetails",
			"METHOD_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SipDetails::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SipDetails::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SipDetails::getCSeq() const
	{
		return callMethod<jint>(
			"getCSeq",
			"()I"
		);
	}
	inline JString SipDetails::getCallId() const
	{
		return callObjectMethod(
			"getCallId",
			"()Ljava/lang/String;"
		);
	}
	inline jint SipDetails::getMethod() const
	{
		return callMethod<jint>(
			"getMethod",
			"()I"
		);
	}
	inline jint SipDetails::getReasonHeaderCause() const
	{
		return callMethod<jint>(
			"getReasonHeaderCause",
			"()I"
		);
	}
	inline JString SipDetails::getReasonHeaderText() const
	{
		return callObjectMethod(
			"getReasonHeaderText",
			"()Ljava/lang/String;"
		);
	}
	inline jint SipDetails::getResponseCode() const
	{
		return callMethod<jint>(
			"getResponseCode",
			"()I"
		);
	}
	inline JString SipDetails::getResponsePhrase() const
	{
		return callObjectMethod(
			"getResponsePhrase",
			"()Ljava/lang/String;"
		);
	}
	inline jint SipDetails::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SipDetails::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SipDetails::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::ims

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::ims;
#endif
