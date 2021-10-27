#include "./RangingResultCallback.hpp"

namespace android::net::wifi::rtt
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
	
	RangingResultCallback::RangingResultCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RangingResultCallback::RangingResultCallback()
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
	void RangingResultCallback::onRangingResults(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRangingResults",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::net::wifi::rtt

