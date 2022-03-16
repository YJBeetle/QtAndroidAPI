#pragma once

#include "../../io/IOException.def.hpp"

namespace java::nio::charset
{
	class CharacterCodingException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CharacterCodingException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		CharacterCodingException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		CharacterCodingException();
		
		// Methods
	};
} // namespace java::nio::charset

