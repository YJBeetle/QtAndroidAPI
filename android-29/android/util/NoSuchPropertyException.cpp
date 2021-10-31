#include "./NoSuchPropertyException.hpp"

namespace android::util
{
	// Fields
	
	NoSuchPropertyException::NoSuchPropertyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoSuchPropertyException::NoSuchPropertyException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.NoSuchPropertyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::util

