#include "../../os/Parcel.hpp"
#include "./ScanResult.hpp"

namespace android::net::wifi
{
	// Fields
	jstring ScanResult::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ScanResult::CHANNEL_WIDTH_160MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_160MHZ"
		);
	}
	jint ScanResult::CHANNEL_WIDTH_20MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_20MHZ"
		);
	}
	jint ScanResult::CHANNEL_WIDTH_40MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_40MHZ"
		);
	}
	jint ScanResult::CHANNEL_WIDTH_80MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_80MHZ"
		);
	}
	jint ScanResult::CHANNEL_WIDTH_80MHZ_PLUS_MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_80MHZ_PLUS_MHZ"
		);
	}
	JObject ScanResult::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.ScanResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ScanResult::SSID()
	{
		return getObjectField(
			"SSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ScanResult::WIFI_STANDARD_11AC()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_11AC"
		);
	}
	jint ScanResult::WIFI_STANDARD_11AX()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_11AX"
		);
	}
	jint ScanResult::WIFI_STANDARD_11N()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_11N"
		);
	}
	jint ScanResult::WIFI_STANDARD_LEGACY()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_LEGACY"
		);
	}
	jint ScanResult::WIFI_STANDARD_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_UNKNOWN"
		);
	}
	jstring ScanResult::capabilities()
	{
		return getObjectField(
			"capabilities",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ScanResult::centerFreq0()
	{
		return getField<jint>(
			"centerFreq0"
		);
	}
	jint ScanResult::centerFreq1()
	{
		return getField<jint>(
			"centerFreq1"
		);
	}
	jint ScanResult::channelWidth()
	{
		return getField<jint>(
			"channelWidth"
		);
	}
	jint ScanResult::frequency()
	{
		return getField<jint>(
			"frequency"
		);
	}
	jint ScanResult::level()
	{
		return getField<jint>(
			"level"
		);
	}
	jstring ScanResult::operatorFriendlyName()
	{
		return getObjectField(
			"operatorFriendlyName",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jlong ScanResult::timestamp()
	{
		return getField<jlong>(
			"timestamp"
		);
	}
	jstring ScanResult::venueName()
	{
		return getObjectField(
			"venueName",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ScanResult::ScanResult(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ScanResult::ScanResult()
		: JObject(
			"android.net.wifi.ScanResult",
			"()V"
		) {}
	ScanResult::ScanResult(android::net::wifi::ScanResult &arg0)
		: JObject(
			"android.net.wifi.ScanResult",
			"(Landroid/net/wifi/ScanResult;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ScanResult::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject ScanResult::getInformationElements()
	{
		return callObjectMethod(
			"getInformationElements",
			"()Ljava/util/List;"
		);
	}
	jint ScanResult::getWifiStandard()
	{
		return callMethod<jint>(
			"getWifiStandard",
			"()I"
		);
	}
	jboolean ScanResult::is80211mcResponder()
	{
		return callMethod<jboolean>(
			"is80211mcResponder",
			"()Z"
		);
	}
	jboolean ScanResult::isPasspointNetwork()
	{
		return callMethod<jboolean>(
			"isPasspointNetwork",
			"()Z"
		);
	}
	jstring ScanResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ScanResult::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

