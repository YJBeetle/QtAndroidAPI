#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::net
{
	class Inet6Address;
}

namespace android::net::wifi::aware
{
	class WifiAwareNetworkInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiAwareNetworkInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiAwareNetworkInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		java::net::Inet6Address getPeerIpv6Addr();
		jint getPort();
		jint getTransportProtocol();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::aware

