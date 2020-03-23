#pragma once

#ifndef JAVA_NIO_CHANNELS_WRITEPENDINGEXCEPTION
#define JAVA_NIO_CHANNELS_WRITEPENDINGEXCEPTION

#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class WritePendingException : public __jni_impl::java::lang::IllegalStateException
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
	void WritePendingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.WritePendingException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class WritePendingException : public __jni_impl::java::nio::channels::WritePendingException
	{
	public:
		WritePendingException(QAndroidJniObject obj) { __thiz = obj; }
		WritePendingException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_WRITEPENDINGEXCEPTION

