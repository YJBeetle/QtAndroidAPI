#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class IpPrefix;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::net
{
	class InetAddress;
}

namespace android::net
{
	class RouteInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RouteInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RouteInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::net::IpPrefix getDestination();
		java::net::InetAddress getGateway();
		JString getInterface();
		jint hashCode();
		jboolean isDefaultRoute();
		jboolean matches(java::net::InetAddress arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

