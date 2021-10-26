#pragma once

#ifndef JAVA_LANG_REFLECT_MALFORMEDPARAMETERIZEDTYPEEXCEPTION
#define JAVA_LANG_REFLECT_MALFORMEDPARAMETERIZEDTYPEEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"


namespace __jni_impl::java::lang::reflect
{
	class MalformedParameterizedTypeException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang::reflect


namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void MalformedParameterizedTypeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"()V"
		);
	}
	void MalformedParameterizedTypeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MalformedParameterizedTypeException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class MalformedParameterizedTypeException : public __jni_impl::java::lang::reflect::MalformedParameterizedTypeException
	{
	public:
		MalformedParameterizedTypeException(QAndroidJniObject obj) { __thiz = obj; }
		MalformedParameterizedTypeException()
		{
			__constructor();
		}
		MalformedParameterizedTypeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang::reflect

#endif // JAVA_LANG_REFLECT_MALFORMEDPARAMETERIZEDTYPEEXCEPTION

