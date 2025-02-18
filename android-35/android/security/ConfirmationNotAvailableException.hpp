#pragma once

#include "../../JString.hpp"
#include "./ConfirmationNotAvailableException.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	inline ConfirmationNotAvailableException::ConfirmationNotAvailableException()
		: java::lang::Exception(
			"android.security.ConfirmationNotAvailableException",
			"()V"
		) {}
	inline ConfirmationNotAvailableException::ConfirmationNotAvailableException(JString arg0)
		: java::lang::Exception(
			"android.security.ConfirmationNotAvailableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::security

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security;
#endif
