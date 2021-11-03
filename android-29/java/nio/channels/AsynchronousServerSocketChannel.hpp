#pragma once

#include "../../../JObject.hpp"

class JObject;
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
	class AsynchronousServerSocketChannel : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsynchronousServerSocketChannel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousServerSocketChannel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::AsynchronousServerSocketChannel open();
		static java::nio::channels::AsynchronousServerSocketChannel open(java::nio::channels::AsynchronousChannelGroup arg0);
		JObject accept() const;
		void accept(JObject arg0, JObject arg1) const;
		java::nio::channels::AsynchronousServerSocketChannel bind(java::net::SocketAddress arg0) const;
		java::nio::channels::AsynchronousServerSocketChannel bind(java::net::SocketAddress arg0, jint arg1) const;
		java::net::SocketAddress getLocalAddress() const;
		java::nio::channels::spi::AsynchronousChannelProvider provider() const;
		java::nio::channels::AsynchronousServerSocketChannel setOption(JObject arg0, JObject arg1) const;
	};
} // namespace java::nio::channels

