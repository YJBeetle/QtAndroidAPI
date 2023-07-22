#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi
{
	class WifiSsid;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::net::wifi
{
	class ScanResult : public JObject
	{
	public:
		// Fields
		JString BSSID();
		static jint CHANNEL_WIDTH_160MHZ();
		static jint CHANNEL_WIDTH_20MHZ();
		static jint CHANNEL_WIDTH_320MHZ();
		static jint CHANNEL_WIDTH_40MHZ();
		static jint CHANNEL_WIDTH_80MHZ();
		static jint CHANNEL_WIDTH_80MHZ_PLUS_MHZ();
		static JObject CREATOR();
		static jint PREAMBLE_EHT();
		static jint PREAMBLE_HE();
		static jint PREAMBLE_HT();
		static jint PREAMBLE_LEGACY();
		static jint PREAMBLE_VHT();
		JString SSID();
		static jint UNSPECIFIED();
		static jint WIFI_BAND_24_GHZ();
		static jint WIFI_BAND_5_GHZ();
		static jint WIFI_BAND_60_GHZ();
		static jint WIFI_BAND_6_GHZ();
		static jint WIFI_STANDARD_11AC();
		static jint WIFI_STANDARD_11AD();
		static jint WIFI_STANDARD_11AX();
		static jint WIFI_STANDARD_11BE();
		static jint WIFI_STANDARD_11N();
		static jint WIFI_STANDARD_LEGACY();
		static jint WIFI_STANDARD_UNKNOWN();
		JString capabilities();
		jint centerFreq0();
		jint centerFreq1();
		jint channelWidth();
		jint frequency();
		jint level();
		JString operatorFriendlyName();
		jlong timestamp();
		JString venueName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanResult(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScanResult();
		ScanResult(android::net::wifi::ScanResult &arg0);
		
		// Methods
		static jint convertChannelToFrequencyMhzIfSupported(jint arg0, jint arg1);
		static jint convertFrequencyMhzToChannelIfSupported(jint arg0);
		jint describeContents() const;
		JObject getAffiliatedMloLinks() const;
		android::net::MacAddress getApMldMacAddress() const;
		jint getApMloLinkId() const;
		JObject getInformationElements() const;
		JIntArray getSecurityTypes() const;
		android::net::wifi::WifiSsid getWifiSsid() const;
		jint getWifiStandard() const;
		jboolean is80211mcResponder() const;
		jboolean isPasspointNetwork() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

