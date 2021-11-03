#include "./ConfirmationCallback.hpp"

namespace android::security
{
	// Fields
	
	// QJniObject forward
	ConfirmationCallback::ConfirmationCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConfirmationCallback::ConfirmationCallback()
		: JObject(
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

