#include "./UserManager_UserOperationException.hpp"

namespace android::os
{
	// Fields
	
	UserManager_UserOperationException::UserManager_UserOperationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint UserManager_UserOperationException::getUserOperationResult()
	{
		return __thiz.callMethod<jint>(
			"getUserOperationResult",
			"()I"
		);
	}
} // namespace android::os

