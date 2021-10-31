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
	
	// QAndroidJniObject forward
	ParseException::ParseException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net

