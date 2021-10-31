#pragma once

#include "../../__JniBaseClass.hpp"
#include "./DatagramSocket.hpp"

namespace java::net
{
	class DatagramPacket;
}
namespace java::net
{
	class DatagramSocket;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class NetworkInterface;
}
namespace java::net
{
	class SocketAddress;
}

namespace java::net
{
	class MulticastSocket : public java::net::DatagramSocket
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MulticastSocket(const char *className, const char *sig, Ts...agv) : java::net::DatagramSocket(className, sig, std::forward<Ts>(agv)...) {}
		MulticastSocket(QAndroidJniObject obj);
		
		// Constructors
		MulticastSocket();
		MulticastSocket(jint arg0);
		MulticastSocket(java::net::SocketAddress arg0);
		
		// Methods
		QAndroidJniObject getInterface();
		jboolean getLoopbackMode();
		QAndroidJniObject getNetworkInterface();
		jbyte getTTL();
		jint getTimeToLive();
		void joinGroup(java::net::InetAddress arg0);
		void joinGroup(java::net::SocketAddress arg0, java::net::NetworkInterface arg1);
		void leaveGroup(java::net::InetAddress arg0);
		void leaveGroup(java::net::SocketAddress arg0, java::net::NetworkInterface arg1);
		void send(java::net::DatagramPacket arg0, jbyte arg1);
		void setInterface(java::net::InetAddress arg0);
		void setLoopbackMode(jboolean arg0);
		void setNetworkInterface(java::net::NetworkInterface arg0);
		void setTTL(jbyte arg0);
		void setTimeToLive(jint arg0);
	};
} // namespace java::net

