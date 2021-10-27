#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::accessibilityservice
{
	class FingerprintGestureController_FingerprintGestureCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onGestureDetected(jint arg0);
		void onGestureDetectionAvailabilityChanged(jboolean arg0);
	};
} // namespace __jni_impl::android::accessibilityservice


namespace __jni_impl::android::accessibilityservice
{
	// Fields
	
	// Constructors
	void FingerprintGestureController_FingerprintGestureCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.FingerprintGestureController$FingerprintGestureCallback",
			"()V"
		);
	}
	
	// Methods
	void FingerprintGestureController_FingerprintGestureCallback::onGestureDetected(jint arg0)
	{
		__thiz.callMethod<void>(
			"onGestureDetected",
			"(I)V",
			arg0
		);
	}
	void FingerprintGestureController_FingerprintGestureCallback::onGestureDetectionAvailabilityChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onGestureDetectionAvailabilityChanged",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class FingerprintGestureController_FingerprintGestureCallback : public __jni_impl::android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback
	{
	public:
		FingerprintGestureController_FingerprintGestureCallback(QAndroidJniObject obj) { __thiz = obj; }
		FingerprintGestureController_FingerprintGestureCallback()
		{
			__constructor();
		}
	};
} // namespace android::accessibilityservice

