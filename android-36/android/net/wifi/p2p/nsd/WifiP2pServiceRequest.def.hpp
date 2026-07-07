#pragma once

#include "../../../../../JObject.hpp"

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pUsdBasedServiceConfig;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pServiceRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pServiceRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pServiceRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pServiceRequest(android::net::wifi::p2p::nsd::WifiP2pUsdBasedServiceConfig arg0);
		
		// Methods
		static android::net::wifi::p2p::nsd::WifiP2pServiceRequest newInstance(jint arg0);
		static android::net::wifi::p2p::nsd::WifiP2pServiceRequest newInstance(jint arg0, JString arg1);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::wifi::p2p::nsd::WifiP2pUsdBasedServiceConfig getWifiP2pUsdBasedServiceConfig() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::p2p::nsd

