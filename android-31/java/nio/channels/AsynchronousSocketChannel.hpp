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
		java::nio::channels::AsynchronousSocketChannel bind(java::net::SocketAddress arg0) const;
		JObject connect(java::net::SocketAddress arg0) const;
		void connect(java::net::SocketAddress arg0, JObject arg1, JObject arg2) const;
		java::net::SocketAddress getLocalAddress() const;
		java::net::SocketAddress getRemoteAddress() const;
		java::nio::channels::spi::AsynchronousChannelProvider provider() const;
		JObject read(java::nio::ByteBuffer arg0) const;
		void read(java::nio::ByteBuffer arg0, JObject arg1, JObject arg2) const;
		void read(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, JObject arg3, JObject arg4) const;
		void read(JArray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, JObject arg5, JObject arg6) const;
		java::nio::channels::AsynchronousSocketChannel setOption(JObject arg0, JObject arg1) const;
		java::nio::channels::AsynchronousSocketChannel shutdownInput() const;
		java::nio::channels::AsynchronousSocketChannel shutdownOutput() const;
		JObject write(java::nio::ByteBuffer arg0) const;
		void write(java::nio::ByteBuffer arg0, JObject arg1, JObject arg2) const;
		void write(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, JObject arg3, JObject arg4) const;
		void write(JArray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, JObject arg5, JObject arg6) const;
	};
} // namespace java::nio::channels

