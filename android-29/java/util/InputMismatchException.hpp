#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "./NoSuchElementException.hpp"


namespace __jni_impl::java::util
{
	class InputMismatchException : public __jni_impl::java::util::NoSuchElementException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
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
			"()V"
		);
	}
	void InputMismatchException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.InputMismatchException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputMismatchException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.InputMismatchException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
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

