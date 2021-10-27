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
		
		MembershipKey(QAndroidJniObject obj);
		// Constructors
		MembershipKey() = default;
		
		// Methods
		QAndroidJniObject block(java::net::InetAddress arg0);
		QAndroidJniObject channel();
		void drop();
		QAndroidJniObject group();
		jboolean isValid();
		QAndroidJniObject networkInterface();
		QAndroidJniObject sourceAddress();
		QAndroidJniObject unblock(java::net::InetAddress arg0);
	};
} // namespace java::nio::channels

