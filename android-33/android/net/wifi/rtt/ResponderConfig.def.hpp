#pragma once

#include "../../../../JObject.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi
{
	class ScanResult;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::rtt
{
	class ResponderConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResponderConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResponderConfig(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::wifi::rtt::ResponderConfig fromScanResult(android::net::wifi::ScanResult arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getCenterFreq0Mhz() const;
		jint getCenterFreq1Mhz() const;
		jint getChannelWidth() const;
		jint getFrequencyMhz() const;
		android::net::MacAddress getMacAddress() const;
		jint getPreamble() const;
		jint hashCode() const;
		jboolean is80211mcSupported() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::rtt

