#pragma once

#include "../../../../JObject.hpp"

namespace android::net
{
	class Network;
}
namespace java::net
{
	class InetAddress;
}

namespace android::net::ipsec::ike
{
	class IkeSessionConnectionInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSessionConnectionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionConnectionInfo(QJniObject obj);
		
		// Constructors
		IkeSessionConnectionInfo(java::net::InetAddress arg0, java::net::InetAddress arg1, android::net::Network arg2);
		
		// Methods
		java::net::InetAddress getLocalAddress() const;
		android::net::Network getNetwork() const;
		java::net::InetAddress getRemoteAddress() const;
	};
} // namespace android::net::ipsec::ike

