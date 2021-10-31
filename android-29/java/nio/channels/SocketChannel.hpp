#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./spi/AbstractInterruptibleChannel.hpp"
#include "./SelectableChannel.hpp"
#include "./spi/AbstractSelectableChannel.hpp"

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
		static QAndroidJniObject open();
		static QAndroidJniObject open(__JniBaseClass arg0);
		static QAndroidJniObject open(java::net::SocketAddress arg0);
		QAndroidJniObject bind(java::net::SocketAddress arg0);
		jboolean connect(java::net::SocketAddress arg0);
		jboolean finishConnect();
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject getRemoteAddress();
		jboolean isConnected();
		jboolean isConnectionPending();
		jint read(java::nio::ByteBuffer arg0);
		jlong read(jarray arg0);
		jlong read(jarray arg0, jint arg1, jint arg2);
		QAndroidJniObject setOption(__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject shutdownInput();
		QAndroidJniObject shutdownOutput();
		QAndroidJniObject socket();
		jint validOps();
		jint write(java::nio::ByteBuffer arg0);
		jlong write(jarray arg0);
		jlong write(jarray arg0, jint arg1, jint arg2);
	};
} // namespace java::nio::channels

