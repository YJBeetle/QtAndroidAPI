#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class InetAddress;
}

namespace java::net
{
	class NetworkInterface : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkInterface(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInterface(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::net::NetworkInterface getByIndex(jint arg0);
		static java::net::NetworkInterface getByInetAddress(java::net::InetAddress arg0);
		static java::net::NetworkInterface getByName(jstring arg0);
		static __JniBaseClass getNetworkInterfaces();
		static __JniBaseClass networkInterfaces();
		jboolean equals(jobject arg0);
		jstring getDisplayName();
		jbyteArray getHardwareAddress();
		jint getIndex();
		__JniBaseClass getInetAddresses();
		__JniBaseClass getInterfaceAddresses();
		jint getMTU();
		jstring getName();
		java::net::NetworkInterface getParent();
		__JniBaseClass getSubInterfaces();
		jint hashCode();
		__JniBaseClass inetAddresses();
		jboolean isLoopback();
		jboolean isPointToPoint();
		jboolean isUp();
		jboolean isVirtual();
		__JniBaseClass subInterfaces();
		jboolean supportsMulticast();
		jstring toString();
	};
} // namespace java::net

