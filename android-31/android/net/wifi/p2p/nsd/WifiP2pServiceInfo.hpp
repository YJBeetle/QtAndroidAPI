#pragma once

#include "../../../../os/Parcel.def.hpp"
#include "../../../../../JObject.hpp"
#include "./WifiP2pServiceInfo.def.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	inline jint WifiP2pServiceInfo::SERVICE_TYPE_ALL()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_ALL"
		);
	}
	inline jint WifiP2pServiceInfo::SERVICE_TYPE_BONJOUR()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_BONJOUR"
		);
	}
	inline jint WifiP2pServiceInfo::SERVICE_TYPE_UPNP()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_UPNP"
		);
	}
	inline jint WifiP2pServiceInfo::SERVICE_TYPE_VENDOR_SPECIFIC()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_VENDOR_SPECIFIC"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WifiP2pServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiP2pServiceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint WifiP2pServiceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void WifiP2pServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p::nsd

// Base class headers

