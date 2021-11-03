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
	
	// QJniObject forward
	BluetoothLeAdvertiser::BluetoothLeAdvertiser(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BluetoothLeAdvertiser::startAdvertising(android::bluetooth::le::AdvertiseSettings arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseCallback arg2)
	{
		callMethod<void>(
			"startAdvertising",
			"(Landroid/bluetooth/le/AdvertiseSettings;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertising(android::bluetooth::le::AdvertiseSettings arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::AdvertiseCallback arg3)
	{
		callMethod<void>(
			"startAdvertising",
			"(Landroid/bluetooth/le/AdvertiseSettings;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, android::bluetooth::le::AdvertisingSetCallback arg5)
	{
		callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertisingSetCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, android::bluetooth::le::AdvertisingSetCallback arg5, android::os::Handler arg6)
	{
		callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertisingSetCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, android::bluetooth::le::AdvertisingSetCallback arg7)
	{
		callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;IILandroid/bluetooth/le/AdvertisingSetCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5,
			arg6,
			arg7.object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, android::bluetooth::le::AdvertisingSetCallback arg7, android::os::Handler arg8)
	{
		callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;IILandroid/bluetooth/le/AdvertisingSetCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5,
			arg6,
			arg7.object(),
			arg8.object()
		);
	}
	void BluetoothLeAdvertiser::stopAdvertising(android::bluetooth::le::AdvertiseCallback arg0)
	{
		callMethod<void>(
			"stopAdvertising",
			"(Landroid/bluetooth/le/AdvertiseCallback;)V",
			arg0.object()
		);
	}
	void BluetoothLeAdvertiser::stopAdvertisingSet(android::bluetooth::le::AdvertisingSetCallback arg0)
	{
		callMethod<void>(
			"stopAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetCallback;)V",
			arg0.object()
		);
	}
} // namespace android::bluetooth::le

