#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class IllegalFormatConversionException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		IllegalFormatConversionException(QAndroidJniObject obj);
		// Constructors
		IllegalFormatConversionException(jchar arg0, jclass arg1);
		IllegalFormatConversionException() = default;
		
		// Methods
		jclass getArgumentClass();
		jchar getConversion();
		jstring getMessage();
	};
} // namespace java::util

