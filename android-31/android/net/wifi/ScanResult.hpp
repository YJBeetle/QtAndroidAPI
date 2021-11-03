#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi
{
	class ScanResult : public JObject
	{
	public:
		// Fields
		jstring BSSID();
		static jint CHANNEL_WIDTH_160MHZ();
		static jint CHANNEL_WIDTH_20MHZ();
		static jint CHANNEL_WIDTH_40MHZ();
		static jint CHANNEL_WIDTH_80MHZ();
		static jint CHANNEL_WIDTH_80MHZ_PLUS_MHZ();
		static JObject CREATOR();
		jstring SSID();
		static jint UNSPECIFIED();
		static jint WIFI_BAND_24_GHZ();
		static jint WIFI_BAND_5_GHZ();
		static jint WIFI_BAND_60_GHZ();
		static jint WIFI_BAND_6_GHZ();
		static jint WIFI_STANDARD_11AC();
		static jint WIFI_STANDARD_11AD();
		static jint WIFI_STANDARD_11AX();
		static jint WIFI_STANDARD_11N();
		static jint WIFI_STANDARD_LEGACY();
		static jint WIFI_STANDARD_UNKNOWN();
		jstring capabilities();
		jint centerFreq0();
		jint centerFreq1();
		jint channelWidth();
		jint frequency();
		jint level();
		jstring operatorFriendlyName();
		jlong timestamp();
		jstring venueName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanResult(QAndroidJniObject obj);
		
		// Constructors
		ScanResult();
		ScanResult(android::net::wifi::ScanResult &arg0);
		
		// Methods
		static jint convertChannelToFrequencyMhzIfSupported(jint arg0, jint arg1);
		static jint convertFrequencyMhzToChannelIfSupported(jint arg0);
		jint describeContents();
		JObject getInformationElements();
		jint getWifiStandard();
		jboolean is80211mcResponder();
		jboolean isPasspointNetwork();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

