#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./DateTimeParseException.hpp"

namespace java::time::format
{
	// Fields
	
	// Constructors
	DateTimeParseException::DateTimeParseException(JString arg0, JString arg1, jint arg2)
		: java::time::DateTimeException(
			"java.time.format.DateTimeParseException",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	DateTimeParseException::DateTimeParseException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::time::DateTimeException(
			"java.time.format.DateTimeParseException",
			"(Ljava/lang/String;Ljava/lang/CharSequence;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
	jint DateTimeParseException::getErrorIndex() const
	{
		return callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
	JString DateTimeParseException::getParsedString() const
	{
		return callObjectMethod(
			"getParsedString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::format

