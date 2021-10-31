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
		static QAndroidJniObject open();
		static QAndroidJniObject open(__JniBaseClass arg0);
		QAndroidJniObject accept();
		QAndroidJniObject bind(java::net::SocketAddress arg0);
		QAndroidJniObject bind(java::net::SocketAddress arg0, jint arg1);
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject setOption(__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject socket();
		jint validOps();
	};
} // namespace java::nio::channels

