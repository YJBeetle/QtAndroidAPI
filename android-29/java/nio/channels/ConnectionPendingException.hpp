#pragma once

#ifndef JAVA_NIO_CHANNELS_CONNECTIONPENDINGEXCEPTION
#define JAVA_NIO_CHANNELS_CONNECTIONPENDINGEXCEPTION

#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class ConnectionPendingException : public __jni_impl::java::lang::IllegalStateException
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
	void ConnectionPendingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ConnectionPendingException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class ConnectionPendingException : public __jni_impl::java::nio::channels::ConnectionPendingException
	{
	public:
		ConnectionPendingException(QAndroidJniObject obj) { __thiz = obj; }
		ConnectionPendingException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_CONNECTIONPENDINGEXCEPTION

