#pragma once

#ifndef JAVA_LANG_NEGATIVEARRAYSIZEEXCEPTION
#define JAVA_LANG_NEGATIVEARRAYSIZEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class NegativeArraySizeException : public __jni_impl::java::lang::RuntimeException
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
	void NegativeArraySizeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NegativeArraySizeException",
			"()V");
	}
	void NegativeArraySizeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NegativeArraySizeException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class NegativeArraySizeException : public __jni_impl::java::lang::NegativeArraySizeException
	{
	public:
		NegativeArraySizeException(QAndroidJniObject obj) { __thiz = obj; }
		NegativeArraySizeException()
		{
			__constructor();
		}
		NegativeArraySizeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_NEGATIVEARRAYSIZEEXCEPTION

