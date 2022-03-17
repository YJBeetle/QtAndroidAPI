#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TrafficDescriptor.def.hpp"

namespace android::telephony::data
{
	// Fields
	inline JObject TrafficDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.TrafficDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TrafficDescriptor::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TrafficDescriptor::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString TrafficDescriptor::getDataNetworkName() const
	{
		return callObjectMethod(
			"getDataNetworkName",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray TrafficDescriptor::getOsAppId() const
	{
		return callObjectMethod(
			"getOsAppId",
			"()[B"
		);
	}
	inline jint TrafficDescriptor::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString TrafficDescriptor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TrafficDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

// Base class headers

