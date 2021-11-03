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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SocketChannel(const char *className, const char *sig, Ts...agv) : java::nio::channels::spi::AbstractSelectableChannel(className, sig, std::forward<Ts>(agv)...) {}
		SocketChannel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::SocketChannel open();
		static java::nio::channels::SocketChannel open(JObject arg0);
		static java::nio::channels::SocketChannel open(java::net::SocketAddress arg0);
		java::nio::channels::SocketChannel bind(java::net::SocketAddress arg0) const;
		jboolean connect(java::net::SocketAddress arg0) const;
		jboolean finishConnect() const;
		java::net::SocketAddress getLocalAddress() const;
		java::net::SocketAddress getRemoteAddress() const;
		jboolean isConnected() const;
		jboolean isConnectionPending() const;
		jint read(java::nio::ByteBuffer arg0) const;
		jlong read(JArray arg0) const;
		jlong read(JArray arg0, jint arg1, jint arg2) const;
		java::nio::channels::SocketChannel setOption(JObject arg0, JObject arg1) const;
		java::nio::channels::SocketChannel shutdownInput() const;
		java::nio::channels::SocketChannel shutdownOutput() const;
		java::net::Socket socket() const;
		jint validOps() const;
		jint write(java::nio::ByteBuffer arg0) const;
		jlong write(JArray arg0) const;
		jlong write(JArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::nio::channels

