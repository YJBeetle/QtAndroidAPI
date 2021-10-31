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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsynchronousChannelProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousChannelProvider(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject provider();
		QAndroidJniObject openAsynchronousChannelGroup(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject openAsynchronousChannelGroup(__JniBaseClass arg0, jint arg1);
		QAndroidJniObject openAsynchronousServerSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0);
		QAndroidJniObject openAsynchronousSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0);
	};
} // namespace java::nio::channels::spi

