#pragma once

#ifndef JAVA_NIO_CHANNELS_SPI_SELECTORPROVIDER
#define JAVA_NIO_CHANNELS_SPI_SELECTORPROVIDER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::nio::channels
{
	class DatagramChannel;
}
namespace __jni_impl::java::nio::channels
{
	class Pipe;
}
namespace __jni_impl::java::nio::channels::spi
{
	class AbstractSelector;
}
namespace __jni_impl::java::nio::channels
{
	class ServerSocketChannel;
}
namespace __jni_impl::java::nio::channels
{
	class SocketChannel;
}

namespace __jni_impl::java::nio::channels::spi
{
	class SelectorProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject provider();
		QAndroidJniObject inheritedChannel();
		QAndroidJniObject openDatagramChannel(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject openDatagramChannel();
		QAndroidJniObject openPipe();
		QAndroidJniObject openSelector();
		QAndroidJniObject openServerSocketChannel();
		QAndroidJniObject openSocketChannel();
	};
} // namespace __jni_impl::java::nio::channels::spi

#include "../../../lang/Void.hpp"
#include "../DatagramChannel.hpp"
#include "../Pipe.hpp"
#include "AbstractSelector.hpp"
#include "../ServerSocketChannel.hpp"
#include "../SocketChannel.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	// Fields
	
	// Constructors
	void SelectorProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.spi.SelectorProvider",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SelectorProvider::provider()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.spi.SelectorProvider",
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	QAndroidJniObject SelectorProvider::inheritedChannel()
	{
		return __thiz.callObjectMethod(
			"inheritedChannel",
			"()Ljava/nio/channels/Channel;"
		);
	}
	QAndroidJniObject SelectorProvider::openDatagramChannel(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"openDatagramChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/DatagramChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SelectorProvider::openDatagramChannel()
	{
		return __thiz.callObjectMethod(
			"openDatagramChannel",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	QAndroidJniObject SelectorProvider::openPipe()
	{
		return __thiz.callObjectMethod(
			"openPipe",
			"()Ljava/nio/channels/Pipe;"
		);
	}
	QAndroidJniObject SelectorProvider::openSelector()
	{
		return __thiz.callObjectMethod(
			"openSelector",
			"()Ljava/nio/channels/spi/AbstractSelector;"
		);
	}
	QAndroidJniObject SelectorProvider::openServerSocketChannel()
	{
		return __thiz.callObjectMethod(
			"openServerSocketChannel",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	QAndroidJniObject SelectorProvider::openSocketChannel()
	{
		return __thiz.callObjectMethod(
			"openSocketChannel",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
} // namespace __jni_impl::java::nio::channels::spi

namespace java::nio::channels::spi
{
	class SelectorProvider : public __jni_impl::java::nio::channels::spi::SelectorProvider
	{
	public:
		SelectorProvider(QAndroidJniObject obj) { __thiz = obj; }
		SelectorProvider()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels::spi

#endif // JAVA_NIO_CHANNELS_SPI_SELECTORPROVIDER

