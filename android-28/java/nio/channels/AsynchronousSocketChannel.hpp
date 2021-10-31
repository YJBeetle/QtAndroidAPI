#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::net
{
	class SocketAddress;
}
namespace java::nio
{
	class ByteBuffer;
}
namespace java::nio::channels
{
	class AsynchronousChannelGroup;
}
namespace java::nio::channels::spi
{
	class AsynchronousChannelProvider;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::nio::channels
{
	class AsynchronousSocketChannel : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsynchronousSocketChannel(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousSocketChannel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::AsynchronousSocketChannel open();
		static java::nio::channels::AsynchronousSocketChannel open(java::nio::channels::AsynchronousChannelGroup arg0);
		java::nio::channels::AsynchronousSocketChannel bind(java::net::SocketAddress arg0);
		__JniBaseClass connect(java::net::SocketAddress arg0);
		void connect(java::net::SocketAddress arg0, jobject arg1, __JniBaseClass arg2);
		java::net::SocketAddress getLocalAddress();
		java::net::SocketAddress getRemoteAddress();
		java::nio::channels::spi::AsynchronousChannelProvider provider();
		__JniBaseClass read(java::nio::ByteBuffer arg0);
		void read(java::nio::ByteBuffer arg0, jobject arg1, __JniBaseClass arg2);
		void read(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, jobject arg3, __JniBaseClass arg4);
		void read(jarray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, jobject arg5, __JniBaseClass arg6);
		java::nio::channels::AsynchronousSocketChannel setOption(__JniBaseClass arg0, jobject arg1);
		java::nio::channels::AsynchronousSocketChannel shutdownInput();
		java::nio::channels::AsynchronousSocketChannel shutdownOutput();
		__JniBaseClass write(java::nio::ByteBuffer arg0);
		void write(java::nio::ByteBuffer arg0, jobject arg1, __JniBaseClass arg2);
		void write(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, jobject arg3, __JniBaseClass arg4);
		void write(jarray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, jobject arg5, __JniBaseClass arg6);
	};
} // namespace java::nio::channels
