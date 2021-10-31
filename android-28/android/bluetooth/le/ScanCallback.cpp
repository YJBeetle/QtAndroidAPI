#include "./ScanResult.hpp"
#include "./ScanCallback.hpp"

namespace android::bluetooth::le
{
	// Fields
	jint ScanCallback::SCAN_FAILED_ALREADY_STARTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_ALREADY_STARTED"
		);
	}
	jint ScanCallback::SCAN_FAILED_APPLICATION_REGISTRATION_FAILED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_APPLICATION_REGISTRATION_FAILED"
		);
	}
	jint ScanCallback::SCAN_FAILED_FEATURE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_FEATURE_UNSUPPORTED"
		);
	}
	jint ScanCallback::SCAN_FAILED_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_INTERNAL_ERROR"
		);
	}
	
	// QJniObject forward
	ScanCallback::ScanCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ScanCallback::ScanCallback()
		: __JniBaseClass(
			"android.bluetooth.le.ScanCallback",
			"()V"
		) {}
	
	// Methods
	void ScanCallback::onBatchScanResults(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onBatchScanResults",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void ScanCallback::onScanFailed(jint arg0)
	{
		callMethod<void>(
			"onScanFailed",
			"(I)V",
			arg0
		);
	}
	void ScanCallback::onScanResult(jint arg0, android::bluetooth::le::ScanResult arg1)
	{
		callMethod<void>(
			"onScanResult",
			"(ILandroid/bluetooth/le/ScanResult;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::bluetooth::le

