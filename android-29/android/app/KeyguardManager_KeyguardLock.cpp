#include "./KeyguardManager.hpp"
#include "./KeyguardManager_KeyguardLock.hpp"

namespace android::app
{
	// Fields
	
	KeyguardManager_KeyguardLock::KeyguardManager_KeyguardLock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void KeyguardManager_KeyguardLock::disableKeyguard()
	{
		__thiz.callMethod<void>(
			"disableKeyguard",
			"()V"
		);
	}
	void KeyguardManager_KeyguardLock::reenableKeyguard()
	{
		__thiz.callMethod<void>(
			"reenableKeyguard",
			"()V"
		);
	}
} // namespace android::app

