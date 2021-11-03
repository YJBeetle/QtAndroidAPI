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
		JString SSID();
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
		ScanResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean is80211mcResponder();
		jboolean isPasspointNetwork();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

