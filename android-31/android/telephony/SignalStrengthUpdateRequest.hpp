#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SignalStrengthUpdateRequest.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject SignalStrengthUpdateRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.SignalStrengthUpdateRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SignalStrengthUpdateRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SignalStrengthUpdateRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject SignalStrengthUpdateRequest::getSignalThresholdInfos() const
	{
		return callObjectMethod(
			"getSignalThresholdInfos",
			"()Ljava/util/Collection;"
		);
	}
	inline jint SignalStrengthUpdateRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean SignalStrengthUpdateRequest::isReportingRequestedWhileIdle() const
	{
		return callMethod<jboolean>(
			"isReportingRequestedWhileIdle",
			"()Z"
		);
	}
	inline JString SignalStrengthUpdateRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SignalStrengthUpdateRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

