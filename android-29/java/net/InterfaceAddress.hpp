#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class Inet4Address;
}
namespace java::net
{
	class InetAddress;
}

namespace java::net
{
	class InterfaceAddress : public __JniBaseClass
	{
	public:
		// Fields
		
		InterfaceAddress(QAndroidJniObject obj);
		// Constructors
		InterfaceAddress() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getAddress();
		QAndroidJniObject getBroadcast();
		jshort getNetworkPrefixLength();
		jint hashCode();
		jstring toString();
	};
} // namespace java::net

