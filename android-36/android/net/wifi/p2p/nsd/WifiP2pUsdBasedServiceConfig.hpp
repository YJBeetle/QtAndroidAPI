#pragma once

#include "../../../../../JByteArray.hpp"
#include "../../../../os/Parcel.def.hpp"
#include "../../../../../JString.hpp"
#include "./WifiP2pUsdBasedServiceConfig.def.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	inline JObject WifiP2pUsdBasedServiceConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.nsd.WifiP2pUsdBasedServiceConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WifiP2pUsdBasedServiceConfig::SERVICE_PROTOCOL_TYPE_BONJOUR()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pUsdBasedServiceConfig",
			"SERVICE_PROTOCOL_TYPE_BONJOUR"
		);
	}
	inline jint WifiP2pUsdBasedServiceConfig::SERVICE_PROTOCOL_TYPE_GENERIC()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pUsdBasedServiceConfig",
			"SERVICE_PROTOCOL_TYPE_GENERIC"
		);
	}
	
	// Constructors
	inline WifiP2pUsdBasedServiceConfig::WifiP2pUsdBasedServiceConfig()
		: JObject(
			"android.net.wifi.p2p.nsd.WifiP2pUsdBasedServiceConfig",
			"()V"
		) {}
	
	// Methods
	inline jint WifiP2pUsdBasedServiceConfig::getMaxAllowedServiceSpecificInfoLength()
	{
		return callStaticMethod<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pUsdBasedServiceConfig",
			"getMaxAllowedServiceSpecificInfoLength",
			"()I"
		);
	}
	inline jint WifiP2pUsdBasedServiceConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString WifiP2pUsdBasedServiceConfig::getServiceName() const
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiP2pUsdBasedServiceConfig::getServiceProtocolType() const
	{
		return callMethod<jint>(
			"getServiceProtocolType",
			"()I"
		);
	}
	inline JByteArray WifiP2pUsdBasedServiceConfig::getServiceSpecificInfo() const
	{
		return callObjectMethod(
			"getServiceSpecificInfo",
			"()[B"
		);
	}
	inline JString WifiP2pUsdBasedServiceConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pUsdBasedServiceConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
