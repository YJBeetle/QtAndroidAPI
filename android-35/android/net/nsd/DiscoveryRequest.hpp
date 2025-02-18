#pragma once

#include "../Network.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DiscoveryRequest.def.hpp"

namespace android::net::nsd
{
	// Fields
	inline JObject DiscoveryRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.net.nsd.DiscoveryRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DiscoveryRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DiscoveryRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::Network DiscoveryRequest::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	inline JString DiscoveryRequest::getServiceType() const
	{
		return callObjectMethod(
			"getServiceType",
			"()Ljava/lang/String;"
		);
	}
	inline JString DiscoveryRequest::getSubtype() const
	{
		return callObjectMethod(
			"getSubtype",
			"()Ljava/lang/String;"
		);
	}
	inline jint DiscoveryRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DiscoveryRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DiscoveryRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::nsd

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::nsd;
#endif
