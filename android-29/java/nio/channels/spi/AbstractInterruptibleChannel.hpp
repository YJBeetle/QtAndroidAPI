#pragma once

#ifndef JAVA_NIO_CHANNELS_SPI_ABSTRACTINTERRUPTIBLECHANNEL
#define JAVA_NIO_CHANNELS_SPI_ABSTRACTINTERRUPTIBLECHANNEL

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::java::nio::channels::spi
{
	class AbstractInterruptibleChannel : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isOpen();
		void close();
	};
} // namespace __jni_impl::java::nio::channels::spi

#include "../../../lang/Thread.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	// Fields
	
	// Constructors
	void AbstractInterruptibleChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.spi.AbstractInterruptibleChannel",
			"(V)V");
	}
	
	// Methods
	jboolean AbstractInterruptibleChannel::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z");
	}
	void AbstractInterruptibleChannel::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
} // namespace __jni_impl::java::nio::channels::spi

namespace java::nio::channels::spi
{
	class AbstractInterruptibleChannel : public __jni_impl::java::nio::channels::spi::AbstractInterruptibleChannel
	{
	public:
		AbstractInterruptibleChannel(QAndroidJniObject obj) { __thiz = obj; }
		AbstractInterruptibleChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels::spi

#endif // JAVA_NIO_CHANNELS_SPI_ABSTRACTINTERRUPTIBLECHANNEL

