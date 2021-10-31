#include "./MalformedJsonException.hpp"

namespace android::util
{
	// Fields
	
	MalformedJsonException::MalformedJsonException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MalformedJsonException::MalformedJsonException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MalformedJsonException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::util

