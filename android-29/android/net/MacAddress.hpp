#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MacAddress.def.hpp"

namespace android::net
{
	// Fields
	inline android::net::MacAddress MacAddress::BROADCAST_ADDRESS()
	{
		return getStaticObjectField(
			"android.net.MacAddress",
			"BROADCAST_ADDRESS",
			"Landroid/net/MacAddress;"
		);
	}
	inline JObject MacAddress::CREATOR()
	{
		return getStaticObjectField(
			"android.net.MacAddress",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint MacAddress::TYPE_BROADCAST()
	{
		return getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_BROADCAST"
		);
	}
	inline jint MacAddress::TYPE_MULTICAST()
	{
		return getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_MULTICAST"
		);
	}
	inline jint MacAddress::TYPE_UNICAST()
	{
		return getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_UNICAST"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::MacAddress MacAddress::fromBytes(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"android.net.MacAddress",
			"fromBytes",
			"([B)Landroid/net/MacAddress;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::MacAddress MacAddress::fromString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.MacAddress",
			"fromString",
			"(Ljava/lang/String;)Landroid/net/MacAddress;",
			arg0.object<jstring>()
		);
	}
	inline jint MacAddress::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MacAddress::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MacAddress::getAddressType() const
	{
		return callMethod<jint>(
			"getAddressType",
			"()I"
		);
	}
	inline jint MacAddress::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean MacAddress::isLocallyAssigned() const
	{
		return callMethod<jboolean>(
			"isLocallyAssigned",
			"()Z"
		);
	}
	inline JByteArray MacAddress::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	inline JString MacAddress::toOuiString() const
	{
		return callObjectMethod(
			"toOuiString",
			"()Ljava/lang/String;"
		);
	}
	inline JString MacAddress::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MacAddress::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

