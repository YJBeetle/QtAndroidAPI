#pragma once

#include "../../JString.hpp"
#include "./LimitExceededException.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline LimitExceededException::LimitExceededException()
		: java::lang::IllegalStateException(
			"android.os.LimitExceededException",
			"()V"
		) {}
	inline LimitExceededException::LimitExceededException(JString arg0)
		: java::lang::IllegalStateException(
			"android.os.LimitExceededException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
