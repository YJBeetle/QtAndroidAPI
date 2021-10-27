#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class IllegalFormatConversionException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jchar arg0, jclass arg1);
		
		// Methods
		jclass getArgumentClass();
		jchar getConversion();
		jstring getMessage();
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
			arg1
		);
	}
	
	// Methods
	jclass IllegalFormatConversionException::getArgumentClass()
	{
		return __thiz.callObjectMethod(
			"getArgumentClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jchar IllegalFormatConversionException::getConversion()
	{
		return __thiz.callMethod<jchar>(
			"getConversion",
			"()C"
		);
	}
	jstring IllegalFormatConversionException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
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

