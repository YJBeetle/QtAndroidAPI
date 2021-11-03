#include "./BluetoothGatt.hpp"
#include "./BluetoothGattCharacteristic.hpp"
#include "./BluetoothGattDescriptor.hpp"
#include "./BluetoothGattCallback.hpp"

namespace android::bluetooth
{
	// Fields
	
	// QAndroidJniObject forward
	BluetoothGattCallback::BluetoothGattCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	BluetoothGattCallback::BluetoothGattCallback()
		: JObject(
			"android.bluetooth.BluetoothGattCallback",
			"()V"
		) {}
	
	// Methods
	void BluetoothGattCallback::onCharacteristicChanged(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1)
	{
		callMethod<void>(
			"onCharacteristicChanged",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void BluetoothGattCallback::onCharacteristicRead(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2)
	{
		callMethod<void>(
			"onCharacteristicRead",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void BluetoothGattCallback::onCharacteristicWrite(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2)
	{
		callMethod<void>(
			"onCharacteristicWrite",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void BluetoothGattCallback::onConnectionStateChange(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"onConnectionStateChange",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void BluetoothGattCallback::onDescriptorRead(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattDescriptor arg1, jint arg2)
	{
		callMethod<void>(
			"onDescriptorRead",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattDescriptor;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void BluetoothGattCallback::onDescriptorWrite(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattDescriptor arg1, jint arg2)
	{
		callMethod<void>(
			"onDescriptorWrite",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattDescriptor;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void BluetoothGattCallback::onMtuChanged(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"onMtuChanged",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void BluetoothGattCallback::onPhyRead(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3)
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
	void BluetoothGattCallback::onPhyUpdate(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3)
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
	void BluetoothGattCallback::onReadRemoteRssi(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"onReadRemoteRssi",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void BluetoothGattCallback::onReliableWriteCompleted(android::bluetooth::BluetoothGatt arg0, jint arg1)
	{
		callMethod<void>(
			"onReliableWriteCompleted",
			"(Landroid/bluetooth/BluetoothGatt;I)V",
			arg0.object(),
			arg1
		);
	}
	void BluetoothGattCallback::onServicesDiscovered(android::bluetooth::BluetoothGatt arg0, jint arg1)
	{
		callMethod<void>(
			"onServicesDiscovered",
			"(Landroid/bluetooth/BluetoothGatt;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

