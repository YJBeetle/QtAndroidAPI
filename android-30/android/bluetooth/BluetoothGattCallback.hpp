#pragma once

#include "./BluetoothGatt.def.hpp"
#include "./BluetoothGattCharacteristic.def.hpp"
#include "./BluetoothGattDescriptor.def.hpp"
#include "./BluetoothGattCallback.def.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	inline BluetoothGattCallback::BluetoothGattCallback()
		: JObject(
			"android.bluetooth.BluetoothGattCallback",
			"()V"
		) {}
	
	// Methods
	inline void BluetoothGattCallback::onCharacteristicChanged(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1) const
	{
		callMethod<void>(
			"onCharacteristicChanged",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void BluetoothGattCallback::onCharacteristicRead(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2) const
	{
		callMethod<void>(
			"onCharacteristicRead",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void BluetoothGattCallback::onCharacteristicWrite(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2) const
	{
		callMethod<void>(
			"onCharacteristicWrite",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void BluetoothGattCallback::onConnectionStateChange(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onConnectionStateChange",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void BluetoothGattCallback::onDescriptorRead(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattDescriptor arg1, jint arg2) const
	{
		callMethod<void>(
			"onDescriptorRead",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattDescriptor;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void BluetoothGattCallback::onDescriptorWrite(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattDescriptor arg1, jint arg2) const
	{
		callMethod<void>(
			"onDescriptorWrite",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattDescriptor;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void BluetoothGattCallback::onMtuChanged(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onMtuChanged",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void BluetoothGattCallback::onPhyRead(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onPhyRead",
			"(Landroid/bluetooth/BluetoothGatt;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void BluetoothGattCallback::onPhyUpdate(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onPhyUpdate",
			"(Landroid/bluetooth/BluetoothGatt;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void BluetoothGattCallback::onReadRemoteRssi(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onReadRemoteRssi",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void BluetoothGattCallback::onReliableWriteCompleted(android::bluetooth::BluetoothGatt arg0, jint arg1) const
	{
		callMethod<void>(
			"onReliableWriteCompleted",
			"(Landroid/bluetooth/BluetoothGatt;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void BluetoothGattCallback::onServicesDiscovered(android::bluetooth::BluetoothGatt arg0, jint arg1) const
	{
		callMethod<void>(
			"onServicesDiscovered",
			"(Landroid/bluetooth/BluetoothGatt;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
