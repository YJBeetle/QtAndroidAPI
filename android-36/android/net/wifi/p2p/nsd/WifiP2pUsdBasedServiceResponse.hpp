#pragma once

#include "../../../../../JByteArray.hpp"
#include "../../../../os/Parcel.def.hpp"
#include "../../../../../JString.hpp"
#include "./WifiP2pUsdBasedServiceResponse.def.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	inline JObject WifiP2pUsdBasedServiceResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.nsd.WifiP2pUsdBasedServiceResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WifiP2pUsdBasedServiceResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint WifiP2pUsdBasedServiceResponse::getServiceProtocolType() const
	{
		return callMethod<jint>(
			"getServiceProtocolType",
			"()I"
		);
	}
	inline JByteArray WifiP2pUsdBasedServiceResponse::getServiceSpecificInfo() const
	{
		return callObjectMethod(
			"getServiceSpecificInfo",
			"()[B"
		);
	}
	inline JString WifiP2pUsdBasedServiceResponse::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pUsdBasedServiceResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
