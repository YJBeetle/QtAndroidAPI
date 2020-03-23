#pragma once

#ifndef JAVA_NIO_CHANNELS_ACCEPTPENDINGEXCEPTION
#define JAVA_NIO_CHANNELS_ACCEPTPENDINGEXCEPTION

#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class AcceptPendingException : public __jni_impl::java::lang::IllegalStateException
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
	void AcceptPendingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.AcceptPendingException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class AcceptPendingException : public __jni_impl::java::nio::channels::AcceptPendingException
	{
	public:
		AcceptPendingException(QAndroidJniObject obj) { __thiz = obj; }
		AcceptPendingException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_ACCEPTPENDINGEXCEPTION

