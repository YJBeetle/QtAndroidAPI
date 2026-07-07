#pragma once

#include "../../../../JObject.hpp"

namespace java::lang
{
	class Void;
}
namespace java::nio::channels
{
	class AsynchronousChannelGroup;
}
namespace java::nio::channels
{
	class AsynchronousServerSocketChannel;
}
namespace java::nio::channels
{
	class AsynchronousSocketChannel;
}

namespace java::nio::channels::spi
{
	class AsynchronousChannelProvider : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AsynchronousChannelProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousChannelProvider(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::nio::channels::spi::AsynchronousChannelProvider provider();
		java::nio::channels::AsynchronousChannelGroup openAsynchronousChannelGroup(jint arg0, JObject arg1) const;
		java::nio::channels::AsynchronousChannelGroup openAsynchronousChannelGroup(JObject arg0, jint arg1) const;
		java::nio::channels::AsynchronousServerSocketChannel openAsynchronousServerSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0) const;
		java::nio::channels::AsynchronousSocketChannel openAsynchronousSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0) const;
	};
} // namespace java::nio::channels::spi

