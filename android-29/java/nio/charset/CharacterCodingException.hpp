#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace java::nio::charset
{
	class CharacterCodingException : public java::io::IOException
	{
	public:
		// Fields
		
		CharacterCodingException(QAndroidJniObject obj);
		// Constructors
		CharacterCodingException();
		
		// Methods
	};
} // namespace java::nio::charset

