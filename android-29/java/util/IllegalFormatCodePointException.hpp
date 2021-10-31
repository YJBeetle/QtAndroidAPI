#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class IllegalFormatCodePointException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		IllegalFormatCodePointException(QAndroidJniObject obj);
		// Constructors
		IllegalFormatCodePointException(jint arg0);
		IllegalFormatCodePointException() = default;
		
		// Methods
		jint getCodePoint();
		jstring getMessage();
	};
} // namespace java::util

