#include "./ParseException.hpp"

namespace android::net
{
	// Fields
	jstring ParseException::response()
	{
		return __thiz.getObjectField(
			"response",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ParseException::ParseException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::net

