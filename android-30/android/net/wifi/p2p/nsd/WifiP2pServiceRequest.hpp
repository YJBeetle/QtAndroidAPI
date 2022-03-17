#pragma once

#include "../../../../os/Parcel.def.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./WifiP2pServiceRequest.def.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::net::wifi::p2p::nsd::WifiP2pServiceRequest WifiP2pServiceRequest::newInstance(jint arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pServiceRequest",
			"newInstance",
			"(I)Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;",
			arg0
		);
	}
	inline android::net::wifi::p2p::nsd::WifiP2pServiceRequest WifiP2pServiceRequest::newInstance(jint arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pServiceRequest",
			"newInstance",
			"(ILjava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline jint WifiP2pServiceRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiP2pServiceRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint WifiP2pServiceRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void WifiP2pServiceRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

