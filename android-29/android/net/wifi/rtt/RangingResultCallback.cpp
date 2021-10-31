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
	
	// QAndroidJniObject forward
	RangingResultCallback::RangingResultCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RangingResultCallback::RangingResultCallback()
		: __JniBaseClass(
			"android.net.wifi.rtt.RangingResultCallback",
			"()V"
		) {}
	
	// Methods
	void RangingResultCallback::onRangingFailure(jint arg0)
	{
		callMethod<void>(
			"onRangingFailure",
			"(I)V",
			arg0
		);
	}
	void RangingResultCallback::onRangingResults(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onRangingResults",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::rtt

