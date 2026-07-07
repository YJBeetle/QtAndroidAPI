#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pUsdBasedLocalServiceAdvertisementConfig.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline JObject WifiP2pUsdBasedLocalServiceAdvertisementConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pUsdBasedLocalServiceAdvertisementConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WifiP2pUsdBasedLocalServiceAdvertisementConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint WifiP2pUsdBasedLocalServiceAdvertisementConfig::getFrequencyMhz() const
	{
		return callMethod<jint>(
			"getFrequencyMhz",
			"()I"
		);
	}
	inline JString WifiP2pUsdBasedLocalServiceAdvertisementConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pUsdBasedLocalServiceAdvertisementConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
