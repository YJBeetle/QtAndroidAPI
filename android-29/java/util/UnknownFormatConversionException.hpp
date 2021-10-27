#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class UnknownFormatConversionException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jstring getConversion();
		jstring getMessage();
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
			arg0
		);
	}
	void UnknownFormatConversionException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.UnknownFormatConversionException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring UnknownFormatConversionException::getConversion()
	{
		return __thiz.callObjectMethod(
			"getConversion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnknownFormatConversionException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
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

