#pragma once

#ifndef JAVA_UTIL_NOSUCHELEMENTEXCEPTION
#define JAVA_UTIL_NOSUCHELEMENTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace __jni_impl::java::util
{
	class NoSuchElementException : public __jni_impl::java::lang::RuntimeException
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
	void NoSuchElementException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"()V");
	}
	void NoSuchElementException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::util

namespace java::util
{
	class NoSuchElementException : public __jni_impl::java::util::NoSuchElementException
	{
	public:
		NoSuchElementException(QAndroidJniObject obj) { __thiz = obj; }
		NoSuchElementException()
		{
			__constructor();
		}
		NoSuchElementException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_NOSUCHELEMENTEXCEPTION

