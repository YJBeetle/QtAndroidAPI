#include "./KeyguardManager_KeyguardDismissCallback.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	KeyguardManager_KeyguardDismissCallback::KeyguardManager_KeyguardDismissCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyguardManager_KeyguardDismissCallback::KeyguardManager_KeyguardDismissCallback()
		: __JniBaseClass(
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

