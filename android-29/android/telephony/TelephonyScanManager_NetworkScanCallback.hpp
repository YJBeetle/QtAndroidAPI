#pragma once

#include "./TelephonyScanManager_NetworkScanCallback.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline TelephonyScanManager_NetworkScanCallback::TelephonyScanManager_NetworkScanCallback()
		: JObject(
			"android.telephony.TelephonyScanManager$NetworkScanCallback",
			"()V"
		) {}
	
	// Methods
	inline void TelephonyScanManager_NetworkScanCallback::onComplete() const
	{
		callMethod<void>(
			"onComplete",
			"()V"
		);
	}
	inline void TelephonyScanManager_NetworkScanCallback::onError(jint arg0) const
	{
		callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	inline void TelephonyScanManager_NetworkScanCallback::onResults(JObject arg0) const
	{
		callMethod<void>(
			"onResults",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::telephony

// Base class headers

