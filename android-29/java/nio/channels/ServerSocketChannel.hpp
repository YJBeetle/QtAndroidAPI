#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./spi/AbstractInterruptibleChannel.hpp"
#include "./SelectableChannel.hpp"
#include "./spi/AbstractSelectableChannel.hpp"

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
		ServerSocketChannel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::ServerSocketChannel open();
		static java::nio::channels::ServerSocketChannel open(__JniBaseClass arg0);
		java::nio::channels::SocketChannel accept();
		java::nio::channels::ServerSocketChannel bind(java::net::SocketAddress arg0);
		java::nio::channels::ServerSocketChannel bind(java::net::SocketAddress arg0, jint arg1);
		java::net::SocketAddress getLocalAddress();
		java::nio::channels::ServerSocketChannel setOption(__JniBaseClass arg0, jobject arg1);
		java::net::ServerSocket socket();
		jint validOps();
	};
} // namespace java::nio::channels

