#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net::wifi::p2p
{
	class WifiP2pDiscoveryConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pDiscoveryConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pDiscoveryConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getFrequencyMhz() const;
		jint getScanType() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::p2p

