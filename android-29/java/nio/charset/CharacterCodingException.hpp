#pragma once

#ifndef JAVA_NIO_CHARSET_CHARACTERCODINGEXCEPTION
#define JAVA_NIO_CHARSET_CHARACTERCODINGEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace __jni_impl::java::nio::charset
{
	class CharacterCodingException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::nio::charset


namespace __jni_impl::java::nio::charset
{
	// Fields
	
	// Constructors
	void CharacterCodingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.CharacterCodingException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class CharacterCodingException : public __jni_impl::java::nio::charset::CharacterCodingException
	{
	public:
		CharacterCodingException(QAndroidJniObject obj) { __thiz = obj; }
		CharacterCodingException()
		{
			__constructor();
		}
	};
} // namespace java::nio::charset

#endif // JAVA_NIO_CHARSET_CHARACTERCODINGEXCEPTION

