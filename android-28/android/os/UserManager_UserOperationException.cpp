#include "../../JString.hpp"
#include "./UserManager_UserOperationException.hpp"

namespace android::os
{
	// Fields
	
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

