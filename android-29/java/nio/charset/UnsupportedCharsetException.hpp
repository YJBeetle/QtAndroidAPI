#pragma once

#ifndef JAVA_NIO_CHARSET_UNSUPPORTEDCHARSETEXCEPTION
#define JAVA_NIO_CHARSET_UNSUPPORTEDCHARSETEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::nio::charset
{
	class UnsupportedCharsetException : public __jni_impl::java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jstring getCharsetName();
	};
} // namespace __jni_impl::java::nio::charset


namespace __jni_impl::java::nio::charset
{
	// Fields
	
	// Constructors
	void UnsupportedCharsetException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.UnsupportedCharsetException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UnsupportedCharsetException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.UnsupportedCharsetException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring UnsupportedCharsetException::getCharsetName()
	{
		return __thiz.callObjectMethod(
			"getCharsetName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class UnsupportedCharsetException : public __jni_impl::java::nio::charset::UnsupportedCharsetException
	{
	public:
		UnsupportedCharsetException(QAndroidJniObject obj) { __thiz = obj; }
		UnsupportedCharsetException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::charset

#endif // JAVA_NIO_CHARSET_UNSUPPORTEDCHARSETEXCEPTION

