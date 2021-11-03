#pragma once

#include "../../../JObject.hpp"

class JArray;
class JObject;
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
	class AsynchronousSocketChannel : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsynchronousSocketChannel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousSocketChannel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::AsynchronousSocketChannel open();
		static java::nio::channels::AsynchronousSocketChannel open(java::nio::channels::AsynchronousChannelGroup arg0);
		java::nio::channels::AsynchronousSocketChannel bind(java::net::SocketAddress arg0);
		JObject connect(java::net::SocketAddress arg0);
		void connect(java::net::SocketAddress arg0, JObject arg1, JObject arg2);
		java::net::SocketAddress getLocalAddress();
		java::net::SocketAddress getRemoteAddress();
		java::nio::channels::spi::AsynchronousChannelProvider provider();
		JObject read(java::nio::ByteBuffer arg0);
		void read(java::nio::ByteBuffer arg0, JObject arg1, JObject arg2);
		void read(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, JObject arg3, JObject arg4);
		void read(JArray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, JObject arg5, JObject arg6);
		java::nio::channels::AsynchronousSocketChannel setOption(JObject arg0, JObject arg1);
		java::nio::channels::AsynchronousSocketChannel shutdownInput();
		java::nio::channels::AsynchronousSocketChannel shutdownOutput();
		JObject write(java::nio::ByteBuffer arg0);
		void write(java::nio::ByteBuffer arg0, JObject arg1, JObject arg2);
		void write(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, JObject arg3, JObject arg4);
		void write(JArray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, JObject arg5, JObject arg6);
	};
} // namespace java::nio::channels

