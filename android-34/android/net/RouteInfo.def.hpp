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
		static jint RTN_THROW();
		static jint RTN_UNICAST();
		static jint RTN_UNREACHABLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit RouteInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RouteInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::IpPrefix getDestination() const;
		java::net::InetAddress getGateway() const;
		JString getInterface() const;
		jint getType() const;
		jboolean hasGateway() const;
		jint hashCode() const;
		jboolean isDefaultRoute() const;
		jboolean matches(java::net::InetAddress arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

