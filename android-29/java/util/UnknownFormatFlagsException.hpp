#pragma once

#ifndef JAVA_UTIL_UNKNOWNFORMATFLAGSEXCEPTION
#define JAVA_UTIL_UNKNOWNFORMATFLAGSEXCEPTION

#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class UnknownFormatFlagsException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject getMessage();
		QAndroidJniObject getFlags();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void UnknownFormatFlagsException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.UnknownFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject UnknownFormatFlagsException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UnknownFormatFlagsException::getFlags()
	{
		return __thiz.callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class UnknownFormatFlagsException : public __jni_impl::java::util::UnknownFormatFlagsException
	{
	public:
		UnknownFormatFlagsException(QAndroidJniObject obj) { __thiz = obj; }
		UnknownFormatFlagsException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_UNKNOWNFORMATFLAGSEXCEPTION

