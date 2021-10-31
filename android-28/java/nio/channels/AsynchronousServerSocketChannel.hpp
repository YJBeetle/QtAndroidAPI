#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::net
{
	class SocketAddress;
}
namespace java::nio::channels
{
	class AsynchronousChannelGroup;
}
namespace java::nio::channels::spi
{
	class AsynchronousChannelProvider;
}

namespace java::nio::channels
{
	class AsynchronousServerSocketChannel : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AsynchronousServerSocketChannel(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousServerSocketChannel(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::AsynchronousServerSocketChannel open();
		static java::nio::channels::AsynchronousServerSocketChannel open(java::nio::channels::AsynchronousChannelGroup arg0);
		__JniBaseClass accept();
		void accept(jobject arg0, __JniBaseClass arg1);
		java::nio::channels::AsynchronousServerSocketChannel bind(java::net::SocketAddress arg0);
		java::nio::channels::AsynchronousServerSocketChannel bind(java::net::SocketAddress arg0, jint arg1);
		java::net::SocketAddress getLocalAddress();
		java::nio::channels::spi::AsynchronousChannelProvider provider();
		java::nio::channels::AsynchronousServerSocketChannel setOption(__JniBaseClass arg0, jobject arg1);
	};
} // namespace java::nio::channels

