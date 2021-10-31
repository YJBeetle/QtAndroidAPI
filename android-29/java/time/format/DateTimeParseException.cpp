#include "./DateTimeParseException.hpp"

namespace java::time::format
{
	// Fields
	
	DateTimeParseException::DateTimeParseException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateTimeParseException::DateTimeParseException(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.time.format.DateTimeParseException",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	DateTimeParseException::DateTimeParseException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.time.format.DateTimeParseException",
			"(Ljava/lang/String;Ljava/lang/CharSequence;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jint DateTimeParseException::getErrorIndex()
	{
		return __thiz.callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
	jstring DateTimeParseException::getParsedString()
	{
		return __thiz.callObjectMethod(
			"getParsedString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::format

