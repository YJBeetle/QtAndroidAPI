#include "./ConfirmationCallback.hpp"

namespace android::security
{
	// Fields
	
	// QAndroidJniObject forward
	ConfirmationCallback::ConfirmationCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ConfirmationCallback::ConfirmationCallback()
		: __JniBaseClass(
			"android.security.ConfirmationCallback",
			"()V"
		) {}
	
	// Methods
	void ConfirmationCallback::onCanceled()
	{
		callMethod<void>(
			"onCanceled",
			"()V"
		);
	}
	void ConfirmationCallback::onConfirmed(jbyteArray arg0)
	{
		callMethod<void>(
			"onConfirmed",
			"([B)V",
			arg0
		);
	}
	void ConfirmationCallback::onDismissed()
	{
		callMethod<void>(
			"onDismissed",
			"()V"
		);
	}
	void ConfirmationCallback::onError(jthrowable arg0)
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
} // namespace android::security

