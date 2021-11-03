#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit DatagramPacket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DatagramPacket(QJniObject obj);
		
		// Constructors
		DatagramPacket(JByteArray arg0, jint arg1);
		DatagramPacket(JByteArray arg0, jint arg1, jint arg2);
		DatagramPacket(JByteArray arg0, jint arg1, java::net::SocketAddress arg2);
		DatagramPacket(JByteArray arg0, jint arg1, jint arg2, java::net::SocketAddress arg3);
		DatagramPacket(JByteArray arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
		DatagramPacket(JByteArray arg0, jint arg1, jint arg2, java::net::InetAddress arg3, jint arg4);
		
		// Methods
		java::net::InetAddress getAddress() const;
		JByteArray getData() const;
		jint getLength() const;
		jint getOffset() const;
		jint getPort() const;
		java::net::SocketAddress getSocketAddress() const;
		void setAddress(java::net::InetAddress arg0) const;
		void setData(JByteArray arg0) const;
		void setData(JByteArray arg0, jint arg1, jint arg2) const;
		void setLength(jint arg0) const;
		void setPort(jint arg0) const;
		void setSocketAddress(java::net::SocketAddress arg0) const;
	};
} // namespace java::net

