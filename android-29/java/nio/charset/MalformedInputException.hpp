#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./CharacterCodingException.hpp"


namespace java::nio::charset
{
	class MalformedInputException : public java::nio::charset::CharacterCodingException
	{
	public:
		// Fields
		
		MalformedInputException(QAndroidJniObject obj);
		// Constructors
		MalformedInputException(jint arg0);
		MalformedInputException() = default;
		
		// Methods
		jint getInputLength();
		jstring getMessage();
	};
} // namespace java::nio::charset

