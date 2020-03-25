#pragma once

#ifndef JAVA_LANG_NULLPOINTEREXCEPTION
#define JAVA_LANG_NULLPOINTEREXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class NullPointerException : public __jni_impl::java::lang::RuntimeException
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
	void NullPointerException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NullPointerException",
			"()V");
	}
	void NullPointerException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NullPointerException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class NullPointerException : public __jni_impl::java::lang::NullPointerException
	{
	public:
		NullPointerException(QAndroidJniObject obj) { __thiz = obj; }
		NullPointerException()
		{
			__constructor();
		}
		NullPointerException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_NULLPOINTEREXCEPTION

