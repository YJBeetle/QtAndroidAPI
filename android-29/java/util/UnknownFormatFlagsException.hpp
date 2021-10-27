#pragma once

#ifndef JAVA_UTIL_UNKNOWNFORMATFLAGSEXCEPTION
#define JAVA_UTIL_UNKNOWNFORMATFLAGSEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class UnknownFormatFlagsException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jstring getFlags();
		jstring getMessage();
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
			arg0
		);
	}
	void UnknownFormatFlagsException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.UnknownFormatFlagsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring UnknownFormatFlagsException::getFlags()
	{
		return __thiz.callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnknownFormatFlagsException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
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

