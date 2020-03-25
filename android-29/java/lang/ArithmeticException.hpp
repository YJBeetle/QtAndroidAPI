#pragma once

#ifndef JAVA_LANG_ARITHMETICEXCEPTION
#define JAVA_LANG_ARITHMETICEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class ArithmeticException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void ArithmeticException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArithmeticException",
			"()V");
	}
	void ArithmeticException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArithmeticException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ArithmeticException : public __jni_impl::java::lang::ArithmeticException
	{
	public:
		ArithmeticException(QAndroidJniObject obj) { __thiz = obj; }
		ArithmeticException()
		{
			__constructor();
		}
		ArithmeticException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ARITHMETICEXCEPTION

