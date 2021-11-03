#pragma once

#include "../../../JObject.hpp"

namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class NetworkInterface;
}

namespace java::nio::channels
{
	class MembershipKey : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MembershipKey(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MembershipKey(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::channels::MembershipKey block(java::net::InetAddress arg0);
		JObject channel();
		void drop();
		java::net::InetAddress group();
		jboolean isValid();
		java::net::NetworkInterface networkInterface();
		java::net::InetAddress sourceAddress();
		java::nio::channels::MembershipKey unblock(java::net::InetAddress arg0);
	};
} // namespace java::nio::channels

