#pragma once

#include "../../NetworkSpecifier.def.hpp"
#include "./WifiAwareDataPathSecurityConfig.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./WifiAwareNetworkSpecifier.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JObject WifiAwareNetworkSpecifier::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareNetworkSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean WifiAwareNetworkSpecifier::canBeSatisfiedBy(android::net::NetworkSpecifier arg0) const
	{
		return callMethod<jboolean>(
			"canBeSatisfiedBy",
			"(Landroid/net/NetworkSpecifier;)Z",
			arg0.object()
		);
	}
	inline jint WifiAwareNetworkSpecifier::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiAwareNetworkSpecifier::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint WifiAwareNetworkSpecifier::getChannelFrequencyMhz() const
	{
		return callMethod<jint>(
			"getChannelFrequencyMhz",
			"()I"
		);
	}
	inline android::net::wifi::aware::WifiAwareDataPathSecurityConfig WifiAwareNetworkSpecifier::getWifiAwareDataPathSecurityConfig() const
	{
		return callObjectMethod(
			"getWifiAwareDataPathSecurityConfig",
			"()Landroid/net/wifi/aware/WifiAwareDataPathSecurityConfig;"
		);
	}
	inline jint WifiAwareNetworkSpecifier::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean WifiAwareNetworkSpecifier::isChannelRequired() const
	{
		return callMethod<jboolean>(
			"isChannelRequired",
			"()Z"
		);
	}
	inline JString WifiAwareNetworkSpecifier::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiAwareNetworkSpecifier::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

// Base class headers
#include "../../NetworkSpecifier.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
