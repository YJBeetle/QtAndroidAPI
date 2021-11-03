#pragma once

#include "../../io/IOException.hpp"

namespace java::nio::charset
{
	class CharacterCodingException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharacterCodingException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		CharacterCodingException(QAndroidJniObject obj);
		
		// Constructors
		CharacterCodingException();
		
		// Methods
	};
} // namespace java::nio::charset

