#pragma once

#include "./CharacterCodingException.hpp"

class JString;

namespace java::nio::charset
{
	class UnmappableCharacterException : public java::nio::charset::CharacterCodingException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnmappableCharacterException(const char *className, const char *sig, Ts...agv) : java::nio::charset::CharacterCodingException(className, sig, std::forward<Ts>(agv)...) {}
		UnmappableCharacterException(QJniObject obj);
		
		// Constructors
		UnmappableCharacterException(jint arg0);
		
		// Methods
		jint getInputLength() const;
		JString getMessage() const;
	};
} // namespace java::nio::charset

