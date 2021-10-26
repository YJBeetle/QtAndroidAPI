#pragma once

#ifndef JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION
#define JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class IllegalFormatPrecisionException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		jstring getMessage();
		jint getPrecision();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void IllegalFormatPrecisionException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatPrecisionException",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jstring IllegalFormatPrecisionException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IllegalFormatPrecisionException::getPrecision()
	{
		return __thiz.callMethod<jint>(
			"getPrecision",
			"()I"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class IllegalFormatPrecisionException : public __jni_impl::java::util::IllegalFormatPrecisionException
	{
	public:
		IllegalFormatPrecisionException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalFormatPrecisionException(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION

