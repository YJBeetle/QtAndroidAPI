#pragma once

#ifndef JAVA_NIO_CHANNELS_PIPE_SOURCECHANNEL
#define JAVA_NIO_CHANNELS_PIPE_SOURCECHANNEL

#include "spi/AbstractSelectableChannel.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	class SelectorProvider;
}

namespace __jni_impl::java::nio::channels
{
	class Pipe_SourceChannel : public __jni_impl::java::nio::channels::spi::AbstractSelectableChannel
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
	void Pipe_SourceChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.Pipe$SourceChannel",
			"(V)V");
	}
	
	// Methods
	jint Pipe_SourceChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I");
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class Pipe_SourceChannel : public __jni_impl::java::nio::channels::Pipe_SourceChannel
	{
	public:
		Pipe_SourceChannel(QAndroidJniObject obj) { __thiz = obj; }
		Pipe_SourceChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_PIPE_SOURCECHANNEL

