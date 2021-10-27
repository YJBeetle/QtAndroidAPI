#include "./AdvertiseCallback.hpp"
#include "./AdvertiseData.hpp"
#include "./AdvertiseSettings.hpp"
#include "./AdvertisingSetCallback.hpp"
#include "./AdvertisingSetParameters.hpp"
#include "./PeriodicAdvertisingParameters.hpp"
#include "../../os/Handler.hpp"
#include "./BluetoothLeAdvertiser.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	BluetoothLeAdvertiser::BluetoothLeAdvertiser(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void BluetoothLeAdvertiser::startAdvertising(android::bluetooth::le::AdvertiseSettings arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseCallback arg2)
	{
		__thiz.callMethod<void>(
			"startAdvertising",
			"(Landroid/bluetooth/le/AdvertiseSettings;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertising(android::bluetooth::le::AdvertiseSettings arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::AdvertiseCallback arg3)
	{
		__thiz.callMethod<void>(
			"startAdvertising",
			"(Landroid/bluetooth/le/AdvertiseSettings;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, android::bluetooth::le::AdvertisingSetCallback arg5)
	{
		__thiz.callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertisingSetCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, android::bluetooth::le::AdvertisingSetCallback arg5, android::os::Handler arg6)
	{
		__thiz.callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertisingSetCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, android::bluetooth::le::AdvertisingSetCallback arg7)
	{
		__thiz.callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;IILandroid/bluetooth/le/AdvertisingSetCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6,
			arg7.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, android::bluetooth::le::AdvertisingSetCallback arg7, android::os::Handler arg8)
	{
		__thiz.callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;IILandroid/bluetooth/le/AdvertisingSetCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6,
			arg7.__jniObject().object(),
			arg8.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::stopAdvertising(android::bluetooth::le::AdvertiseCallback arg0)
	{
		__thiz.callMethod<void>(
			"stopAdvertising",
			"(Landroid/bluetooth/le/AdvertiseCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::stopAdvertisingSet(android::bluetooth::le::AdvertisingSetCallback arg0)
	{
		__thiz.callMethod<void>(
			"stopAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::bluetooth::le

