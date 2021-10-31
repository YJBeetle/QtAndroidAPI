#pragma once

#include "../../../../__JniBaseClass.hpp"

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
	class AsynchronousChannelProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AsynchronousChannelProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousChannelProvider(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::spi::AsynchronousChannelProvider provider();
		java::nio::channels::AsynchronousChannelGroup openAsynchronousChannelGroup(jint arg0, __JniBaseClass arg1);
		java::nio::channels::AsynchronousChannelGroup openAsynchronousChannelGroup(__JniBaseClass arg0, jint arg1);
		java::nio::channels::AsynchronousServerSocketChannel openAsynchronousServerSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0);
		java::nio::channels::AsynchronousSocketChannel openAsynchronousSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0);
	};
} // namespace java::nio::channels::spi

