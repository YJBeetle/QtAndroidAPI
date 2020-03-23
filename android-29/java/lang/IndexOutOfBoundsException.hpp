#pragma once

#ifndef JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION
#define JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION

#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class IndexOutOfBoundsException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(jint arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void IndexOutOfBoundsException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"()V");
	}
	void IndexOutOfBoundsException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void IndexOutOfBoundsException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"(I)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class IndexOutOfBoundsException : public __jni_impl::java::lang::IndexOutOfBoundsException
	{
	public:
		IndexOutOfBoundsException(QAndroidJniObject obj) { __thiz = obj; }
		IndexOutOfBoundsException()
		{
			__constructor();
		}
		IndexOutOfBoundsException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		IndexOutOfBoundsException(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION

