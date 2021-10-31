#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./spi/AbstractInterruptibleChannel.hpp"
#include "./SelectableChannel.hpp"
#include "./spi/AbstractSelectableChannel.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DatagramChannel(const char *className, const char *sig, Ts...agv) : java::nio::channels::spi::AbstractSelectableChannel(className, sig, std::forward<Ts>(agv)...) {}
		DatagramChannel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::DatagramChannel open();
		static java::nio::channels::DatagramChannel open(__JniBaseClass arg0);
		java::nio::channels::DatagramChannel bind(java::net::SocketAddress arg0);
		java::nio::channels::DatagramChannel connect(java::net::SocketAddress arg0);
		java::nio::channels::DatagramChannel disconnect();
		java::net::SocketAddress getLocalAddress();
		java::net::SocketAddress getRemoteAddress();
		jboolean isConnected();
		jint read(java::nio::ByteBuffer arg0);
		jlong read(jarray arg0);
		jlong read(jarray arg0, jint arg1, jint arg2);
		java::net::SocketAddress receive(java::nio::ByteBuffer arg0);
		jint send(java::nio::ByteBuffer arg0, java::net::SocketAddress arg1);
		java::nio::channels::DatagramChannel setOption(__JniBaseClass arg0, jobject arg1);
		java::net::DatagramSocket socket();
		jint validOps();
		jint write(java::nio::ByteBuffer arg0);
		jlong write(jarray arg0);
		jlong write(jarray arg0, jint arg1, jint arg2);
	};
} // namespace java::nio::channels
