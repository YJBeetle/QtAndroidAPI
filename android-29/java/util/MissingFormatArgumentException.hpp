#pragma once

#ifndef JAVA_UTIL_MISSINGFORMATARGUMENTEXCEPTION
#define JAVA_UTIL_MISSINGFORMATARGUMENTEXCEPTION

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
		QAndroidJniObject getMessage();
		QAndroidJniObject getFormatSpecifier();
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
	QAndroidJniObject MissingFormatArgumentException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MissingFormatArgumentException::getFormatSpecifier()
	{
		return __thiz.callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;");
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

