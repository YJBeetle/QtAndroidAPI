#pragma once

#include "../DateTimeException.def.hpp"

class JString;
class JString;
class JThrowable;

namespace java::time::format
{
	class DateTimeParseException : public java::time::DateTimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateTimeParseException(const char *className, const char *sig, Ts...agv) : java::time::DateTimeException(className, sig, std::forward<Ts>(agv)...) {}
		DateTimeParseException(QAndroidJniObject obj) : java::time::DateTimeException(obj) {}
		
		// Constructors
		DateTimeParseException(JString arg0, JString arg1, jint arg2);
		DateTimeParseException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
		jint getErrorIndex() const;
		JString getParsedString() const;
	};
} // namespace java::time::format

