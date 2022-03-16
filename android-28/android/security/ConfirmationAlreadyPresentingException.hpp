#pragma once

#include "../../JString.hpp"
#include "./ConfirmationAlreadyPresentingException.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	inline ConfirmationAlreadyPresentingException::ConfirmationAlreadyPresentingException()
		: java::lang::Exception(
			"android.security.ConfirmationAlreadyPresentingException",
			"()V"
		) {}
	inline ConfirmationAlreadyPresentingException::ConfirmationAlreadyPresentingException(JString arg0)
		: java::lang::Exception(
			"android.security.ConfirmationAlreadyPresentingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::security

// Base class headers
#include "../../java/lang/Exception.hpp"

