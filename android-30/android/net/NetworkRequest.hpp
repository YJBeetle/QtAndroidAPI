#pragma once

#include "./NetworkCapabilities.def.hpp"
#include "./NetworkSpecifier.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NetworkRequest.def.hpp"

namespace android::net
{
	// Fields
	inline JObject NetworkRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.net.NetworkRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean NetworkRequest::canBeSatisfiedBy(android::net::NetworkCapabilities arg0) const
	{
		return callMethod<jboolean>(
			"canBeSatisfiedBy",
			"(Landroid/net/NetworkCapabilities;)Z",
			arg0.object()
		);
	}
	inline jint NetworkRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean NetworkRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::NetworkSpecifier NetworkRequest::getNetworkSpecifier() const
	{
		return callObjectMethod(
			"getNetworkSpecifier",
			"()Landroid/net/NetworkSpecifier;"
		);
	}
	inline jboolean NetworkRequest::hasCapability(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasCapability",
			"(I)Z",
			arg0
		);
	}
	inline jboolean NetworkRequest::hasTransport(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasTransport",
			"(I)Z",
			arg0
		);
	}
	inline jint NetworkRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString NetworkRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NetworkRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

