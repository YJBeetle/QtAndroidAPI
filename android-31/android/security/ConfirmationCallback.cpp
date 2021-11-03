#include "../../JByteArray.hpp"
#include "../../JThrowable.hpp"
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
	void ConfirmationCallback::onCanceled() const
	{
		callMethod<void>(
			"onCanceled",
			"()V"
		);
	}
	void ConfirmationCallback::onConfirmed(JByteArray arg0) const
	{
		callMethod<void>(
			"onConfirmed",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void ConfirmationCallback::onDismissed() const
	{
		callMethod<void>(
			"onDismissed",
			"()V"
		);
	}
	void ConfirmationCallback::onError(JThrowable arg0) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		);
	}
} // namespace android::security

