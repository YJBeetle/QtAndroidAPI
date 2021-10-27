#include "./ConfirmationCallback.hpp"

namespace android::security
{
	// Fields
	
	ConfirmationCallback::ConfirmationCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConfirmationCallback::ConfirmationCallback()
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationCallback",
			"()V"
		);
	}
	
	// Methods
	void ConfirmationCallback::onCanceled()
	{
		__thiz.callMethod<void>(
			"onCanceled",
			"()V"
		);
	}
	void ConfirmationCallback::onConfirmed(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"onConfirmed",
			"([B)V",
			arg0
		);
	}
	void ConfirmationCallback::onDismissed()
	{
		__thiz.callMethod<void>(
			"onDismissed",
			"()V"
		);
	}
	void ConfirmationCallback::onError(jthrowable arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
} // namespace android::security

