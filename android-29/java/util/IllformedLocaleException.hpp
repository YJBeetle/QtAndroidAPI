#pragma once

#ifndef JAVA_UTIL_ILLFORMEDLOCALEEXCEPTION
#define JAVA_UTIL_ILLFORMEDLOCALEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace __jni_impl::java::util
{
	class IllformedLocaleException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
		jint getErrorIndex();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void IllformedLocaleException::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void IllformedLocaleException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void IllformedLocaleException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.IllformedLocaleException",
			"()V");
	}
	
	// Methods
	jint IllformedLocaleException::getErrorIndex()
	{
		return __thiz.callMethod<jint>(
			"getErrorIndex",
			"()I");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class IllformedLocaleException : public __jni_impl::java::util::IllformedLocaleException
	{
	public:
		IllformedLocaleException(QAndroidJniObject obj) { __thiz = obj; }
		IllformedLocaleException(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		IllformedLocaleException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		IllformedLocaleException()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ILLFORMEDLOCALEEXCEPTION

