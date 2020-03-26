#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_MBMSDOWNLOADSESSIONCALLBACK
#define ANDROID_TELEPHONY_MBMS_MBMSDOWNLOADSESSIONCALLBACK

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::mbms
{
	class MbmsDownloadSessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onFileServicesUpdated(__jni_impl::__JniBaseClass arg0);
		void onError(jint arg0, jstring arg1);
		void onMiddlewareReady();
	};
} // namespace __jni_impl::android::telephony::mbms


namespace __jni_impl::android::telephony::mbms
{
	// Fields
	
	// Constructors
	void MbmsDownloadSessionCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsDownloadSessionCallback",
			"()V");
	}
	
	// Methods
	void MbmsDownloadSessionCallback::onFileServicesUpdated(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onFileServicesUpdated",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void MbmsDownloadSessionCallback::onError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void MbmsDownloadSessionCallback::onMiddlewareReady()
	{
		__thiz.callMethod<void>(
			"onMiddlewareReady",
			"()V"
		);
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class MbmsDownloadSessionCallback : public __jni_impl::android::telephony::mbms::MbmsDownloadSessionCallback
	{
	public:
		MbmsDownloadSessionCallback(QAndroidJniObject obj) { __thiz = obj; }
		MbmsDownloadSessionCallback()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_MBMSDOWNLOADSESSIONCALLBACK

