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
		JObject inheritedChannel() const;
		java::nio::channels::DatagramChannel openDatagramChannel() const;
		java::nio::channels::DatagramChannel openDatagramChannel(JObject arg0) const;
		java::nio::channels::Pipe openPipe() const;
		java::nio::channels::spi::AbstractSelector openSelector() const;
		java::nio::channels::ServerSocketChannel openServerSocketChannel() const;
		java::nio::channels::ServerSocketChannel openServerSocketChannel(JObject arg0) const;
		java::nio::channels::SocketChannel openSocketChannel() const;
		java::nio::channels::SocketChannel openSocketChannel(JObject arg0) const;
	};
} // namespace java::nio::channels::spi

