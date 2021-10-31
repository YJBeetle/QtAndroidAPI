#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class IllegalFormatWidthException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		IllegalFormatWidthException(QAndroidJniObject obj);
		// Constructors
		IllegalFormatWidthException(jint arg0);
		IllegalFormatWidthException() = default;
		
		// Methods
		jstring getMessage();
		jint getWidth();
	};
} // namespace java::util

