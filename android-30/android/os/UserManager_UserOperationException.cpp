#include "./UserManager_UserOperationException.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	UserManager_UserOperationException::UserManager_UserOperationException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	
	// Methods
	jint UserManager_UserOperationException::getUserOperationResult()
	{
		return callMethod<jint>(
			"getUserOperationResult",
			"()I"
		);
	}
} // namespace android::os

