#pragma once

#include "../WpsInfo.def.hpp"
#include "./WifiP2pPairingBootstrappingConfig.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pConfig.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline JObject WifiP2pConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WifiP2pConfig::GROUP_CLIENT_IP_PROVISIONING_MODE_IPV4_DHCP()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_CLIENT_IP_PROVISIONING_MODE_IPV4_DHCP"
		);
	}
	inline jint WifiP2pConfig::GROUP_CLIENT_IP_PROVISIONING_MODE_IPV6_LINK_LOCAL()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_CLIENT_IP_PROVISIONING_MODE_IPV6_LINK_LOCAL"
		);
	}
	inline jint WifiP2pConfig::GROUP_OWNER_BAND_2GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_2GHZ"
		);
	}
	inline jint WifiP2pConfig::GROUP_OWNER_BAND_5GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_5GHZ"
		);
	}
	inline jint WifiP2pConfig::GROUP_OWNER_BAND_6GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_6GHZ"
		);
	}
	inline jint WifiP2pConfig::GROUP_OWNER_BAND_AUTO()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_AUTO"
		);
	}
	inline jint WifiP2pConfig::GROUP_OWNER_INTENT_AUTO()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_INTENT_AUTO"
		);
	}
	inline jint WifiP2pConfig::GROUP_OWNER_INTENT_MAX()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_INTENT_MAX"
		);
	}
	inline jint WifiP2pConfig::GROUP_OWNER_INTENT_MIN()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_INTENT_MIN"
		);
	}
	inline jint WifiP2pConfig::P2P_VERSION_1()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"P2P_VERSION_1"
		);
	}
	inline jint WifiP2pConfig::P2P_VERSION_2()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"P2P_VERSION_2"
		);
	}
	inline jint WifiP2pConfig::PCC_MODE_CONNECTION_TYPE_LEGACY_ONLY()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"PCC_MODE_CONNECTION_TYPE_LEGACY_ONLY"
		);
	}
	inline jint WifiP2pConfig::PCC_MODE_CONNECTION_TYPE_LEGACY_OR_R2()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"PCC_MODE_CONNECTION_TYPE_LEGACY_OR_R2"
		);
	}
	inline jint WifiP2pConfig::PCC_MODE_CONNECTION_TYPE_R2_ONLY()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"PCC_MODE_CONNECTION_TYPE_R2_ONLY"
		);
	}
	inline JString WifiP2pConfig::deviceAddress()
	{
		return getObjectField(
			"deviceAddress",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiP2pConfig::groupOwnerIntent()
	{
		return getField<jint>(
			"groupOwnerIntent"
		);
	}
	inline android::net::wifi::WpsInfo WifiP2pConfig::wps()
	{
		return getObjectField(
			"wps",
			"Landroid/net/wifi/WpsInfo;"
		);
	}
	
	// Constructors
	inline WifiP2pConfig::WifiP2pConfig()
		: JObject(
			"android.net.wifi.p2p.WifiP2pConfig",
			"()V"
		) {}
	inline WifiP2pConfig::WifiP2pConfig(android::net::wifi::p2p::WifiP2pConfig &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pConfig",
			"(Landroid/net/wifi/p2p/WifiP2pConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WifiP2pConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint WifiP2pConfig::getGroupClientIpProvisioningMode() const
	{
		return callMethod<jint>(
			"getGroupClientIpProvisioningMode",
			"()I"
		);
	}
	inline jint WifiP2pConfig::getGroupOwnerBand() const
	{
		return callMethod<jint>(
			"getGroupOwnerBand",
			"()I"
		);
	}
	inline jint WifiP2pConfig::getGroupOwnerVersion() const
	{
		return callMethod<jint>(
			"getGroupOwnerVersion",
			"()I"
		);
	}
	inline jint WifiP2pConfig::getNetworkId() const
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	inline JString WifiP2pConfig::getNetworkName() const
	{
		return callObjectMethod(
			"getNetworkName",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::wifi::p2p::WifiP2pPairingBootstrappingConfig WifiP2pConfig::getPairingBootstrappingConfig() const
	{
		return callObjectMethod(
			"getPairingBootstrappingConfig",
			"()Landroid/net/wifi/p2p/WifiP2pPairingBootstrappingConfig;"
		);
	}
	inline JString WifiP2pConfig::getPassphrase() const
	{
		return callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiP2pConfig::getPccModeConnectionType() const
	{
		return callMethod<jint>(
			"getPccModeConnectionType",
			"()I"
		);
	}
	inline jboolean WifiP2pConfig::isAuthorizeConnectionFromPeerEnabled() const
	{
		return callMethod<jboolean>(
			"isAuthorizeConnectionFromPeerEnabled",
			"()Z"
		);
	}
	inline void WifiP2pConfig::setGroupOwnerVersion(jint arg0) const
	{
		callMethod<void>(
			"setGroupOwnerVersion",
			"(I)V",
			arg0
		);
	}
	inline JString WifiP2pConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
