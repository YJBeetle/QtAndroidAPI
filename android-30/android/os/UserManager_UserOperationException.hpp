#pragma once

#include "./UserManager_UserOperationException.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint UserManager_UserOperationException::getUserOperationResult() const
	{
		return callMethod<jint>(
			"getUserOperationResult",
			"()I"
		);
	}
} // namespace android::os

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
