#include "./UserManager_UserOperationException.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	UserManager_UserOperationException::UserManager_UserOperationException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	
	// Methods
	jint UserManager_UserOperationException::getUserOperationResult() const
	{
		return callMethod<jint>(
			"getUserOperationResult",
			"()I"
		);
	}
} // namespace android::os

