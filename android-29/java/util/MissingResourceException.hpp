#pragma once

#ifndef JAVA_UTIL_MISSINGRESOURCEEXCEPTION
#define JAVA_UTIL_MISSINGRESOURCEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace __jni_impl::java::util
{
	class MissingResourceException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		jstring getKey();
		jstring getClassName();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void MissingResourceException::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.MissingResourceException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jstring MissingResourceException::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MissingResourceException::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class MissingResourceException : public __jni_impl::java::util::MissingResourceException
	{
	public:
		MissingResourceException(QAndroidJniObject obj) { __thiz = obj; }
		MissingResourceException(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_MISSINGRESOURCEEXCEPTION

