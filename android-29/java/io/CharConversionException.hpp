#pragma once

#ifndef JAVA_IO_CHARCONVERSIONEXCEPTION
#define JAVA_IO_CHARCONVERSIONEXCEPTION

#include "IOException.hpp"


namespace __jni_impl::java::io
{
	class CharConversionException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void CharConversionException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.CharConversionException",
			"()V");
	}
	void CharConversionException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.CharConversionException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class CharConversionException : public __jni_impl::java::io::CharConversionException
	{
	public:
		CharConversionException(QAndroidJniObject obj) { __thiz = obj; }
		CharConversionException()
		{
			__constructor();
		}
		CharConversionException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_CHARCONVERSIONEXCEPTION

