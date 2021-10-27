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
		jstring SSID();
		jstring capabilities();
		jint centerFreq0();
		jint centerFreq1();
		jint channelWidth();
		jint frequency();
		jint level();
		jstring operatorFriendlyName();
		jlong timestamp();
		jstring venueName();
		
		ScanResult(QAndroidJniObject obj);
		// Constructors
		ScanResult() = default;
		
		// Methods
		jint describeContents();
		jboolean is80211mcResponder();
		jboolean isPasspointNetwork();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

