#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class UnknownFormatFlagsException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		UnknownFormatFlagsException(QAndroidJniObject obj);
		// Constructors
		UnknownFormatFlagsException(jstring arg0);
		UnknownFormatFlagsException() = default;
		
		// Methods
		jstring getFlags();
		jstring getMessage();
	};
} // namespace java::util

