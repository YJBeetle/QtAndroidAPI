#pragma once

#ifndef JAVA_UTIL_DUPLICATEFORMATFLAGSEXCEPTION
#define JAVA_UTIL_DUPLICATEFORMATFLAGSEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class DuplicateFormatFlagsException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jstring getMessage();
		jstring getFlags();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void DuplicateFormatFlagsException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.DuplicateFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DuplicateFormatFlagsException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.DuplicateFormatFlagsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring DuplicateFormatFlagsException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DuplicateFormatFlagsException::getFlags()
	{
		return __thiz.callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class DuplicateFormatFlagsException : public __jni_impl::java::util::DuplicateFormatFlagsException
	{
	public:
		DuplicateFormatFlagsException(QAndroidJniObject obj) { __thiz = obj; }
		DuplicateFormatFlagsException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_DUPLICATEFORMATFLAGSEXCEPTION

