#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class IllegalFormatPrecisionException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		IllegalFormatPrecisionException(QAndroidJniObject obj);
		// Constructors
		IllegalFormatPrecisionException(jint arg0);
		IllegalFormatPrecisionException() = default;
		
		// Methods
		jstring getMessage();
		jint getPrecision();
	};
} // namespace java::util

