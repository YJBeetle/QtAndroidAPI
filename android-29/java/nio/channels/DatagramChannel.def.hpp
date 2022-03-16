#pragma once

#include "./spi/AbstractSelectableChannel.def.hpp"

class JArray;
class JObject;
namespace java::net
{
	class DatagramSocket;
}
namespace java::net
{
	class SocketAddress;
}
namespace java::nio
{
	class ByteBuffer;
}
namespace java::nio::channels::spi
{
	class SelectorProvider;
}

namespace java::nio::channels
{
	class DatagramChannel : public java::nio::channels::spi::AbstractSelectableChannel
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DatagramChannel(const char *className, const char *sig, Ts...agv) : java::nio::channels::spi::AbstractSelectableChannel(className, sig, std::forward<Ts>(agv)...) {}
		DatagramChannel(QJniObject obj) : java::nio::channels::spi::AbstractSelectableChannel(obj) {}
		
		// Constructors
		
		// Methods
		static java::nio::channels::DatagramChannel open();
		static java::nio::channels::DatagramChannel open(JObject arg0);
		java::nio::channels::DatagramChannel bind(java::net::SocketAddress arg0) const;
		java::nio::channels::DatagramChannel connect(java::net::SocketAddress arg0) const;
		java::nio::channels::DatagramChannel disconnect() const;
		java::net::SocketAddress getLocalAddress() const;
		java::net::SocketAddress getRemoteAddress() const;
		jboolean isConnected() const;
		jint read(java::nio::ByteBuffer arg0) const;
		jlong read(JArray arg0) const;
		jlong read(JArray arg0, jint arg1, jint arg2) const;
		java::net::SocketAddress receive(java::nio::ByteBuffer arg0) const;
		jint send(java::nio::ByteBuffer arg0, java::net::SocketAddress arg1) const;
		java::nio::channels::DatagramChannel setOption(JObject arg0, JObject arg1) const;
		java::net::DatagramSocket socket() const;
		jint validOps() const;
		jint write(java::nio::ByteBuffer arg0) const;
		jlong write(JArray arg0) const;
		jlong write(JArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::nio::channels

