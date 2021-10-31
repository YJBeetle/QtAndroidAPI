#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class IpPrefix;
}
namespace android::os
{
	class Parcel;
}
namespace java::net
{
	class InetAddress;
}

namespace android::net
{
	class RouteInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RouteInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RouteInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::net::IpPrefix getDestination();
		java::net::InetAddress getGateway();
		jstring getInterface();
		jboolean hasGateway();
		jint hashCode();
		jboolean isDefaultRoute();
		jboolean matches(java::net::InetAddress arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

