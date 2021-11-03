#include "./AdvertisingSet.hpp"
#include "./AdvertisingSetCallback.hpp"

namespace android::bluetooth::le
{
	// Fields
	jint AdvertisingSetCallback::ADVERTISE_FAILED_ALREADY_STARTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_ALREADY_STARTED"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_DATA_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_DATA_TOO_LARGE"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_FEATURE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_FEATURE_UNSUPPORTED"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_INTERNAL_ERROR"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_TOO_MANY_ADVERTISERS()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_TOO_MANY_ADVERTISERS"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_SUCCESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_SUCCESS"
		);
	}
	
	// QAndroidJniObject forward
	AdvertisingSetCallback::AdvertisingSetCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AdvertisingSetCallback::AdvertisingSetCallback()
		: JObject(
			"android.bluetooth.le.AdvertisingSetCallback",
			"()V"
		) {}
	
	// Methods
	void AdvertisingSetCallback::onAdvertisingDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const
	{
		callMethod<void>(
			"onAdvertisingDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.object(),
			arg1
		);
	}
	void AdvertisingSetCallback::onAdvertisingEnabled(android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2) const
	{
		callMethod<void>(
			"onAdvertisingEnabled",
			"(Landroid/bluetooth/le/AdvertisingSet;ZI)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void AdvertisingSetCallback::onAdvertisingParametersUpdated(android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onAdvertisingParametersUpdated",
			"(Landroid/bluetooth/le/AdvertisingSet;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void AdvertisingSetCallback::onAdvertisingSetStarted(android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onAdvertisingSetStarted",
			"(Landroid/bluetooth/le/AdvertisingSet;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void AdvertisingSetCallback::onAdvertisingSetStopped(android::bluetooth::le::AdvertisingSet arg0) const
	{
		callMethod<void>(
			"onAdvertisingSetStopped",
			"(Landroid/bluetooth/le/AdvertisingSet;)V",
			arg0.object()
		);
	}
	void AdvertisingSetCallback::onPeriodicAdvertisingDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const
	{
		callMethod<void>(
			"onPeriodicAdvertisingDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.object(),
			arg1
		);
	}
	void AdvertisingSetCallback::onPeriodicAdvertisingEnabled(android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2) const
	{
		callMethod<void>(
			"onPeriodicAdvertisingEnabled",
			"(Landroid/bluetooth/le/AdvertisingSet;ZI)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void AdvertisingSetCallback::onPeriodicAdvertisingParametersUpdated(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const
	{
		callMethod<void>(
			"onPeriodicAdvertisingParametersUpdated",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.object(),
			arg1
		);
	}
	void AdvertisingSetCallback::onScanResponseDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const
	{
		callMethod<void>(
			"onScanResponseDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

