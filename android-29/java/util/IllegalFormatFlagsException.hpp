#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class IllegalFormatFlagsException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		IllegalFormatFlagsException(QAndroidJniObject obj);
		// Constructors
		IllegalFormatFlagsException(jstring &arg0);
		IllegalFormatFlagsException(const QString &arg0);
		IllegalFormatFlagsException() = default;
		
		// Methods
		jstring getFlags();
		jstring getMessage();
	};
} // namespace java::util

