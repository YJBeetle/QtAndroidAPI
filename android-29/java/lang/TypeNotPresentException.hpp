#pragma once

#ifndef JAVA_LANG_TYPENOTPRESENTEXCEPTION
#define JAVA_LANG_TYPENOTPRESENTEXCEPTION

#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class TypeNotPresentException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jthrowable arg1);
		
		// Methods
		QAndroidJniObject typeName();
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void TypeNotPresentException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.TypeNotPresentException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject TypeNotPresentException::typeName()
	{
		return __thiz.callObjectMethod(
			"typeName",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class TypeNotPresentException : public __jni_impl::java::lang::TypeNotPresentException
	{
	public:
		TypeNotPresentException(QAndroidJniObject obj) { __thiz = obj; }
		TypeNotPresentException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_TYPENOTPRESENTEXCEPTION

