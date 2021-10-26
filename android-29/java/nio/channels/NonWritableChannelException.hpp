#pragma once

#ifndef JAVA_NIO_CHANNELS_NONWRITABLECHANNELEXCEPTION
#define JAVA_NIO_CHANNELS_NONWRITABLECHANNELEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class NonWritableChannelException : public __jni_impl::java::lang::IllegalStateException
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
	void NonWritableChannelException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.NonWritableChannelException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class NonWritableChannelException : public __jni_impl::java::nio::channels::NonWritableChannelException
	{
	public:
		NonWritableChannelException(QAndroidJniObject obj) { __thiz = obj; }
		NonWritableChannelException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_NONWRITABLECHANNELEXCEPTION

