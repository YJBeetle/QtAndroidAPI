#pragma once

#ifndef JAVA_NIO_CHANNELS_ILLEGALSELECTOREXCEPTION
#define JAVA_NIO_CHANNELS_ILLEGALSELECTOREXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::nio::channels
{
	class IllegalSelectorException : public __jni_impl::java::lang::IllegalArgumentException
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
	void IllegalSelectorException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.IllegalSelectorException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class IllegalSelectorException : public __jni_impl::java::nio::channels::IllegalSelectorException
	{
	public:
		IllegalSelectorException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalSelectorException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_ILLEGALSELECTOREXCEPTION

