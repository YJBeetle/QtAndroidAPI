#pragma once

#ifndef ANDROID_NET_WIFI_RTT_RANGINGRESULTCALLBACK
#define ANDROID_NET_WIFI_RTT_RANGINGRESULTCALLBACK

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi::rtt
{
	class RangingResultCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_CODE_FAIL();
		static jint STATUS_CODE_FAIL_RTT_NOT_AVAILABLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onRangingFailure(jint arg0);
		void onRangingResults(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::net::wifi::rtt


namespace __jni_impl::android::net::wifi::rtt
{
	// Fields
	jint RangingResultCallback::STATUS_CODE_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.RangingResultCallback",
			"STATUS_CODE_FAIL"
		);
	}
	jint RangingResultCallback::STATUS_CODE_FAIL_RTT_NOT_AVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.RangingResultCallback",
			"STATUS_CODE_FAIL_RTT_NOT_AVAILABLE"
		);
	}
	
	// Constructors
	void RangingResultCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.rtt.RangingResultCallback",
			"()V"
		);
	}
	
	// Methods
	void RangingResultCallback::onRangingFailure(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRangingFailure",
			"(I)V",
			arg0
		);
	}
	void RangingResultCallback::onRangingResults(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRangingResults",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::wifi::rtt

namespace android::net::wifi::rtt
{
	class RangingResultCallback : public __jni_impl::android::net::wifi::rtt::RangingResultCallback
	{
	public:
		RangingResultCallback(QAndroidJniObject obj) { __thiz = obj; }
		RangingResultCallback()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::rtt

#endif // ANDROID_NET_WIFI_RTT_RANGINGRESULTCALLBACK

