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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnmappableCharacterException(const char *className, const char *sig, Ts...agv) : java::nio::charset::CharacterCodingException(className, sig, std::forward<Ts>(agv)...) {}
		UnmappableCharacterException(QAndroidJniObject obj);
		
		// Constructors
		UnmappableCharacterException(jint arg0);
		
		// Methods
		jint getInputLength();
		jstring getMessage();
	};
} // namespace java::nio::charset

