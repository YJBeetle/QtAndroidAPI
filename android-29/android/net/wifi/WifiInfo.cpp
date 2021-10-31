#include "../NetworkInfo_DetailedState.hpp"
#include "./SupplicantState.hpp"
#include "../../os/Parcel.hpp"
#include "./WifiInfo.hpp"

namespace android::net::wifi
{
	// Fields
	jstring WifiInfo::FREQUENCY_UNITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"FREQUENCY_UNITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiInfo::LINK_SPEED_UNITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"LINK_SPEED_UNITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiInfo::LINK_SPEED_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"LINK_SPEED_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	WifiInfo::WifiInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject WifiInfo::getDetailedStateOf(android::net::wifi::SupplicantState arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	jstring WifiInfo::getBSSID()
	{
		return callObjectMethod(
			"getBSSID",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	QAndroidJniObject WifiInfo::getSupplicantState()
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

