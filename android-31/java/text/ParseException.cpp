#include "../../JString.hpp"
#include "./ParseException.hpp"

namespace java::text
{
	// Fields
	
	// QAndroidJniObject forward
	ParseException::ParseException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	ParseException::ParseException(JString arg0, jint arg1)
		: java::lang::Exception(
			"java.text.ParseException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
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

