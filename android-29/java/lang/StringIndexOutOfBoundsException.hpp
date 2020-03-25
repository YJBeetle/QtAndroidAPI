#pragma once

#ifndef JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION
#define JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"
#include "IndexOutOfBoundsException.hpp"


namespace __jni_impl::java::lang
{
	class StringIndexOutOfBoundsException : public __jni_impl::java::lang::IndexOutOfBoundsException
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
	void StringIndexOutOfBoundsException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringIndexOutOfBoundsException",
			"()V");
	}
	void StringIndexOutOfBoundsException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void StringIndexOutOfBoundsException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringIndexOutOfBoundsException",
			"(I)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class StringIndexOutOfBoundsException : public __jni_impl::java::lang::StringIndexOutOfBoundsException
	{
	public:
		StringIndexOutOfBoundsException(QAndroidJniObject obj) { __thiz = obj; }
		StringIndexOutOfBoundsException()
		{
			__constructor();
		}
		StringIndexOutOfBoundsException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		StringIndexOutOfBoundsException(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION

