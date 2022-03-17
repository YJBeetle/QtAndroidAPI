#pragma once

#include "../../JString.hpp"
#include "./DeadObjectException.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline DeadObjectException::DeadObjectException()
		: android::os::RemoteException(
			"android.os.DeadObjectException",
			"()V"
		) {}
	inline DeadObjectException::DeadObjectException(JString arg0)
		: android::os::RemoteException(
			"android.os.DeadObjectException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"
#include "./RemoteException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
