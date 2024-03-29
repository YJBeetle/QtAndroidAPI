#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./IncorrectContextUseViolation.def.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// Constructors
	inline IncorrectContextUseViolation::IncorrectContextUseViolation(JString arg0, JThrowable arg1)
		: android::os::strictmode::Violation(
			"android.os.strictmode.IncorrectContextUseViolation",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::os::strictmode

// Base class headers
#include "./Violation.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::strictmode;
#endif
