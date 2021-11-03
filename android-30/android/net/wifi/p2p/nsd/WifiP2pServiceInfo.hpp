#pragma once

#include "../../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pServiceInfo : public JObject
	{
	public:
		// Fields
		static jint SERVICE_TYPE_ALL();
		static jint SERVICE_TYPE_BONJOUR();
		static jint SERVICE_TYPE_UPNP();
		static jint SERVICE_TYPE_VENDOR_SPECIFIC();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pServiceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pServiceInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::p2p::nsd

