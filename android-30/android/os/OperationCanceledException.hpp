#pragma once

#include "../../JString.hpp"
#include "./OperationCanceledException.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline OperationCanceledException::OperationCanceledException()
		: java::lang::RuntimeException(
			"android.os.OperationCanceledException",
			"()V"
		) {}
	inline OperationCanceledException::OperationCanceledException(JString arg0)
		: java::lang::RuntimeException(
			"android.os.OperationCanceledException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
