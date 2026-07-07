#pragma once

#include "../../../../JIntArray.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pUsdBasedServiceDiscoveryConfig.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline JObject WifiP2pUsdBasedServiceDiscoveryConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pUsdBasedServiceDiscoveryConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WifiP2pUsdBasedServiceDiscoveryConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint WifiP2pUsdBasedServiceDiscoveryConfig::getBand() const
	{
		return callMethod<jint>(
			"getBand",
			"()I"
		);
	}
	inline JIntArray WifiP2pUsdBasedServiceDiscoveryConfig::getFrequenciesMhz() const
	{
		return callObjectMethod(
			"getFrequenciesMhz",
			"()[I"
		);
	}
	inline JString WifiP2pUsdBasedServiceDiscoveryConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pUsdBasedServiceDiscoveryConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p;
#endif
