#pragma once

#include "./AdvertiseCallback.def.hpp"
#include "./AdvertiseData.def.hpp"
#include "./AdvertiseSettings.def.hpp"
#include "./AdvertisingSetCallback.def.hpp"
#include "./AdvertisingSetParameters.def.hpp"
#include "./PeriodicAdvertisingParameters.def.hpp"
#include "../../os/Handler.def.hpp"
#include "./BluetoothLeAdvertiser.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void BluetoothLeAdvertiser::startAdvertising(android::bluetooth::le::AdvertiseSettings arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseCallback arg2) const
	{
		callMethod<void>(
			"startAdvertising",
			"(Landroid/bluetooth/le/AdvertiseSettings;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void BluetoothLeAdvertiser::startAdvertising(android::bluetooth::le::AdvertiseSettings arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::AdvertiseCallback arg3) const
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
	inline void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, android::bluetooth::le::AdvertisingSetCallback arg5) const
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
	inline void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, android::bluetooth::le::AdvertisingSetCallback arg5, android::os::Handler arg6) const
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
	inline void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, android::bluetooth::le::AdvertisingSetCallback arg7) const
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
	inline void BluetoothLeAdvertiser::startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, android::bluetooth::le::AdvertisingSetCallback arg7, android::os::Handler arg8) const
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
	inline void BluetoothLeAdvertiser::stopAdvertising(android::bluetooth::le::AdvertiseCallback arg0) const
	{
		callMethod<void>(
			"stopAdvertising",
			"(Landroid/bluetooth/le/AdvertiseCallback;)V",
			arg0.object()
		);
	}
	inline void BluetoothLeAdvertiser::stopAdvertisingSet(android::bluetooth::le::AdvertisingSetCallback arg0) const
	{
		callMethod<void>(
			"stopAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetCallback;)V",
			arg0.object()
		);
	}
} // namespace android::bluetooth::le

// Base class headers

