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
		static QAndroidJniObject open();
		static QAndroidJniObject open(java::nio::channels::AsynchronousChannelGroup arg0);
		QAndroidJniObject bind(java::net::SocketAddress arg0);
		QAndroidJniObject connect(java::net::SocketAddress arg0);
		void connect(java::net::SocketAddress arg0, jobject arg1, __JniBaseClass arg2);
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject getRemoteAddress();
		QAndroidJniObject provider();
		QAndroidJniObject read(java::nio::ByteBuffer arg0);
		void read(java::nio::ByteBuffer arg0, jobject arg1, __JniBaseClass arg2);
		void read(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, jobject arg3, __JniBaseClass arg4);
		void read(jarray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, jobject arg5, __JniBaseClass arg6);
		QAndroidJniObject setOption(__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject shutdownInput();
		QAndroidJniObject shutdownOutput();
		QAndroidJniObject write(java::nio::ByteBuffer arg0);
		void write(java::nio::ByteBuffer arg0, jobject arg1, __JniBaseClass arg2);
		void write(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, jobject arg3, __JniBaseClass arg4);
		void write(jarray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, jobject arg5, __JniBaseClass arg6);
	};
} // namespace java::nio::channels

