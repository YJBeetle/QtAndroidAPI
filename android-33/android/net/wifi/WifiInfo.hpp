#pragma once

#include "../MacAddress.def.hpp"
#include "../NetworkInfo_DetailedState.def.hpp"
#include "./SupplicantState.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./WifiInfo.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JString WifiInfo::FREQUENCY_UNITS()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"FREQUENCY_UNITS",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiInfo::LINK_SPEED_UNITS()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"LINK_SPEED_UNITS",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiInfo::LINK_SPEED_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"LINK_SPEED_UNKNOWN"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_DPP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_DPP"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_EAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_EAP"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_EAP_WPA3_ENTERPRISE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_EAP_WPA3_ENTERPRISE"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_EAP_WPA3_ENTERPRISE_192_BIT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_EAP_WPA3_ENTERPRISE_192_BIT"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_OPEN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_OPEN"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_OSEN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_OSEN"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_OWE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_OWE"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_PASSPOINT_R1_R2()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_PASSPOINT_R1_R2"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_PASSPOINT_R3()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_PASSPOINT_R3"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_PSK"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_SAE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_SAE"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_UNKNOWN"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_WAPI_CERT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_WAPI_CERT"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_WAPI_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_WAPI_PSK"
		);
	}
	inline jint WifiInfo::SECURITY_TYPE_WEP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_WEP"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::NetworkInfo_DetailedState WifiInfo::getDetailedStateOf(android::net::wifi::SupplicantState arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.WifiInfo",
			"getDetailedStateOf",
			"(Landroid/net/wifi/SupplicantState;)Landroid/net/NetworkInfo$DetailedState;",
			arg0.object()
		);
	}
	inline jint WifiInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject WifiInfo::getAffiliatedMloLinks() const
	{
		return callObjectMethod(
			"getAffiliatedMloLinks",
			"()Ljava/util/List;"
		);
	}
	inline android::net::MacAddress WifiInfo::getApMldMacAddress() const
	{
		return callObjectMethod(
			"getApMldMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	inline jint WifiInfo::getApMloLinkId() const
	{
		return callMethod<jint>(
			"getApMloLinkId",
			"()I"
		);
	}
	inline jlong WifiInfo::getApplicableRedactions() const
	{
		return callMethod<jlong>(
			"getApplicableRedactions",
			"()J"
		);
	}
	inline JString WifiInfo::getBSSID() const
	{
		return callObjectMethod(
			"getBSSID",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiInfo::getCurrentSecurityType() const
	{
		return callMethod<jint>(
			"getCurrentSecurityType",
			"()I"
		);
	}
	inline jint WifiInfo::getFrequency() const
	{
		return callMethod<jint>(
			"getFrequency",
			"()I"
		);
	}
	inline jboolean WifiInfo::getHiddenSSID() const
	{
		return callMethod<jboolean>(
			"getHiddenSSID",
			"()Z"
		);
	}
	inline JObject WifiInfo::getInformationElements() const
	{
		return callObjectMethod(
			"getInformationElements",
			"()Ljava/util/List;"
		);
	}
	inline jint WifiInfo::getIpAddress() const
	{
		return callMethod<jint>(
			"getIpAddress",
			"()I"
		);
	}
	inline jint WifiInfo::getLinkSpeed() const
	{
		return callMethod<jint>(
			"getLinkSpeed",
			"()I"
		);
	}
	inline JString WifiInfo::getMacAddress() const
	{
		return callObjectMethod(
			"getMacAddress",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiInfo::getMaxSupportedRxLinkSpeedMbps() const
	{
		return callMethod<jint>(
			"getMaxSupportedRxLinkSpeedMbps",
			"()I"
		);
	}
	inline jint WifiInfo::getMaxSupportedTxLinkSpeedMbps() const
	{
		return callMethod<jint>(
			"getMaxSupportedTxLinkSpeedMbps",
			"()I"
		);
	}
	inline jint WifiInfo::getNetworkId() const
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	inline JString WifiInfo::getPasspointFqdn() const
	{
		return callObjectMethod(
			"getPasspointFqdn",
			"()Ljava/lang/String;"
		);
	}
	inline JString WifiInfo::getPasspointProviderFriendlyName() const
	{
		return callObjectMethod(
			"getPasspointProviderFriendlyName",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiInfo::getRssi() const
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	inline jint WifiInfo::getRxLinkSpeedMbps() const
	{
		return callMethod<jint>(
			"getRxLinkSpeedMbps",
			"()I"
		);
	}
	inline JString WifiInfo::getSSID() const
	{
		return callObjectMethod(
			"getSSID",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiInfo::getSubscriptionId() const
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	inline android::net::wifi::SupplicantState WifiInfo::getSupplicantState() const
	{
		return callObjectMethod(
			"getSupplicantState",
			"()Landroid/net/wifi/SupplicantState;"
		);
	}
	inline jint WifiInfo::getTxLinkSpeedMbps() const
	{
		return callMethod<jint>(
			"getTxLinkSpeedMbps",
			"()I"
		);
	}
	inline jint WifiInfo::getWifiStandard() const
	{
		return callMethod<jint>(
			"getWifiStandard",
			"()I"
		);
	}
	inline jint WifiInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean WifiInfo::isRestricted() const
	{
		return callMethod<jboolean>(
			"isRestricted",
			"()Z"
		);
	}
	inline android::net::wifi::WifiInfo WifiInfo::makeCopy(jlong arg0) const
	{
		return callObjectMethod(
			"makeCopy",
			"(J)Landroid/net/wifi/WifiInfo;",
			arg0
		);
	}
	inline JString WifiInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
