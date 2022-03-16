#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ParseException.hpp"

namespace android::net
{
	// Fields
	JString ParseException::response()
	{
		return getObjectField(
			"response",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	ParseException::ParseException(JString arg0)
		: java::lang::RuntimeException(
			"android.net.ParseException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ParseException::ParseException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"android.net.ParseException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::net

