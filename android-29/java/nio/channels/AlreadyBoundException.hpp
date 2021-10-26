#pragma once

#ifndef JAVA_NIO_CHANNELS_ALREADYBOUNDEXCEPTION
#define JAVA_NIO_CHANNELS_ALREADYBOUNDEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class AlreadyBoundException : public __jni_impl::java::lang::IllegalStateException
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
	void AlreadyBoundException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.AlreadyBoundException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class AlreadyBoundException : public __jni_impl::java::nio::channels::AlreadyBoundException
	{
	public:
		AlreadyBoundException(QAndroidJniObject obj) { __thiz = obj; }
		AlreadyBoundException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_ALREADYBOUNDEXCEPTION

