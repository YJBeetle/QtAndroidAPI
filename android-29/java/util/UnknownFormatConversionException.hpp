#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class UnknownFormatConversionException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		UnknownFormatConversionException(QAndroidJniObject obj);
		// Constructors
		UnknownFormatConversionException(jstring &arg0);
		UnknownFormatConversionException(const QString &arg0);
		UnknownFormatConversionException() = default;
		
		// Methods
		jstring getConversion();
		jstring getMessage();
	};
} // namespace java::util

