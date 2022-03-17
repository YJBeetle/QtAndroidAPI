#pragma once

#include "../../JByteArray.hpp"
#include "./BluetoothDevice.def.hpp"
#include "./BluetoothGattCharacteristic.def.hpp"
#include "./BluetoothGattDescriptor.def.hpp"
#include "./BluetoothGattService.def.hpp"
#include "./BluetoothGattServerCallback.def.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	inline BluetoothGattServerCallback::BluetoothGattServerCallback()
		: JObject(
			"android.bluetooth.BluetoothGattServerCallback",
			"()V"
		) {}
	
	// Methods
	inline void BluetoothGattServerCallback::onCharacteristicReadRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, android::bluetooth::BluetoothGattCharacteristic arg3) const
	{
		callMethod<void>(
			"onCharacteristicReadRequest",
			"(Landroid/bluetooth/BluetoothDevice;IILandroid/bluetooth/BluetoothGattCharacteristic;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void BluetoothGattServerCallback::onCharacteristicWriteRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, android::bluetooth::BluetoothGattCharacteristic arg2, jboolean arg3, jboolean arg4, jint arg5, JByteArray arg6) const
	{
		callMethod<void>(
			"onCharacteristicWriteRequest",
			"(Landroid/bluetooth/BluetoothDevice;ILandroid/bluetooth/BluetoothGattCharacteristic;ZZI[B)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6.object<jbyteArray>()
		);
	}
	inline void BluetoothGattServerCallback::onConnectionStateChange(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onConnectionStateChange",
			"(Landroid/bluetooth/BluetoothDevice;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void BluetoothGattServerCallback::onDescriptorReadRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, android::bluetooth::BluetoothGattDescriptor arg3) const
	{
		callMethod<void>(
			"onDescriptorReadRequest",
			"(Landroid/bluetooth/BluetoothDevice;IILandroid/bluetooth/BluetoothGattDescriptor;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void BluetoothGattServerCallback::onDescriptorWriteRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, android::bluetooth::BluetoothGattDescriptor arg2, jboolean arg3, jboolean arg4, jint arg5, JByteArray arg6) const
	{
		callMethod<void>(
			"onDescriptorWriteRequest",
			"(Landroid/bluetooth/BluetoothDevice;ILandroid/bluetooth/BluetoothGattDescriptor;ZZI[B)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6.object<jbyteArray>()
		);
	}
	inline void BluetoothGattServerCallback::onExecuteWrite(android::bluetooth::BluetoothDevice arg0, jint arg1, jboolean arg2) const
	{
		callMethod<void>(
			"onExecuteWrite",
			"(Landroid/bluetooth/BluetoothDevice;IZ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void BluetoothGattServerCallback::onMtuChanged(android::bluetooth::BluetoothDevice arg0, jint arg1) const
	{
		callMethod<void>(
			"onMtuChanged",
			"(Landroid/bluetooth/BluetoothDevice;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void BluetoothGattServerCallback::onNotificationSent(android::bluetooth::BluetoothDevice arg0, jint arg1) const
	{
		callMethod<void>(
			"onNotificationSent",
			"(Landroid/bluetooth/BluetoothDevice;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void BluetoothGattServerCallback::onPhyRead(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onPhyRead",
			"(Landroid/bluetooth/BluetoothDevice;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void BluetoothGattServerCallback::onPhyUpdate(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onPhyUpdate",
			"(Landroid/bluetooth/BluetoothDevice;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void BluetoothGattServerCallback::onServiceAdded(jint arg0, android::bluetooth::BluetoothGattService arg1) const
	{
		callMethod<void>(
			"onServiceAdded",
			"(ILandroid/bluetooth/BluetoothGattService;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::bluetooth

// Base class headers

