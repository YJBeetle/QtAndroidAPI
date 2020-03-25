#pragma once

#ifndef JAVA_UTIL_FORMATFLAGSCONVERSIONMISMATCHEXCEPTION
#define JAVA_UTIL_FORMATFLAGSCONVERSIONMISMATCHEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class FormatFlagsConversionMismatchException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jchar arg1);
		
		// Methods
		QAndroidJniObject getMessage();
		QAndroidJniObject getFlags();
		jchar getConversion();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void FormatFlagsConversionMismatchException::__constructor(jstring arg0, jchar arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.FormatFlagsConversionMismatchException",
			"(Ljava/lang/String;C)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject FormatFlagsConversionMismatchException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject FormatFlagsConversionMismatchException::getFlags()
	{
		return __thiz.callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;");
	}
	jchar FormatFlagsConversionMismatchException::getConversion()
	{
		return __thiz.callMethod<jchar>(
			"getConversion",
			"()C");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class FormatFlagsConversionMismatchException : public __jni_impl::java::util::FormatFlagsConversionMismatchException
	{
	public:
		FormatFlagsConversionMismatchException(QAndroidJniObject obj) { __thiz = obj; }
		FormatFlagsConversionMismatchException(jstring arg0, jchar arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_FORMATFLAGSCONVERSIONMISMATCHEXCEPTION

