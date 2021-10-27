#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::app
{
	class KeyguardManager_KeyguardDismissCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onDismissCancelled();
		void onDismissError();
		void onDismissSucceeded();
	};
} // namespace __jni_impl::android::app


namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void KeyguardManager_KeyguardDismissCallback::__constructor()
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
} // namespace __jni_impl::android::app

namespace android::app
{
	class KeyguardManager_KeyguardDismissCallback : public __jni_impl::android::app::KeyguardManager_KeyguardDismissCallback
	{
	public:
		KeyguardManager_KeyguardDismissCallback(QAndroidJniObject obj) { __thiz = obj; }
		KeyguardManager_KeyguardDismissCallback()
		{
			__constructor();
		}
	};
} // namespace android::app

