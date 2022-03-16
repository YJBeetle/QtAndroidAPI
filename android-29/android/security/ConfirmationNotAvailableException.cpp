#include "../../JString.hpp"
#include "./ConfirmationNotAvailableException.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	ConfirmationNotAvailableException::ConfirmationNotAvailableException()
		: java::lang::Exception(
			"android.security.ConfirmationNotAvailableException",
			"()V"
		) {}
	ConfirmationNotAvailableException::ConfirmationNotAvailableException(JString arg0)
		: java::lang::Exception(
			"android.security.ConfirmationNotAvailableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::security

