#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class IllegalFormatFlagsException : public __jni_impl::java::util::IllegalFormatException
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
	void IllegalFormatFlagsException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IllegalFormatFlagsException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatFlagsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring IllegalFormatFlagsException::getFlags()
	{
		return __thiz.callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IllegalFormatFlagsException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class IllegalFormatFlagsException : public __jni_impl::java::util::IllegalFormatFlagsException
	{
	public:
		IllegalFormatFlagsException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalFormatFlagsException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

