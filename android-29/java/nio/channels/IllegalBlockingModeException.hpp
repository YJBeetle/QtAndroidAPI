#pragma once

#ifndef JAVA_NIO_CHANNELS_ILLEGALBLOCKINGMODEEXCEPTION
#define JAVA_NIO_CHANNELS_ILLEGALBLOCKINGMODEEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class IllegalBlockingModeException : public __jni_impl::java::lang::IllegalStateException
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
	void IllegalBlockingModeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.IllegalBlockingModeException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class IllegalBlockingModeException : public __jni_impl::java::nio::channels::IllegalBlockingModeException
	{
	public:
		IllegalBlockingModeException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalBlockingModeException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_ILLEGALBLOCKINGMODEEXCEPTION

