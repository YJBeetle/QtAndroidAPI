#pragma once

#ifndef JAVA_NIO_CHANNELS_NOCONNECTIONPENDINGEXCEPTION
#define JAVA_NIO_CHANNELS_NOCONNECTIONPENDINGEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class NoConnectionPendingException : public __jni_impl::java::lang::IllegalStateException
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
	void NoConnectionPendingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.NoConnectionPendingException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class NoConnectionPendingException : public __jni_impl::java::nio::channels::NoConnectionPendingException
	{
	public:
		NoConnectionPendingException(QAndroidJniObject obj) { __thiz = obj; }
		NoConnectionPendingException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_NOCONNECTIONPENDINGEXCEPTION

