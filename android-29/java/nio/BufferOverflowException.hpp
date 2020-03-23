#pragma once

#ifndef JAVA_NIO_BUFFEROVERFLOWEXCEPTION
#define JAVA_NIO_BUFFEROVERFLOWEXCEPTION

#include "../lang/RuntimeException.hpp"


namespace __jni_impl::java::nio
{
	class BufferOverflowException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::nio


namespace __jni_impl::java::nio
{
	// Fields
	
	// Constructors
	void BufferOverflowException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.BufferOverflowException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class BufferOverflowException : public __jni_impl::java::nio::BufferOverflowException
	{
	public:
		BufferOverflowException(QAndroidJniObject obj) { __thiz = obj; }
		BufferOverflowException()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_BUFFEROVERFLOWEXCEPTION

