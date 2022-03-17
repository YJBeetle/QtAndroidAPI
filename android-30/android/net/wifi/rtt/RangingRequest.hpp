#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./RangingRequest.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	inline JObject RangingRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.RangingRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RangingRequest::getMaxPeers()
	{
		return callStaticMethod<jint>(
			"android.net.wifi.rtt.RangingRequest",
			"getMaxPeers",
			"()I"
		);
	}
	inline jint RangingRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RangingRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint RangingRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString RangingRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RangingRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::rtt;
#endif
