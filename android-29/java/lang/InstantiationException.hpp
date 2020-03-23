#pragma once

#ifndef JAVA_LANG_INSTANTIATIONEXCEPTION
#define JAVA_LANG_INSTANTIATIONEXCEPTION

#include "ReflectiveOperationException.hpp"


namespace __jni_impl::java::lang
{
	class InstantiationException : public __jni_impl::java::lang::ReflectiveOperationException
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
	void InstantiationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.InstantiationException",
			"()V");
	}
	void InstantiationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InstantiationException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class InstantiationException : public __jni_impl::java::lang::InstantiationException
	{
	public:
		InstantiationException(QAndroidJniObject obj) { __thiz = obj; }
		InstantiationException()
		{
			__constructor();
		}
		InstantiationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_INSTANTIATIONEXCEPTION

