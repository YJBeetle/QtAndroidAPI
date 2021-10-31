#include "./Base64DataException.hpp"

namespace android::util
{
	// Fields
	
	Base64DataException::Base64DataException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Base64DataException::Base64DataException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.Base64DataException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::util

