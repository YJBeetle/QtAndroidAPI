#include "./TelephonyScanManager_NetworkScanCallback.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	TelephonyScanManager_NetworkScanCallback::TelephonyScanManager_NetworkScanCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TelephonyScanManager_NetworkScanCallback::TelephonyScanManager_NetworkScanCallback()
		: __JniBaseClass(
			"android.telephony.TelephonyScanManager$NetworkScanCallback",
			"()V"
		) {}
	
	// Methods
	void TelephonyScanManager_NetworkScanCallback::onComplete()
	{
		callMethod<void>(
			"onComplete",
			"()V"
		);
	}
	void TelephonyScanManager_NetworkScanCallback::onError(jint arg0)
	{
		callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	void TelephonyScanManager_NetworkScanCallback::onResults(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onResults",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::telephony

