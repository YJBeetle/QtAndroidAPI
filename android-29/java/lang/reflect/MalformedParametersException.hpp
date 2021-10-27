#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"


namespace __jni_impl::java::lang::reflect
{
	class MalformedParametersException : public __jni_impl::java::lang::RuntimeException
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
	void MalformedParametersException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParametersException",
			"()V"
		);
	}
	void MalformedParametersException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParametersException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MalformedParametersException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParametersException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class MalformedParametersException : public __jni_impl::java::lang::reflect::MalformedParametersException
	{
	public:
		MalformedParametersException(QAndroidJniObject obj) { __thiz = obj; }
		MalformedParametersException()
		{
			__constructor();
		}
		MalformedParametersException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang::reflect

