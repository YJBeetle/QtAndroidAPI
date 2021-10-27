#pragma once

#ifndef ANDROID_TELEPHONY_TELEPHONYSCANMANAGER_NETWORKSCANCALLBACK
#define ANDROID_TELEPHONY_TELEPHONYSCANMANAGER_NETWORKSCANCALLBACK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class TelephonyScanManager_NetworkScanCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onComplete();
		void onError(jint arg0);
		void onResults(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void TelephonyScanManager_NetworkScanCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.TelephonyScanManager$NetworkScanCallback",
			"()V"
		);
	}
	
	// Methods
	void TelephonyScanManager_NetworkScanCallback::onComplete()
	{
		__thiz.callMethod<void>(
			"onComplete",
			"()V"
		);
	}
	void TelephonyScanManager_NetworkScanCallback::onError(jint arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	void TelephonyScanManager_NetworkScanCallback::onResults(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onResults",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class TelephonyScanManager_NetworkScanCallback : public __jni_impl::android::telephony::TelephonyScanManager_NetworkScanCallback
	{
	public:
		TelephonyScanManager_NetworkScanCallback(QAndroidJniObject obj) { __thiz = obj; }
		TelephonyScanManager_NetworkScanCallback()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_TELEPHONYSCANMANAGER_NETWORKSCANCALLBACK

