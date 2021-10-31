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
	
	// Methods
} // namespace android::net

