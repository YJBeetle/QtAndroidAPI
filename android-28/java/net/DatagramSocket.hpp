#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class IOException;
}
class JClass;
class JObject;
class JString;
namespace java::net
{
	class DatagramPacket;
}
namespace java::net
{
	class DatagramSocketImpl;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class SocketAddress;
}
namespace java::net
{
	class SocketException;
}
namespace java::nio::channels
{
	class DatagramChannel;
}

namespace java::net
{
	class DatagramSocket : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DatagramSocket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DatagramSocket(QAndroidJniObject obj);
		
		// Constructors
		DatagramSocket();
		DatagramSocket(jint arg0);
		DatagramSocket(java::net::SocketAddress arg0);
		DatagramSocket(jint arg0, java::net::InetAddress arg1);
		
		// Methods
		static void setDatagramSocketImplFactory(JObject arg0);
		void bind(java::net::SocketAddress arg0) const;
		void close() const;
		void connect(java::net::SocketAddress arg0) const;
		void connect(java::net::InetAddress arg0, jint arg1) const;
		void disconnect() const;
		jboolean getBroadcast() const;
		java::nio::channels::DatagramChannel getChannel() const;
		java::net::InetAddress getInetAddress() const;
		java::net::InetAddress getLocalAddress() const;
		jint getLocalPort() const;
		java::net::SocketAddress getLocalSocketAddress() const;
		JObject getOption(JObject arg0) const;
		jint getPort() const;
		jint getReceiveBufferSize() const;
		java::net::SocketAddress getRemoteSocketAddress() const;
		jboolean getReuseAddress() const;
		jint getSendBufferSize() const;
		jint getSoTimeout() const;
		jint getTrafficClass() const;
		jboolean isBound() const;
		jboolean isClosed() const;
		jboolean isConnected() const;
		void receive(java::net::DatagramPacket arg0) const;
		void send(java::net::DatagramPacket arg0) const;
		void setBroadcast(jboolean arg0) const;
		java::net::DatagramSocket setOption(JObject arg0, JObject arg1) const;
		void setReceiveBufferSize(jint arg0) const;
		void setReuseAddress(jboolean arg0) const;
		void setSendBufferSize(jint arg0) const;
		void setSoTimeout(jint arg0) const;
		void setTrafficClass(jint arg0) const;
		JObject supportedOptions() const;
	};
} // namespace java::net

