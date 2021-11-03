#pragma once

#include "../../JObject.hpp"

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
	class DatagramPacket : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DatagramPacket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DatagramPacket(QAndroidJniObject obj);
		
		// Constructors
		DatagramPacket(jbyteArray arg0, jint arg1);
		DatagramPacket(jbyteArray arg0, jint arg1, jint arg2);
		DatagramPacket(jbyteArray arg0, jint arg1, java::net::SocketAddress arg2);
		DatagramPacket(jbyteArray arg0, jint arg1, jint arg2, java::net::SocketAddress arg3);
		DatagramPacket(jbyteArray arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
		DatagramPacket(jbyteArray arg0, jint arg1, jint arg2, java::net::InetAddress arg3, jint arg4);
		
		// Methods
		java::net::InetAddress getAddress();
		jbyteArray getData();
		jint getLength();
		jint getOffset();
		jint getPort();
		java::net::SocketAddress getSocketAddress();
		void setAddress(java::net::InetAddress arg0);
		void setData(jbyteArray arg0);
		void setData(jbyteArray arg0, jint arg1, jint arg2);
		void setLength(jint arg0);
		void setPort(jint arg0);
		void setSocketAddress(java::net::SocketAddress arg0);
	};
} // namespace java::net

