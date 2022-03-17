#pragma once

#include "./DeadSystemException.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline DeadSystemException::DeadSystemException()
		: android::os::DeadObjectException(
			"android.os.DeadSystemException",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"
#include "./RemoteException.hpp"
#include "./DeadObjectException.hpp"

