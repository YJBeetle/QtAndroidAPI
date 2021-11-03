#include "../../JString.hpp"
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
	
	// QAndroidJniObject forward
	ParseException::ParseException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net

