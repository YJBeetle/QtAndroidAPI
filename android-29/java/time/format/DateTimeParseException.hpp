#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../DateTimeException.hpp"


namespace java::time::format
{
	class DateTimeParseException : public java::time::DateTimeException
	{
	public:
		// Fields
		
		DateTimeParseException(QAndroidJniObject obj);
		// Constructors
		DateTimeParseException(jstring arg0, jstring arg1, jint arg2);
		DateTimeParseException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		DateTimeParseException() = default;
		
		// Methods
		jint getErrorIndex();
		jstring getParsedString();
	};
} // namespace java::time::format

