#pragma once

#include "../../../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pUsdBasedServiceConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SERVICE_PROTOCOL_TYPE_BONJOUR();
		static jint SERVICE_PROTOCOL_TYPE_GENERIC();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pUsdBasedServiceConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pUsdBasedServiceConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pUsdBasedServiceConfig();
		
		// Methods
		static jint getMaxAllowedServiceSpecificInfoLength();
		jint describeContents() const;
		JString getServiceName() const;
		jint getServiceProtocolType() const;
		JByteArray getServiceSpecificInfo() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::p2p::nsd

