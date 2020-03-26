#pragma once

#ifndef JAVA_UTIL_MISSINGFORMATARGUMENTEXCEPTION
#define JAVA_UTIL_MISSINGFORMATARGUMENTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class MissingFormatArgumentException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		jstring getMessage();
		jstring getFormatSpecifier();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void MissingFormatArgumentException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.MissingFormatArgumentException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jstring MissingFormatArgumentException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MissingFormatArgumentException::getFormatSpecifier()
	{
		return __thiz.callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class MissingFormatArgumentException : public __jni_impl::java::util::MissingFormatArgumentException
	{
	public:
		MissingFormatArgumentException(QAndroidJniObject obj) { __thiz = obj; }
		MissingFormatArgumentException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_MISSINGFORMATARGUMENTEXCEPTION

