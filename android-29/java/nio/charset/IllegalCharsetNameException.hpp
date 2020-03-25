#pragma once

#ifndef JAVA_NIO_CHARSET_ILLEGALCHARSETNAMEEXCEPTION
#define JAVA_NIO_CHARSET_ILLEGALCHARSETNAMEEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::nio::charset
{
	class IllegalCharsetNameException : public __jni_impl::java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject getCharsetName();
	};
} // namespace __jni_impl::java::nio::charset


namespace __jni_impl::java::nio::charset
{
	// Fields
	
	// Constructors
	void IllegalCharsetNameException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.IllegalCharsetNameException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject IllegalCharsetNameException::getCharsetName()
	{
		return __thiz.callObjectMethod(
			"getCharsetName",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class IllegalCharsetNameException : public __jni_impl::java::nio::charset::IllegalCharsetNameException
	{
	public:
		IllegalCharsetNameException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalCharsetNameException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::charset

#endif // JAVA_NIO_CHARSET_ILLEGALCHARSETNAMEEXCEPTION

