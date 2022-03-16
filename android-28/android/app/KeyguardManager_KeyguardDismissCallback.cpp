#include "./KeyguardManager_KeyguardDismissCallback.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	KeyguardManager_KeyguardDismissCallback::KeyguardManager_KeyguardDismissCallback()
		: JObject(
			"android.app.KeyguardManager$KeyguardDismissCallback",
			"()V"
		) {}
	
	// Methods
	void KeyguardManager_KeyguardDismissCallback::onDismissCancelled() const
	{
		callMethod<void>(
			"onDismissCancelled",
			"()V"
		);
	}
	void KeyguardManager_KeyguardDismissCallback::onDismissError() const
	{
		callMethod<void>(
			"onDismissError",
			"()V"
		);
	}
	void KeyguardManager_KeyguardDismissCallback::onDismissSucceeded() const
	{
		callMethod<void>(
			"onDismissSucceeded",
			"()V"
		);
	}
} // namespace android::app

