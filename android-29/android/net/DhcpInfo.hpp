#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./DhcpInfo.def.hpp"

namespace android::net
{
	// Fields
	inline jint DhcpInfo::dns1()
	{
		return getField<jint>(
			"dns1"
		);
	}
	inline jint DhcpInfo::dns2()
	{
		return getField<jint>(
			"dns2"
		);
	}
	inline jint DhcpInfo::gateway()
	{
		return getField<jint>(
			"gateway"
		);
	}
	inline jint DhcpInfo::ipAddress()
	{
		return getField<jint>(
			"ipAddress"
		);
	}
	inline jint DhcpInfo::leaseDuration()
	{
		return getField<jint>(
			"leaseDuration"
		);
	}
	inline jint DhcpInfo::netmask()
	{
		return getField<jint>(
			"netmask"
		);
	}
	inline jint DhcpInfo::serverAddress()
	{
		return getField<jint>(
			"serverAddress"
		);
	}
	
	// Constructors
	inline DhcpInfo::DhcpInfo()
		: JObject(
			"android.net.DhcpInfo",
			"()V"
		) {}
	
	// Methods
	inline jint DhcpInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString DhcpInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DhcpInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
