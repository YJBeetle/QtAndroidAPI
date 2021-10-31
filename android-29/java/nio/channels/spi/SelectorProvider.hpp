#pragma once

#include "../../../../__JniBaseClass.hpp"

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
	class SelectorProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SelectorProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SelectorProvider(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject provider();
		QAndroidJniObject inheritedChannel();
		QAndroidJniObject openDatagramChannel();
		QAndroidJniObject openDatagramChannel(__JniBaseClass arg0);
		QAndroidJniObject openPipe();
		QAndroidJniObject openSelector();
		QAndroidJniObject openServerSocketChannel();
		QAndroidJniObject openServerSocketChannel(__JniBaseClass arg0);
		QAndroidJniObject openSocketChannel();
		QAndroidJniObject openSocketChannel(__JniBaseClass arg0);
	};
} // namespace java::nio::channels::spi

