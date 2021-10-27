#include "./TelephonyScanManager_NetworkScanCallback.hpp"

namespace android::telephony
{
	// Fields
	
	TelephonyScanManager_NetworkScanCallback::TelephonyScanManager_NetworkScanCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TelephonyScanManager_NetworkScanCallback::TelephonyScanManager_NetworkScanCallback()
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
	void TelephonyScanManager_NetworkScanCallback::onResults(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onResults",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telephony

