#pragma once

#include "./RangingResultCallback.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	inline jint RangingResultCallback::STATUS_CODE_FAIL()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.RangingResultCallback",
			"STATUS_CODE_FAIL"
		);
	}
	inline jint RangingResultCallback::STATUS_CODE_FAIL_RTT_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.RangingResultCallback",
			"STATUS_CODE_FAIL_RTT_NOT_AVAILABLE"
		);
	}
	
	// Constructors
	inline RangingResultCallback::RangingResultCallback()
		: JObject(
			"android.net.wifi.rtt.RangingResultCallback",
			"()V"
		) {}
	
	// Methods
	inline void RangingResultCallback::onRangingFailure(jint arg0) const
	{
		callMethod<void>(
			"onRangingFailure",
			"(I)V",
			arg0
		);
	}
	inline void RangingResultCallback::onRangingResults(JObject arg0) const
	{
		callMethod<void>(
			"onRangingResults",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::rtt;
#endif
