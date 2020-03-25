#pragma once

#ifndef JAVA_LANG_ILLEGALACCESSEXCEPTION
#define JAVA_LANG_ILLEGALACCESSEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "ReflectiveOperationException.hpp"


namespace __jni_impl::java::lang
{
	class IllegalAccessException : public __jni_impl::java::lang::ReflectiveOperationException
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
	void IllegalAccessException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessException",
			"()V");
	}
	void IllegalAccessException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class IllegalAccessException : public __jni_impl::java::lang::IllegalAccessException
	{
	public:
		IllegalAccessException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalAccessException()
		{
			__constructor();
		}
		IllegalAccessException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ILLEGALACCESSEXCEPTION

