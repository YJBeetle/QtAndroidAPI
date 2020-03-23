#pragma once

#ifndef JAVA_NIO_CHANNELS_CANCELLEDKEYEXCEPTION
#define JAVA_NIO_CHANNELS_CANCELLEDKEYEXCEPTION

#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class CancelledKeyException : public __jni_impl::java::lang::IllegalStateException
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
	void CancelledKeyException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.CancelledKeyException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class CancelledKeyException : public __jni_impl::java::nio::channels::CancelledKeyException
	{
	public:
		CancelledKeyException(QAndroidJniObject obj) { __thiz = obj; }
		CancelledKeyException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_CANCELLEDKEYEXCEPTION

