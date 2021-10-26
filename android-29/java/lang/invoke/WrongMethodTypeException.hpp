#pragma once

#ifndef JAVA_LANG_INVOKE_WRONGMETHODTYPEEXCEPTION
#define JAVA_LANG_INVOKE_WRONGMETHODTYPEEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"


namespace __jni_impl::java::lang::invoke
{
	class WrongMethodTypeException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::lang::invoke


namespace __jni_impl::java::lang::invoke
{
	// Fields
	
	// Constructors
	void WrongMethodTypeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.WrongMethodTypeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WrongMethodTypeException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.WrongMethodTypeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WrongMethodTypeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.WrongMethodTypeException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang::invoke

namespace java::lang::invoke
{
	class WrongMethodTypeException : public __jni_impl::java::lang::invoke::WrongMethodTypeException
	{
	public:
		WrongMethodTypeException(QAndroidJniObject obj) { __thiz = obj; }
		WrongMethodTypeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		WrongMethodTypeException()
		{
			__constructor();
		}
	};
} // namespace java::lang::invoke

#endif // JAVA_LANG_INVOKE_WRONGMETHODTYPEEXCEPTION

