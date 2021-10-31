#include "../NetworkInfo_DetailedState.hpp"
#include "./SupplicantState.hpp"
#include "../../os/Parcel.hpp"
#include "./WifiInfo.hpp"

namespace android::net::wifi
{
	// Fields
	jstring WifiInfo::FREQUENCY_UNITS()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"FREQUENCY_UNITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiInfo::LINK_SPEED_UNITS()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"LINK_SPEED_UNITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiInfo::LINK_SPEED_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"LINK_SPEED_UNKNOWN"
		);
	}
	jint WifiInfo::SECURITY_TYPE_EAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_EAP"
		);
	}
	jint WifiInfo::SECURITY_TYPE_EAP_WPA3_ENTERPRISE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_EAP_WPA3_ENTERPRISE"
		);
	}
	jint WifiInfo::SECURITY_TYPE_EAP_WPA3_ENTERPRISE_192_BIT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_EAP_WPA3_ENTERPRISE_192_BIT"
		);
	}
	jint WifiInfo::SECURITY_TYPE_OPEN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_OPEN"
		);
	}
	jint WifiInfo::SECURITY_TYPE_OSEN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_OSEN"
		);
	}
	jint WifiInfo::SECURITY_TYPE_OWE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_OWE"
		);
	}
	jint WifiInfo::SECURITY_TYPE_PASSPOINT_R1_R2()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_PASSPOINT_R1_R2"
		);
	}
	jint WifiInfo::SECURITY_TYPE_PASSPOINT_R3()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_PASSPOINT_R3"
		);
	}
	jint WifiInfo::SECURITY_TYPE_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_PSK"
		);
	}
	jint WifiInfo::SECURITY_TYPE_SAE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_SAE"
		);
	}
	jint WifiInfo::SECURITY_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_UNKNOWN"
		);
	}
	jint WifiInfo::SECURITY_TYPE_WAPI_CERT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_WAPI_CERT"
		);
	}
	jint WifiInfo::SECURITY_TYPE_WAPI_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_WAPI_PSK"
		);
	}
	jint WifiInfo::SECURITY_TYPE_WEP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"SECURITY_TYPE_WEP"
		);
	}
	
	// QAndroidJniObject forward
	WifiInfo::WifiInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::net::NetworkInfo_DetailedState WifiInfo::getDetailedStateOf(android::net::wifi::SupplicantState arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.WifiInfo",
			"getDetailedStateOf",
			"(Landroid/net/wifi/SupplicantState;)Landroid/net/NetworkInfo$DetailedState;",
			arg0.object()
		);
	}
	jint WifiInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong WifiInfo::getApplicableRedactions()
	{
		return callMethod<jlong>(
			"getApplicableRedactions",
			"()J"
		);
	}
	jstring WifiInfo::getBSSID()
	{
		return callObjectMethod(
			"getBSSID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiInfo::getCurrentSecurityType()
	{
		return callMethod<jint>(
			"getCurrentSecurityType",
			"()I"
		);
	}
	jint WifiInfo::getFrequency()
	{
		return callMethod<jint>(
			"getFrequency",
			"()I"
		);
	}
	jboolean WifiInfo::getHiddenSSID()
	{
		return callMethod<jboolean>(
			"getHiddenSSID",
			"()Z"
		);
	}
	__JniBaseClass WifiInfo::getInformationElements()
	{
		return callObjectMethod(
			"getInformationElements",
			"()Ljava/util/List;"
		);
	}
	jint WifiInfo::getIpAddress()
	{
		return callMethod<jint>(
			"getIpAddress",
			"()I"
		);
	}
	jint WifiInfo::getLinkSpeed()
	{
		return callMethod<jint>(
			"getLinkSpeed",
			"()I"
		);
	}
	jstring WifiInfo::getMacAddress()
	{
		return callObjectMethod(
			"getMacAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiInfo::getMaxSupportedRxLinkSpeedMbps()
	{
		return callMethod<jint>(
			"getMaxSupportedRxLinkSpeedMbps",
			"()I"
		);
	}
	jint WifiInfo::getMaxSupportedTxLinkSpeedMbps()
	{
		return callMethod<jint>(
			"getMaxSupportedTxLinkSpeedMbps",
			"()I"
		);
	}
	jint WifiInfo::getNetworkId()
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	jstring WifiInfo::getPasspointFqdn()
	{
		return callObjectMethod(
			"getPasspointFqdn",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiInfo::getPasspointProviderFriendlyName()
	{
		return callObjectMethod(
			"getPasspointProviderFriendlyName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiInfo::getRssi()
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	jint WifiInfo::getRxLinkSpeedMbps()
	{
		return callMethod<jint>(
			"getRxLinkSpeedMbps",
			"()I"
		);
	}
	jstring WifiInfo::getSSID()
	{
		return callObjectMethod(
			"getSSID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiInfo::getSubscriptionId()
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	android::net::wifi::SupplicantState WifiInfo::getSupplicantState()
	{
		return callObjectMethod(
			"getSupplicantState",
			"()Landroid/net/wifi/SupplicantState;"
		);
	}
	jint WifiInfo::getTxLinkSpeedMbps()
	{
		return callMethod<jint>(
			"getTxLinkSpeedMbps",
			"()I"
		);
	}
	jint WifiInfo::getWifiStandard()
	{
		return callMethod<jint>(
			"getWifiStandard",
			"()I"
		);
	}
	jint WifiInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::net::wifi::WifiInfo WifiInfo::makeCopy(jlong arg0)
	{
		return callObjectMethod(
			"makeCopy",
			"(J)Landroid/net/wifi/WifiInfo;",
			arg0
		);
	}
	jstring WifiInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi
