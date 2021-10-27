#include "./AdvertisingSet.hpp"
#include "./AdvertisingSetCallback.hpp"

namespace android::bluetooth::le
{
	// Fields
	jint AdvertisingSetCallback::ADVERTISE_FAILED_ALREADY_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_ALREADY_STARTED"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_DATA_TOO_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_DATA_TOO_LARGE"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_FEATURE_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_FEATURE_UNSUPPORTED"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_INTERNAL_ERROR"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_TOO_MANY_ADVERTISERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_TOO_MANY_ADVERTISERS"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_SUCCESS"
		);
	}
	
	AdvertisingSetCallback::AdvertisingSetCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AdvertisingSetCallback::AdvertisingSetCallback()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertisingSetCallback",
			"()V"
		);
	}
	
	// Methods
	void AdvertisingSetCallback::onAdvertisingDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onAdvertisingDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AdvertisingSetCallback::onAdvertisingEnabled(android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onAdvertisingEnabled",
			"(Landroid/bluetooth/le/AdvertisingSet;ZI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AdvertisingSetCallback::onAdvertisingParametersUpdated(android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onAdvertisingParametersUpdated",
			"(Landroid/bluetooth/le/AdvertisingSet;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AdvertisingSetCallback::onAdvertisingSetStarted(android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onAdvertisingSetStarted",
			"(Landroid/bluetooth/le/AdvertisingSet;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AdvertisingSetCallback::onAdvertisingSetStopped(android::bluetooth::le::AdvertisingSet arg0)
	{
		__thiz.callMethod<void>(
			"onAdvertisingSetStopped",
			"(Landroid/bluetooth/le/AdvertisingSet;)V",
			arg0.__jniObject().object()
		);
	}
	void AdvertisingSetCallback::onPeriodicAdvertisingDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onPeriodicAdvertisingDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AdvertisingSetCallback::onPeriodicAdvertisingEnabled(android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onPeriodicAdvertisingEnabled",
			"(Landroid/bluetooth/le/AdvertisingSet;ZI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AdvertisingSetCallback::onPeriodicAdvertisingParametersUpdated(android::bluetooth::le::AdvertisingSet arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onPeriodicAdvertisingParametersUpdated",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AdvertisingSetCallback::onScanResponseDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onScanResponseDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

