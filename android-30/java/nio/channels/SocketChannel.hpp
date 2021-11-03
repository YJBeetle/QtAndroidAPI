#pragma once

#include "./spi/AbstractSelectableChannel.hpp"

class JArray;
class JObject;
namespace java::net
{
	class Socket;
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
	class SocketChannel : public java::nio::channels::spi::AbstractSelectableChannel
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SocketChannel(const char *className, const char *sig, Ts...agv) : java::nio::channels::spi::AbstractSelectableChannel(className, sig, std::forward<Ts>(agv)...) {}
		SocketChannel(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::SocketChannel open();
		static java::nio::channels::SocketChannel open(JObject arg0);
		static java::nio::channels::SocketChannel open(java::net::SocketAddress arg0);
		java::nio::channels::SocketChannel bind(java::net::SocketAddress arg0);
		jboolean connect(java::net::SocketAddress arg0);
		jboolean finishConnect();
		java::net::SocketAddress getLocalAddress();
		java::net::SocketAddress getRemoteAddress();
		jboolean isConnected();
		jboolean isConnectionPending();
		jint read(java::nio::ByteBuffer arg0);
		jlong read(JArray arg0);
		jlong read(JArray arg0, jint arg1, jint arg2);
		java::nio::channels::SocketChannel setOption(JObject arg0, JObject arg1);
		java::nio::channels::SocketChannel shutdownInput();
		java::nio::channels::SocketChannel shutdownOutput();
		java::net::Socket socket();
		jint validOps();
		jint write(java::nio::ByteBuffer arg0);
		jlong write(JArray arg0);
		jlong write(JArray arg0, jint arg1, jint arg2);
	};
} // namespace java::nio::channels

