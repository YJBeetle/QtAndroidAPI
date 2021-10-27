#include "./KeyguardManager_KeyguardDismissCallback.hpp"

namespace android::app
{
	// Fields
	
	KeyguardManager_KeyguardDismissCallback::KeyguardManager_KeyguardDismissCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyguardManager_KeyguardDismissCallback::KeyguardManager_KeyguardDismissCallback()
	{
		__thiz = QAndroidJniObject(
			"android.app.KeyguardManager$KeyguardDismissCallback",
			"()V"
		);
	}
	
	// Methods
	void KeyguardManager_KeyguardDismissCallback::onDismissCancelled()
	{
		__thiz.callMethod<void>(
			"onDismissCancelled",
			"()V"
		);
	}
	void KeyguardManager_KeyguardDismissCallback::onDismissError()
	{
		__thiz.callMethod<void>(
			"onDismissError",
			"()V"
		);
	}
	void KeyguardManager_KeyguardDismissCallback::onDismissSucceeded()
	{
		__thiz.callMethod<void>(
			"onDismissSucceeded",
			"()V"
		);
	}
} // namespace android::app

