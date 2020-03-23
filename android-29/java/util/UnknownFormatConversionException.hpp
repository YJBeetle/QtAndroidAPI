#pragma once

#ifndef JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION
#define JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION

#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class UnknownFormatConversionException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject getMessage();
		QAndroidJniObject getConversion();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void UnknownFormatConversionException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.UnknownFormatConversionException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject UnknownFormatConversionException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UnknownFormatConversionException::getConversion()
	{
		return __thiz.callObjectMethod(
			"getConversion",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class UnknownFormatConversionException : public __jni_impl::java::util::UnknownFormatConversionException
	{
	public:
		UnknownFormatConversionException(QAndroidJniObject obj) { __thiz = obj; }
		UnknownFormatConversionException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION

