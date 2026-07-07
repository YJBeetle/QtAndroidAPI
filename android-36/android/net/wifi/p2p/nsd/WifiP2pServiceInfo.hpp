#pragma once

#include "./WifiP2pUsdBasedServiceConfig.def.hpp"
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
	inline WifiP2pServiceInfo::WifiP2pServiceInfo(android::net::wifi::p2p::nsd::WifiP2pUsdBasedServiceConfig arg0)
		: JObject(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"(Landroid/net/wifi/p2p/nsd/WifiP2pUsdBasedServiceConfig;)V",
			arg0.object()
		) {}
	
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
	inline android::net::wifi::p2p::nsd::WifiP2pUsdBasedServiceConfig WifiP2pServiceInfo::getWifiP2pUsdBasedServiceConfig() const
	{
		return callObjectMethod(
			"getWifiP2pUsdBasedServiceConfig",
			"()Landroid/net/wifi/p2p/nsd/WifiP2pUsdBasedServiceConfig;"
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p::nsd;
#endif
