#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class MembershipKey : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MembershipKey(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MembershipKey(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::channels::MembershipKey block(java::net::InetAddress arg0);
		__JniBaseClass channel();
		void drop();
		java::net::InetAddress group();
		jboolean isValid();
		java::net::NetworkInterface networkInterface();
		java::net::InetAddress sourceAddress();
		java::nio::channels::MembershipKey unblock(java::net::InetAddress arg0);
	};
} // namespace java::nio::channels

