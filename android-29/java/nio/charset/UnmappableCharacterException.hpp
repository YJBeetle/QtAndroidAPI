#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./CharacterCodingException.hpp"


namespace java::nio::charset
{
	class UnmappableCharacterException : public java::nio::charset::CharacterCodingException
	{
	public:
		// Fields
		
		UnmappableCharacterException(QAndroidJniObject obj);
		// Constructors
		UnmappableCharacterException(jint &arg0);
		UnmappableCharacterException() = default;
		
		// Methods
		jint getInputLength();
		jstring getMessage();
	};
} // namespace java::nio::charset

