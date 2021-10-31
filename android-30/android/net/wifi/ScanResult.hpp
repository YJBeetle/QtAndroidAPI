#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi
{
	class ScanResult : public __JniBaseClass
	{
	public:
		// Fields
		jstring BSSID();
		static jint CHANNEL_WIDTH_160MHZ();
		static jint CHANNEL_WIDTH_20MHZ();
		static jint CHANNEL_WIDTH_40MHZ();
		static jint CHANNEL_WIDTH_80MHZ();
		static jint CHANNEL_WIDTH_80MHZ_PLUS_MHZ();
		static __JniBaseClass CREATOR();
		jstring SSID();
		static jint WIFI_STANDARD_11AC();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScanResult(QJniObject obj);
		
		// Constructors
		ScanResult();
		ScanResult(android::net::wifi::ScanResult &arg0);
		
		// Methods
		jint describeContents();
		__JniBaseClass getInformationElements();
		jint getWifiStandard();
		jboolean is80211mcResponder();
		jboolean isPasspointNetwork();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

