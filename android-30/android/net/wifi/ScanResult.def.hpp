#pragma once

#include "../../../JObject.hpp"

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
		static jint CHANNEL_WIDTH_40MHZ();
		static jint CHANNEL_WIDTH_80MHZ();
		static jint CHANNEL_WIDTH_80MHZ_PLUS_MHZ();
		static JObject CREATOR();
		JString SSID();
		static jint WIFI_STANDARD_11AC();
		static jint WIFI_STANDARD_11AX();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScanResult();
		ScanResult(android::net::wifi::ScanResult &arg0);
		
		// Methods
		jint describeContents() const;
		JObject getInformationElements() const;
		jint getWifiStandard() const;
		jboolean is80211mcResponder() const;
		jboolean isPasspointNetwork() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

