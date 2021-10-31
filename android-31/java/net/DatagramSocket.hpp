#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class IOException;
}
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
	class DatagramSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DatagramSocket(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DatagramSocket(QAndroidJniObject obj);
		
		// Constructors
		DatagramSocket();
		DatagramSocket(jint arg0);
		DatagramSocket(java::net::SocketAddress arg0);
		DatagramSocket(jint arg0, java::net::InetAddress arg1);
		
		// Methods
		static void setDatagramSocketImplFactory(__JniBaseClass arg0);
		void bind(java::net::SocketAddress arg0);
		void close();
		void connect(java::net::SocketAddress arg0);
		void connect(java::net::InetAddress arg0, jint arg1);
		void disconnect();
		jboolean getBroadcast();
		java::nio::channels::DatagramChannel getChannel();
		java::net::InetAddress getInetAddress();
		java::net::InetAddress getLocalAddress();
		jint getLocalPort();
		java::net::SocketAddress getLocalSocketAddress();
		jobject getOption(__JniBaseClass arg0);
		jint getPort();
		jint getReceiveBufferSize();
		java::net::SocketAddress getRemoteSocketAddress();
		jboolean getReuseAddress();
		jint getSendBufferSize();
		jint getSoTimeout();
		jint getTrafficClass();
		jboolean isBound();
		jboolean isClosed();
		jboolean isConnected();
		void receive(java::net::DatagramPacket arg0);
		void send(java::net::DatagramPacket arg0);
		void setBroadcast(jboolean arg0);
		java::net::DatagramSocket setOption(__JniBaseClass arg0, jobject arg1);
		void setReceiveBufferSize(jint arg0);
		void setReuseAddress(jboolean arg0);
		void setSendBufferSize(jint arg0);
		void setSoTimeout(jint arg0);
		void setTrafficClass(jint arg0);
		__JniBaseClass supportedOptions();
	};
} // namespace java::net

