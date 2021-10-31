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
		
		// QJniObject forward
		template<typename ...Ts> explicit DateTimeParseException(const char *className, const char *sig, Ts...agv) : java::time::DateTimeException(className, sig, std::forward<Ts>(agv)...) {}
		DateTimeParseException(QJniObject obj);
		
		// Constructors
		DateTimeParseException(jstring arg0, jstring arg1, jint arg2);
		DateTimeParseException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
		jint getErrorIndex();
		jstring getParsedString();
	};
} // namespace java::time::format

