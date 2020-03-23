#pragma once

#ifndef JAVA_UTIL_INPUTMISMATCHEXCEPTION
#define JAVA_UTIL_INPUTMISMATCHEXCEPTION

#include "NoSuchElementException.hpp"


namespace __jni_impl::java::util
{
	class InputMismatchException : public __jni_impl::java::util::NoSuchElementException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void InputMismatchException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.InputMismatchException",
			"()V");
	}
	void InputMismatchException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.InputMismatchException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::util

namespace java::util
{
	class InputMismatchException : public __jni_impl::java::util::InputMismatchException
	{
	public:
		InputMismatchException(QAndroidJniObject obj) { __thiz = obj; }
		InputMismatchException()
		{
			__constructor();
		}
		InputMismatchException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_INPUTMISMATCHEXCEPTION

