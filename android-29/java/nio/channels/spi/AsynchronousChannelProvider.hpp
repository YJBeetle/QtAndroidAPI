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
		
		AsynchronousChannelProvider(QAndroidJniObject obj);
		// Constructors
		AsynchronousChannelProvider() = default;
		
		// Methods
		static QAndroidJniObject provider();
		QAndroidJniObject openAsynchronousChannelGroup(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject openAsynchronousChannelGroup(__JniBaseClass arg0, jint arg1);
		QAndroidJniObject openAsynchronousServerSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0);
		QAndroidJniObject openAsynchronousSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0);
	};
} // namespace java::nio::channels::spi

