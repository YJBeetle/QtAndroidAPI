#include "./KeyguardManager_KeyguardDismissCallback.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	KeyguardManager_KeyguardDismissCallback::KeyguardManager_KeyguardDismissCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyguardManager_KeyguardDismissCallback::KeyguardManager_KeyguardDismissCallback()
		: JObject(
			"android.app.KeyguardManager$KeyguardDismissCallback",
			"()V"
		) {}
	
	// Methods
	void KeyguardManager_KeyguardDismissCallback::onDismissCancelled()
	{
		callMethod<void>(
			"onDismissCancelled",
			"()V"
		);
	}
	void KeyguardManager_KeyguardDismissCallback::onDismissError()
	{
		callMethod<void>(
			"onDismissError",
			"()V"
		);
	}
	void KeyguardManager_KeyguardDismissCallback::onDismissSucceeded()
	{
		callMethod<void>(
			"onDismissSucceeded",
			"()V"
		);
	}
} // namespace android::app

