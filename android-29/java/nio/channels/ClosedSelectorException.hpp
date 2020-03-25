#pragma once

#ifndef JAVA_NIO_CHANNELS_CLOSEDSELECTOREXCEPTION
#define JAVA_NIO_CHANNELS_CLOSEDSELECTOREXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class ClosedSelectorException : public __jni_impl::java::lang::IllegalStateException
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
	void ClosedSelectorException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ClosedSelectorException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class ClosedSelectorException : public __jni_impl::java::nio::channels::ClosedSelectorException
	{
	public:
		ClosedSelectorException(QAndroidJniObject obj) { __thiz = obj; }
		ClosedSelectorException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_CLOSEDSELECTOREXCEPTION

