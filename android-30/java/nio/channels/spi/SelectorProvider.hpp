#pragma once

#include "../../../../JObject.hpp"

namespace java::lang
{
	class Void;
}
namespace java::nio::channels
{
	class DatagramChannel;
}
namespace java::nio::channels
{
	class Pipe;
}
namespace java::nio::channels
{
	class ServerSocketChannel;
}
namespace java::nio::channels
{
	class SocketChannel;
}
namespace java::nio::channels::spi
{
	class AbstractSelector;
}

namespace java::nio::channels::spi
{
	class SelectorProvider : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SelectorProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SelectorProvider(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::spi::SelectorProvider provider();
		JObject inheritedChannel();
		java::nio::channels::DatagramChannel openDatagramChannel();
		java::nio::channels::DatagramChannel openDatagramChannel(JObject arg0);
		java::nio::channels::Pipe openPipe();
		java::nio::channels::spi::AbstractSelector openSelector();
		java::nio::channels::ServerSocketChannel openServerSocketChannel();
		java::nio::channels::ServerSocketChannel openServerSocketChannel(JObject arg0);
		java::nio::channels::SocketChannel openSocketChannel();
		java::nio::channels::SocketChannel openSocketChannel(JObject arg0);
	};
} // namespace java::nio::channels::spi

