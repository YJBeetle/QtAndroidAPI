#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class DuplicateFormatFlagsException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		DuplicateFormatFlagsException(QAndroidJniObject obj);
		// Constructors
		DuplicateFormatFlagsException(jstring arg0);
		DuplicateFormatFlagsException() = default;
		
		// Methods
		jstring getFlags();
		jstring getMessage();
	};
} // namespace java::util

