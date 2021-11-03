#pragma once

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
		
		// QJniObject forward
		template<typename ...Ts> explicit MulticastSocket(const char *className, const char *sig, Ts...agv) : java::net::DatagramSocket(className, sig, std::forward<Ts>(agv)...) {}
		MulticastSocket(QJniObject obj);
		
		// Constructors
		MulticastSocket();
		MulticastSocket(jint arg0);
		MulticastSocket(java::net::SocketAddress arg0);
		
		// Methods
		java::net::InetAddress getInterface() const;
		jboolean getLoopbackMode() const;
		java::net::NetworkInterface getNetworkInterface() const;
		jbyte getTTL() const;
		jint getTimeToLive() const;
		void joinGroup(java::net::InetAddress arg0) const;
		void joinGroup(java::net::SocketAddress arg0, java::net::NetworkInterface arg1) const;
		void leaveGroup(java::net::InetAddress arg0) const;
		void leaveGroup(java::net::SocketAddress arg0, java::net::NetworkInterface arg1) const;
		void send(java::net::DatagramPacket arg0, jbyte arg1) const;
		void setInterface(java::net::InetAddress arg0) const;
		void setLoopbackMode(jboolean arg0) const;
		void setNetworkInterface(java::net::NetworkInterface arg0) const;
		void setTTL(jbyte arg0) const;
		void setTimeToLive(jint arg0) const;
	};
} // namespace java::net

