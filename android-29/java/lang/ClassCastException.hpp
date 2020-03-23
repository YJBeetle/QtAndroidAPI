#pragma once

#ifndef JAVA_LANG_CLASSCASTEXCEPTION
#define JAVA_LANG_CLASSCASTEXCEPTION

#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class ClassCastException : public __jni_impl::java::lang::RuntimeException
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
	void ClassCastException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCastException",
			"()V");
	}
	void ClassCastException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCastException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ClassCastException : public __jni_impl::java::lang::ClassCastException
	{
	public:
		ClassCastException(QAndroidJniObject obj) { __thiz = obj; }
		ClassCastException()
		{
			__constructor();
		}
		ClassCastException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_CLASSCASTEXCEPTION

