#pragma once

#ifndef JAVA_NIO_CHANNELS_PIPE_SINKCHANNEL
#define JAVA_NIO_CHANNELS_PIPE_SINKCHANNEL

#include "../../../__JniBaseClass.hpp"
#include "spi/AbstractInterruptibleChannel.hpp"
#include "SelectableChannel.hpp"
#include "spi/AbstractSelectableChannel.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	class SelectorProvider;
}

namespace __jni_impl::java::nio::channels
{
	class Pipe_SinkChannel : public __jni_impl::java::nio::channels::spi::AbstractSelectableChannel
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint validOps();
	};
} // namespace __jni_impl::java::nio::channels

#include "spi/SelectorProvider.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void Pipe_SinkChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.Pipe$SinkChannel",
			"(V)V");
	}
	
	// Methods
	jint Pipe_SinkChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class Pipe_SinkChannel : public __jni_impl::java::nio::channels::Pipe_SinkChannel
	{
	public:
		Pipe_SinkChannel(QAndroidJniObject obj) { __thiz = obj; }
		Pipe_SinkChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_PIPE_SINKCHANNEL

