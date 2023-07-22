#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ScanResult.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JString ScanResult::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		);
	}
	inline jint ScanResult::CHANNEL_WIDTH_160MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_160MHZ"
		);
	}
	inline jint ScanResult::CHANNEL_WIDTH_20MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_20MHZ"
		);
	}
	inline jint ScanResult::CHANNEL_WIDTH_40MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_40MHZ"
		);
	}
	inline jint ScanResult::CHANNEL_WIDTH_80MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_80MHZ"
		);
	}
	inline jint ScanResult::CHANNEL_WIDTH_80MHZ_PLUS_MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_80MHZ_PLUS_MHZ"
		);
	}
	inline JObject ScanResult::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.ScanResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString ScanResult::SSID()
	{
		return getObjectField(
			"SSID",
			"Ljava/lang/String;"
		);
	}
	inline jint ScanResult::UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"UNSPECIFIED"
		);
	}
	inline jint ScanResult::WIFI_BAND_24_GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_BAND_24_GHZ"
		);
	}
	inline jint ScanResult::WIFI_BAND_5_GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_BAND_5_GHZ"
		);
	}
	inline jint ScanResult::WIFI_BAND_60_GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_BAND_60_GHZ"
		);
	}
	inline jint ScanResult::WIFI_BAND_6_GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_BAND_6_GHZ"
		);
	}
	inline jint ScanResult::WIFI_STANDARD_11AC()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_11AC"
		);
	}
	inline jint ScanResult::WIFI_STANDARD_11AD()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_11AD"
		);
	}
	inline jint ScanResult::WIFI_STANDARD_11AX()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_11AX"
		);
	}
	inline jint ScanResult::WIFI_STANDARD_11N()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_11N"
		);
	}
	inline jint ScanResult::WIFI_STANDARD_LEGACY()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_LEGACY"
		);
	}
	inline jint ScanResult::WIFI_STANDARD_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"WIFI_STANDARD_UNKNOWN"
		);
	}
	inline JString ScanResult::capabilities()
	{
		return getObjectField(
			"capabilities",
			"Ljava/lang/String;"
		);
	}
	inline jint ScanResult::centerFreq0()
	{
		return getField<jint>(
			"centerFreq0"
		);
	}
	inline jint ScanResult::centerFreq1()
	{
		return getField<jint>(
			"centerFreq1"
		);
	}
	inline jint ScanResult::channelWidth()
	{
		return getField<jint>(
			"channelWidth"
		);
	}
	inline jint ScanResult::frequency()
	{
		return getField<jint>(
			"frequency"
		);
	}
	inline jint ScanResult::level()
	{
		return getField<jint>(
			"level"
		);
	}
	inline JString ScanResult::operatorFriendlyName()
	{
		return getObjectField(
			"operatorFriendlyName",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jlong ScanResult::timestamp()
	{
		return getField<jlong>(
			"timestamp"
		);
	}
	inline JString ScanResult::venueName()
	{
		return getObjectField(
			"venueName",
			"Ljava/lang/CharSequence;"
		);
	}
	
	// Constructors
	inline ScanResult::ScanResult()
		: JObject(
			"android.net.wifi.ScanResult",
			"()V"
		) {}
	inline ScanResult::ScanResult(android::net::wifi::ScanResult &arg0)
		: JObject(
			"android.net.wifi.ScanResult",
			"(Landroid/net/wifi/ScanResult;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ScanResult::convertChannelToFrequencyMhzIfSupported(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.net.wifi.ScanResult",
			"convertChannelToFrequencyMhzIfSupported",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint ScanResult::convertFrequencyMhzToChannelIfSupported(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.net.wifi.ScanResult",
			"convertFrequencyMhzToChannelIfSupported",
			"(I)I",
			arg0
		);
	}
	inline jint ScanResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject ScanResult::getInformationElements() const
	{
		return callObjectMethod(
			"getInformationElements",
			"()Ljava/util/List;"
		);
	}
	inline jint ScanResult::getWifiStandard() const
	{
		return callMethod<jint>(
			"getWifiStandard",
			"()I"
		);
	}
	inline jboolean ScanResult::is80211mcResponder() const
	{
		return callMethod<jboolean>(
			"is80211mcResponder",
			"()Z"
		);
	}
	inline jboolean ScanResult::isPasspointNetwork() const
	{
		return callMethod<jboolean>(
			"isPasspointNetwork",
			"()Z"
		);
	}
	inline JString ScanResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ScanResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
