#pragma once

#ifndef JAVA_UTIL_ILLEGALFORMATCONVERSIONEXCEPTION
#define JAVA_UTIL_ILLEGALFORMATCONVERSIONEXCEPTION

#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class IllegalFormatConversionException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jchar arg0, jclass arg1);
		
		// Methods
		QAndroidJniObject getMessage();
		jchar getConversion();
		QAndroidJniObject getArgumentClass();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void IllegalFormatConversionException::__constructor(jchar arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatConversionException",
			"(CLjava/lang/Class;)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject IllegalFormatConversionException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	jchar IllegalFormatConversionException::getConversion()
	{
		return __thiz.callMethod<jchar>(
			"getConversion",
			"()C");
	}
	QAndroidJniObject IllegalFormatConversionException::getArgumentClass()
	{
		return __thiz.callObjectMethod(
			"getArgumentClass",
			"()Ljava/lang/Class;");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class IllegalFormatConversionException : public __jni_impl::java::util::IllegalFormatConversionException
	{
	public:
		IllegalFormatConversionException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalFormatConversionException(jchar arg0, jclass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ILLEGALFORMATCONVERSIONEXCEPTION

