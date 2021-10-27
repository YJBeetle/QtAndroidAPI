#include "./ScanResult.hpp"
#include "./ScanCallback.hpp"

namespace android::bluetooth::le
{
	// Fields
	jint ScanCallback::SCAN_FAILED_ALREADY_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_ALREADY_STARTED"
		);
	}
	jint ScanCallback::SCAN_FAILED_APPLICATION_REGISTRATION_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_APPLICATION_REGISTRATION_FAILED"
		);
	}
	jint ScanCallback::SCAN_FAILED_FEATURE_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_FEATURE_UNSUPPORTED"
		);
	}
	jint ScanCallback::SCAN_FAILED_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_INTERNAL_ERROR"
		);
	}
	
	ScanCallback::ScanCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ScanCallback::ScanCallback()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.ScanCallback",
			"()V"
		);
	}
	
	// Methods
	void ScanCallback::onBatchScanResults(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onBatchScanResults",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void ScanCallback::onScanFailed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onScanFailed",
			"(I)V",
			arg0
		);
	}
	void ScanCallback::onScanResult(jint arg0, android::bluetooth::le::ScanResult arg1)
	{
		__thiz.callMethod<void>(
			"onScanResult",
			"(ILandroid/bluetooth/le/ScanResult;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::bluetooth::le

