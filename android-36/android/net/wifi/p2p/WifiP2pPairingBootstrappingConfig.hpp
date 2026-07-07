#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pPairingBootstrappingConfig.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline JObject WifiP2pPairingBootstrappingConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pPairingBootstrappingConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WifiP2pPairingBootstrappingConfig::PAIRING_BOOTSTRAPPING_METHOD_DISPLAY_PASSPHRASE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pPairingBootstrappingConfig",
			"PAIRING_BOOTSTRAPPING_METHOD_DISPLAY_PASSPHRASE"
		);
	}
	inline jint WifiP2pPairingBootstrappingConfig::PAIRING_BOOTSTRAPPING_METHOD_DISPLAY_PINCODE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pPairingBootstrappingConfig",
			"PAIRING_BOOTSTRAPPING_METHOD_DISPLAY_PINCODE"
		);
	}
	inline jint WifiP2pPairingBootstrappingConfig::PAIRING_BOOTSTRAPPING_METHOD_KEYPAD_PASSPHRASE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pPairingBootstrappingConfig",
			"PAIRING_BOOTSTRAPPING_METHOD_KEYPAD_PASSPHRASE"
		);
	}
	inline jint WifiP2pPairingBootstrappingConfig::PAIRING_BOOTSTRAPPING_METHOD_KEYPAD_PINCODE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pPairingBootstrappingConfig",
			"PAIRING_BOOTSTRAPPING_METHOD_KEYPAD_PINCODE"
		);
	}
	inline jint WifiP2pPairingBootstrappingConfig::PAIRING_BOOTSTRAPPING_METHOD_OPPORTUNISTIC()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pPairingBootstrappingConfig",
			"PAIRING_BOOTSTRAPPING_METHOD_OPPORTUNISTIC"
		);
	}
	inline jint WifiP2pPairingBootstrappingConfig::PAIRING_BOOTSTRAPPING_METHOD_OUT_OF_BAND()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pPairingBootstrappingConfig",
			"PAIRING_BOOTSTRAPPING_METHOD_OUT_OF_BAND"
		);
	}
	
	// Constructors
	inline WifiP2pPairingBootstrappingConfig::WifiP2pPairingBootstrappingConfig(jint arg0, JString arg1)
		: JObject(
			"android.net.wifi.p2p.WifiP2pPairingBootstrappingConfig",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint WifiP2pPairingBootstrappingConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString WifiP2pPairingBootstrappingConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pPairingBootstrappingConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
