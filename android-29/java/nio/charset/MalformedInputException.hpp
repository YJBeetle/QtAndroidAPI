#pragma once

#ifndef JAVA_NIO_CHARSET_MALFORMEDINPUTEXCEPTION
#define JAVA_NIO_CHARSET_MALFORMEDINPUTEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "CharacterCodingException.hpp"


namespace __jni_impl::java::nio::charset
{
	class MalformedInputException : public __jni_impl::java::nio::charset::CharacterCodingException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		jint getInputLength();
		jstring getMessage();
	};
} // namespace __jni_impl::java::nio::charset


namespace __jni_impl::java::nio::charset
{
	// Fields
	
	// Constructors
	void MalformedInputException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.MalformedInputException",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint MalformedInputException::getInputLength()
	{
		return __thiz.callMethod<jint>(
			"getInputLength",
			"()I"
		);
	}
	jstring MalformedInputException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class MalformedInputException : public __jni_impl::java::nio::charset::MalformedInputException
	{
	public:
		MalformedInputException(QAndroidJniObject obj) { __thiz = obj; }
		MalformedInputException(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::charset

#endif // JAVA_NIO_CHARSET_MALFORMEDINPUTEXCEPTION

