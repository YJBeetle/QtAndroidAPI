#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "CharacterCodingException.hpp"


namespace __jni_impl::java::nio::charset
{
	class UnmappableCharacterException : public __jni_impl::java::nio::charset::CharacterCodingException
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
	void UnmappableCharacterException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.UnmappableCharacterException",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint UnmappableCharacterException::getInputLength()
	{
		return __thiz.callMethod<jint>(
			"getInputLength",
			"()I"
		);
	}
	jstring UnmappableCharacterException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class UnmappableCharacterException : public __jni_impl::java::nio::charset::UnmappableCharacterException
	{
	public:
		UnmappableCharacterException(QAndroidJniObject obj) { __thiz = obj; }
		UnmappableCharacterException(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::charset

