#pragma once

#ifndef JAVA_LANG_ASSERTIONERROR
#define JAVA_LANG_ASSERTIONERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"


namespace __jni_impl::java::lang
{
	class AssertionError : public __jni_impl::java::lang::Error
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jlong arg0);
		void __constructor(jfloat arg0);
		void __constructor(jdouble arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor();
		void __constructor(jobject arg0);
		void __constructor(jboolean arg0);
		void __constructor(jchar arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void AssertionError::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(I)V",
			arg0);
	}
	void AssertionError::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(J)V",
			arg0);
	}
	void AssertionError::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(F)V",
			arg0);
	}
	void AssertionError::__constructor(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(D)V",
			arg0);
	}
	void AssertionError::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void AssertionError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"()V");
	}
	void AssertionError::__constructor(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void AssertionError::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(Z)V",
			arg0);
	}
	void AssertionError::__constructor(jchar arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(C)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class AssertionError : public __jni_impl::java::lang::AssertionError
	{
	public:
		AssertionError(QAndroidJniObject obj) { __thiz = obj; }
		AssertionError(jint arg0)
		{
			__constructor(
				arg0);
		}
		AssertionError(jlong arg0)
		{
			__constructor(
				arg0);
		}
		AssertionError(jfloat arg0)
		{
			__constructor(
				arg0);
		}
		AssertionError(jdouble arg0)
		{
			__constructor(
				arg0);
		}
		AssertionError(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AssertionError()
		{
			__constructor();
		}
		AssertionError(jobject arg0)
		{
			__constructor(
				arg0);
		}
		AssertionError(jboolean arg0)
		{
			__constructor(
				arg0);
		}
		AssertionError(jchar arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ASSERTIONERROR

