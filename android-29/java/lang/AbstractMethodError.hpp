#pragma once

#ifndef JAVA_LANG_ABSTRACTMETHODERROR
#define JAVA_LANG_ABSTRACTMETHODERROR

#include "IncompatibleClassChangeError.hpp"


namespace __jni_impl::java::lang
{
	class AbstractMethodError : public __jni_impl::java::lang::IncompatibleClassChangeError
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
	void AbstractMethodError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.AbstractMethodError",
			"()V");
	}
	void AbstractMethodError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AbstractMethodError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class AbstractMethodError : public __jni_impl::java::lang::AbstractMethodError
	{
	public:
		AbstractMethodError(QAndroidJniObject obj) { __thiz = obj; }
		AbstractMethodError()
		{
			__constructor();
		}
		AbstractMethodError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ABSTRACTMETHODERROR

