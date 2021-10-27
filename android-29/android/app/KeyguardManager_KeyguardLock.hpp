#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class KeyguardManager;
}

namespace __jni_impl::android::app
{
	class KeyguardManager_KeyguardLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void disableKeyguard();
		void reenableKeyguard();
	};
} // namespace __jni_impl::android::app

#include "KeyguardManager.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void KeyguardManager_KeyguardLock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.KeyguardManager$KeyguardLock",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::app

namespace android::app
{
	class KeyguardManager_KeyguardLock : public __jni_impl::android::app::KeyguardManager_KeyguardLock
	{
	public:
		KeyguardManager_KeyguardLock(QAndroidJniObject obj) { __thiz = obj; }
		KeyguardManager_KeyguardLock()
		{
			__constructor();
		}
	};
} // namespace android::app

