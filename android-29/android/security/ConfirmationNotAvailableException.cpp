#include "./ConfirmationNotAvailableException.hpp"

namespace android::security
{
	// Fields
	
	ConfirmationNotAvailableException::ConfirmationNotAvailableException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConfirmationNotAvailableException::ConfirmationNotAvailableException()
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationNotAvailableException",
			"()V"
		);
	}
	ConfirmationNotAvailableException::ConfirmationNotAvailableException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationNotAvailableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::security

