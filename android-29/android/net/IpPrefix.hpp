#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/net/InetAddress.def.hpp"
#include "./IpPrefix.def.hpp"

namespace android::net
{
	// Fields
	inline JObject IpPrefix::CREATOR()
	{
		return getStaticObjectField(
			"android.net.IpPrefix",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean IpPrefix::contains(java::net::InetAddress arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/net/InetAddress;)Z",
			arg0.object()
		);
	}
	inline jint IpPrefix::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean IpPrefix::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::net::InetAddress IpPrefix::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jint IpPrefix::getPrefixLength() const
	{
		return callMethod<jint>(
			"getPrefixLength",
			"()I"
		);
	}
	inline JByteArray IpPrefix::getRawAddress() const
	{
		return callObjectMethod(
			"getRawAddress",
			"()[B"
		);
	}
	inline jint IpPrefix::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString IpPrefix::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void IpPrefix::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

