#pragma once

#ifndef JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER
#define JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::nio::channels
{
	class AsynchronousChannelGroup;
}
namespace __jni_impl::java::nio::channels
{
	class AsynchronousServerSocketChannel;
}
namespace __jni_impl::java::nio::channels
{
	class AsynchronousSocketChannel;
}

namespace __jni_impl::java::nio::channels::spi
{
	class AsynchronousChannelProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject provider();
		QAndroidJniObject openAsynchronousChannelGroup(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject openAsynchronousChannelGroup(jint arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject openAsynchronousServerSocketChannel(__jni_impl::java::nio::channels::AsynchronousChannelGroup arg0);
		QAndroidJniObject openAsynchronousSocketChannel(__jni_impl::java::nio::channels::AsynchronousChannelGroup arg0);
	};
} // namespace __jni_impl::java::nio::channels::spi

#include "../../../lang/Void.hpp"
#include "../AsynchronousChannelGroup.hpp"
#include "../AsynchronousServerSocketChannel.hpp"
#include "../AsynchronousSocketChannel.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	// Fields
	
	// Constructors
	void AsynchronousChannelProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.spi.AsynchronousChannelProvider",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AsynchronousChannelProvider::provider()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.spi.AsynchronousChannelProvider",
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	QAndroidJniObject AsynchronousChannelProvider::openAsynchronousChannelGroup(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"openAsynchronousChannelGroup",
			"(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousChannelProvider::openAsynchronousChannelGroup(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"openAsynchronousChannelGroup",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousChannelProvider::openAsynchronousServerSocketChannel(__jni_impl::java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return __thiz.callObjectMethod(
			"openAsynchronousServerSocketChannel",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousChannelProvider::openAsynchronousSocketChannel(__jni_impl::java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return __thiz.callObjectMethod(
			"openAsynchronousSocketChannel",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::nio::channels::spi

namespace java::nio::channels::spi
{
	class AsynchronousChannelProvider : public __jni_impl::java::nio::channels::spi::AsynchronousChannelProvider
	{
	public:
		AsynchronousChannelProvider(QAndroidJniObject obj) { __thiz = obj; }
		AsynchronousChannelProvider()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels::spi

#endif // JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER

