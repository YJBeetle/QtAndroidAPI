#pragma once

#ifndef JAVA_NIO_BUFFERUNDERFLOWEXCEPTION
#define JAVA_NIO_BUFFERUNDERFLOWEXCEPTION

#include "../lang/RuntimeException.hpp"


namespace __jni_impl::java::nio
{
	class BufferUnderflowException : public __jni_impl::java::lang::RuntimeException
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
	void BufferUnderflowException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.BufferUnderflowException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class BufferUnderflowException : public __jni_impl::java::nio::BufferUnderflowException
	{
	public:
		BufferUnderflowException(QAndroidJniObject obj) { __thiz = obj; }
		BufferUnderflowException()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_BUFFERUNDERFLOWEXCEPTION

