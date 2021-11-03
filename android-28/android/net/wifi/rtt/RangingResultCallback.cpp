#include "./RangingResultCallback.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	jint RangingResultCallback::STATUS_CODE_FAIL()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.RangingResultCallback",
			"STATUS_CODE_FAIL"
		);
	}
	jint RangingResultCallback::STATUS_CODE_FAIL_RTT_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.RangingResultCallback",
			"STATUS_CODE_FAIL_RTT_NOT_AVAILABLE"
		);
	}
	
	// QJniObject forward
	RangingResultCallback::RangingResultCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RangingResultCallback::RangingResultCallback()
		: JObject(
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
	void RangingResultCallback::onRangingResults(JObject arg0)
	{
		callMethod<void>(
			"onRangingResults",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::rtt

