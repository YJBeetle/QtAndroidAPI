#include "./DateTimeParseException.hpp"

namespace java::time::format
{
	// Fields
	
	// QAndroidJniObject forward
	DateTimeParseException::DateTimeParseException(QAndroidJniObject obj) : java::time::DateTimeException(obj) {}
	
	// Constructors
	DateTimeParseException::DateTimeParseException(jstring arg0, jstring arg1, jint arg2)
		: java::time::DateTimeException(
			"java.time.format.DateTimeParseException",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2
		) {}
	DateTimeParseException::DateTimeParseException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::time::DateTimeException(
			"java.time.format.DateTimeParseException",
			"(Ljava/lang/String;Ljava/lang/CharSequence;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint DateTimeParseException::getErrorIndex()
	{
		return callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
	jstring DateTimeParseException::getParsedString()
	{
		return callObjectMethod(
			"getParsedString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::format

