#include "../../JString.hpp"
#include "./ParseException.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	ParseException::ParseException(JString arg0, jint arg1)
		: java::lang::Exception(
			"java.text.ParseException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	jint ParseException::getErrorOffset() const
	{
		return callMethod<jint>(
			"getErrorOffset",
			"()I"
		);
	}
} // namespace java::text

