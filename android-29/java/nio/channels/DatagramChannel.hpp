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
		static QAndroidJniObject open();
		static QAndroidJniObject open(__JniBaseClass arg0);
		QAndroidJniObject bind(java::net::SocketAddress arg0);
		QAndroidJniObject connect(java::net::SocketAddress arg0);
		QAndroidJniObject disconnect();
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject getRemoteAddress();
		jboolean isConnected();
		jint read(java::nio::ByteBuffer arg0);
		jlong read(jarray arg0);
		jlong read(jarray arg0, jint arg1, jint arg2);
		QAndroidJniObject receive(java::nio::ByteBuffer arg0);
		jint send(java::nio::ByteBuffer arg0, java::net::SocketAddress arg1);
		QAndroidJniObject setOption(__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject socket();
		jint validOps();
		jint write(java::nio::ByteBuffer arg0);
		jlong write(jarray arg0);
		jlong write(jarray arg0, jint arg1, jint arg2);
	};
} // namespace java::nio::channels

