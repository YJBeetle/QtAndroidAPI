#pragma once

#ifndef JAVA_NIO_INVALIDMARKEXCEPTION
#define JAVA_NIO_INVALIDMARKEXCEPTION

#include "../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio
{
	class InvalidMarkException : public __jni_impl::java::lang::IllegalStateException
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
	void InvalidMarkException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.InvalidMarkException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class InvalidMarkException : public __jni_impl::java::nio::InvalidMarkException
	{
	public:
		InvalidMarkException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidMarkException()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_INVALIDMARKEXCEPTION

