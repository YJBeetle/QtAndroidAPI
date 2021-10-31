#include "./ParseException.hpp"

namespace android::net
{
	// Fields
	jstring ParseException::response()
	{
		return getObjectField(
			"response",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ParseException::ParseException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ParseException::ParseException(jstring arg0)
		: java::lang::RuntimeException(
			"android.net.ParseException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ParseException::ParseException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"android.net.ParseException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::net

