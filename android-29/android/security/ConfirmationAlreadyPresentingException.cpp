#include "./ConfirmationAlreadyPresentingException.hpp"

namespace android::security
{
	// Fields
	
	ConfirmationAlreadyPresentingException::ConfirmationAlreadyPresentingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConfirmationAlreadyPresentingException::ConfirmationAlreadyPresentingException()
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationAlreadyPresentingException",
			"()V"
		);
	}
	ConfirmationAlreadyPresentingException::ConfirmationAlreadyPresentingException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationAlreadyPresentingException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::security

