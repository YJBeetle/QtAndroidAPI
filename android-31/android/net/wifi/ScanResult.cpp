#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ScanResult.hpp"

namespace android::net::wifi
{
	// Fields
	JString ScanResult::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		);
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
	JString ScanResult::SSID()
	{
		return getObjectField(
			"SSID",
			"Ljava/lang/String;"
		);
	}
	jint ScanResult::UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"UNSPECIFIED"
		);
	}
	jint ScanResult::WIFI_BAND_24_GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_BAND_24_GHZ"
		);
	}
	jint ScanResult::WIFI_BAND_5_GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_BAND_5_GHZ"
		);
	}
	jint ScanResult::WIFI_BAND_60_GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_BAND_60_GHZ"
		);
	}
	jint ScanResult::WIFI_BAND_6_GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_BAND_6_GHZ"
		);
	}
	jint ScanResult::WIFI_STANDARD_11AC()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_11AC"
		);
	}
	jint ScanResult::WIFI_STANDARD_11AD()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_11AD"
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
	JString ScanResult::capabilities()
	{
		return getObjectField(
			"capabilities",
			"Ljava/lang/String;"
		);
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
	JString ScanResult::operatorFriendlyName()
	{
		return getObjectField(
			"operatorFriendlyName",
			"Ljava/lang/CharSequence;"
		);
	}
	jlong ScanResult::timestamp()
	{
		return getField<jlong>(
			"timestamp"
		);
	}
	JString ScanResult::venueName()
	{
		return getObjectField(
			"venueName",
			"Ljava/lang/CharSequence;"
		);
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
	jint ScanResult::convertChannelToFrequencyMhzIfSupported(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.net.wifi.ScanResult",
			"convertChannelToFrequencyMhzIfSupported",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint ScanResult::convertFrequencyMhzToChannelIfSupported(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.net.wifi.ScanResult",
			"convertFrequencyMhzToChannelIfSupported",
			"(I)I",
			arg0
		);
	}
	jint ScanResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject ScanResult::getInformationElements() const
	{
		return callObjectMethod(
			"getInformationElements",
			"()Ljava/util/List;"
		);
	}
	jint ScanResult::getWifiStandard() const
	{
		return callMethod<jint>(
			"getWifiStandard",
			"()I"
		);
	}
	jboolean ScanResult::is80211mcResponder() const
	{
		return callMethod<jboolean>(
			"is80211mcResponder",
			"()Z"
		);
	}
	jboolean ScanResult::isPasspointNetwork() const
	{
		return callMethod<jboolean>(
			"isPasspointNetwork",
			"()Z"
		);
	}
	JString ScanResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ScanResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

