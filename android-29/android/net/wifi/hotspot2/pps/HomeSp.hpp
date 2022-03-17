#pragma once

#include "../../../../../JLongArray.hpp"
#include "../../../../os/Parcel.def.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./HomeSp.def.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	inline JObject HomeSp::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.hotspot2.pps.HomeSp",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline HomeSp::HomeSp()
		: JObject(
			"android.net.wifi.hotspot2.pps.HomeSp",
			"()V"
		) {}
	inline HomeSp::HomeSp(android::net::wifi::hotspot2::pps::HomeSp &arg0)
		: JObject(
			"android.net.wifi.hotspot2.pps.HomeSp",
			"(Landroid/net/wifi/hotspot2/pps/HomeSp;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint HomeSp::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean HomeSp::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString HomeSp::getFqdn() const
	{
		return callObjectMethod(
			"getFqdn",
			"()Ljava/lang/String;"
		);
	}
	inline JString HomeSp::getFriendlyName() const
	{
		return callObjectMethod(
			"getFriendlyName",
			"()Ljava/lang/String;"
		);
	}
	inline JLongArray HomeSp::getRoamingConsortiumOis() const
	{
		return callObjectMethod(
			"getRoamingConsortiumOis",
			"()[J"
		);
	}
	inline jint HomeSp::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void HomeSp::setFqdn(JString arg0) const
	{
		callMethod<void>(
			"setFqdn",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void HomeSp::setFriendlyName(JString arg0) const
	{
		callMethod<void>(
			"setFriendlyName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void HomeSp::setRoamingConsortiumOis(JLongArray arg0) const
	{
		callMethod<void>(
			"setRoamingConsortiumOis",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	inline JString HomeSp::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void HomeSp::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

// Base class headers

