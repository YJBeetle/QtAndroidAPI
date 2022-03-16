#pragma once

#include "./CharacterCodingException.hpp"

class JString;

namespace java::nio::charset
{
	class MalformedInputException : public java::nio::charset::CharacterCodingException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MalformedInputException(const char *className, const char *sig, Ts...agv) : java::nio::charset::CharacterCodingException(className, sig, std::forward<Ts>(agv)...) {}
		MalformedInputException(QAndroidJniObject obj) : java::nio::charset::CharacterCodingException(obj) {}
		
		// Constructors
		MalformedInputException(jint arg0);
		
		// Methods
		jint getInputLength() const;
		JString getMessage() const;
	};
} // namespace java::nio::charset

