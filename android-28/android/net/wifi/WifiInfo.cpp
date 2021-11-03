#include "../NetworkInfo_DetailedState.hpp"
#include "./SupplicantState.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./WifiInfo.hpp"

namespace android::net::wifi
{
	// Fields
	JString WifiInfo::FREQUENCY_UNITS()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"FREQUENCY_UNITS",
			"Ljava/lang/String;"
		);
	}
	JString WifiInfo::LINK_SPEED_UNITS()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"LINK_SPEED_UNITS",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	WifiInfo::WifiInfo(QJniObject obj) : JObject(obj) {}
	
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
	JString WifiInfo::getBSSID()
	{
		return callObjectMethod(
			"getBSSID",
			"()Ljava/lang/String;"
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
	JString WifiInfo::getMacAddress()
	{
		return callObjectMethod(
			"getMacAddress",
			"()Ljava/lang/String;"
		);
	}
	jint WifiInfo::getNetworkId()
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	jint WifiInfo::getRssi()
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	JString WifiInfo::getSSID()
	{
		return callObjectMethod(
			"getSSID",
			"()Ljava/lang/String;"
		);
	}
	android::net::wifi::SupplicantState WifiInfo::getSupplicantState()
	{
		return callObjectMethod(
			"getSupplicantState",
			"()Landroid/net/wifi/SupplicantState;"
		);
	}
	JString WifiInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

