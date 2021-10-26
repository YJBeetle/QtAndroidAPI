#pragma once

#ifndef JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION
#define JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"
#include "IndexOutOfBoundsException.hpp"


namespace __jni_impl::java::lang
{
	class ArrayIndexOutOfBoundsException : public __jni_impl::java::lang::IndexOutOfBoundsException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jint arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void ArrayIndexOutOfBoundsException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayIndexOutOfBoundsException",
			"()V"
		);
	}
	void ArrayIndexOutOfBoundsException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ArrayIndexOutOfBoundsException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ArrayIndexOutOfBoundsException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayIndexOutOfBoundsException",
			"(I)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ArrayIndexOutOfBoundsException : public __jni_impl::java::lang::ArrayIndexOutOfBoundsException
	{
	public:
		ArrayIndexOutOfBoundsException(QAndroidJniObject obj) { __thiz = obj; }
		ArrayIndexOutOfBoundsException()
		{
			__constructor();
		}
		ArrayIndexOutOfBoundsException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ArrayIndexOutOfBoundsException(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION

