#include "./ParseException.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	ParseException::ParseException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	ParseException::ParseException(jstring arg0, jint arg1)
		: java::lang::Exception(
			"java.text.ParseException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint ParseException::getErrorOffset()
	{
		return callMethod<jint>(
			"getErrorOffset",
			"()I"
		);
	}
} // namespace java::text

