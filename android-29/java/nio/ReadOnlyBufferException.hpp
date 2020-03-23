#pragma once

#ifndef JAVA_NIO_READONLYBUFFEREXCEPTION
#define JAVA_NIO_READONLYBUFFEREXCEPTION

#include "../lang/UnsupportedOperationException.hpp"


namespace __jni_impl::java::nio
{
	class ReadOnlyBufferException : public __jni_impl::java::lang::UnsupportedOperationException
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
	void ReadOnlyBufferException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.ReadOnlyBufferException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class ReadOnlyBufferException : public __jni_impl::java::nio::ReadOnlyBufferException
	{
	public:
		ReadOnlyBufferException(QAndroidJniObject obj) { __thiz = obj; }
		ReadOnlyBufferException()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_READONLYBUFFEREXCEPTION

