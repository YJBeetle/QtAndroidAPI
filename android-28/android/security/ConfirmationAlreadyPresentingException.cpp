#include "../../JString.hpp"
#include "./ConfirmationAlreadyPresentingException.hpp"

namespace android::security
{
	// Fields
	
	// QAndroidJniObject forward
	ConfirmationAlreadyPresentingException::ConfirmationAlreadyPresentingException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	ConfirmationAlreadyPresentingException::ConfirmationAlreadyPresentingException()
		: java::lang::Exception(
			"android.security.ConfirmationAlreadyPresentingException",
			"()V"
		) {}
	ConfirmationAlreadyPresentingException::ConfirmationAlreadyPresentingException(JString arg0)
		: java::lang::Exception(
			"android.security.ConfirmationAlreadyPresentingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::security

