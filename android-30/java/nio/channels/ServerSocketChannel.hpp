#pragma once

#include "./spi/AbstractSelectableChannel.hpp"

class JObject;
namespace java::net
{
	class ServerSocket;
}
namespace java::net
{
	class SocketAddress;
}
namespace java::nio::channels
{
	class SocketChannel;
}
namespace java::nio::channels::spi
{
	class SelectorProvider;
}

namespace java::nio::channels
{
	class ServerSocketChannel : public java::nio::channels::spi::AbstractSelectableChannel
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServerSocketChannel(const char *className, const char *sig, Ts...agv) : java::nio::channels::spi::AbstractSelectableChannel(className, sig, std::forward<Ts>(agv)...) {}
		ServerSocketChannel(QAndroidJniObject obj) : java::nio::channels::spi::AbstractSelectableChannel(obj) {}
		
		// Constructors
		
		// Methods
		static java::nio::channels::ServerSocketChannel open();
		static java::nio::channels::ServerSocketChannel open(JObject arg0);
		java::nio::channels::SocketChannel accept() const;
		java::nio::channels::ServerSocketChannel bind(java::net::SocketAddress arg0) const;
		java::nio::channels::ServerSocketChannel bind(java::net::SocketAddress arg0, jint arg1) const;
		java::net::SocketAddress getLocalAddress() const;
		java::nio::channels::ServerSocketChannel setOption(JObject arg0, JObject arg1) const;
		java::net::ServerSocket socket() const;
		jint validOps() const;
	};
} // namespace java::nio::channels

