#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_MBMSSTREAMINGSESSIONCALLBACK
#define ANDROID_TELEPHONY_MBMS_MBMSSTREAMINGSESSIONCALLBACK

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::mbms
{
	class MbmsStreamingSessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onError(jint arg0, jstring arg1);
		void onError(jint arg0, const QString &arg1);
		void onMiddlewareReady();
		void onStreamingServicesUpdated(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::telephony::mbms


namespace __jni_impl::android::telephony::mbms
{
	// Fields
	
	// Constructors
	void MbmsStreamingSessionCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsStreamingSessionCallback",
			"()V"
		);
	}
	
	// Methods
	void MbmsStreamingSessionCallback::onError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void MbmsStreamingSessionCallback::onError(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void MbmsStreamingSessionCallback::onMiddlewareReady()
	{
		__thiz.callMethod<void>(
			"onMiddlewareReady",
			"()V"
		);
	}
	void MbmsStreamingSessionCallback::onStreamingServicesUpdated(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onStreamingServicesUpdated",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class MbmsStreamingSessionCallback : public __jni_impl::android::telephony::mbms::MbmsStreamingSessionCallback
	{
	public:
		MbmsStreamingSessionCallback(QAndroidJniObject obj) { __thiz = obj; }
		MbmsStreamingSessionCallback()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_MBMSSTREAMINGSESSIONCALLBACK

