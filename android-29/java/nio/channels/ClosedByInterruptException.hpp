#pragma once

#ifndef JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION
#define JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION

#include "AsynchronousCloseException.hpp"


namespace __jni_impl::java::nio::channels
{
	class ClosedByInterruptException : public __jni_impl::java::nio::channels::AsynchronousCloseException
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
	void ClosedByInterruptException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ClosedByInterruptException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class ClosedByInterruptException : public __jni_impl::java::nio::channels::ClosedByInterruptException
	{
	public:
		ClosedByInterruptException(QAndroidJniObject obj) { __thiz = obj; }
		ClosedByInterruptException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION

