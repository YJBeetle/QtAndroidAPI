#pragma once

#ifndef JAVA_NIO_CHANNELS_ASYNCHRONOUSCLOSEEXCEPTION
#define JAVA_NIO_CHANNELS_ASYNCHRONOUSCLOSEEXCEPTION

#include "ClosedChannelException.hpp"


namespace __jni_impl::java::nio::channels
{
	class AsynchronousCloseException : public __jni_impl::java::nio::channels::ClosedChannelException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::nio::channels


namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void AsynchronousCloseException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.AsynchronousCloseException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class AsynchronousCloseException : public __jni_impl::java::nio::channels::AsynchronousCloseException
	{
	public:
		AsynchronousCloseException(QAndroidJniObject obj) { __thiz = obj; }
		AsynchronousCloseException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_ASYNCHRONOUSCLOSEEXCEPTION

