#include "./BluetoothGatt.hpp"
#include "./BluetoothGattCharacteristic.hpp"
#include "./BluetoothGattDescriptor.hpp"
#include "./BluetoothGattCallback.hpp"

namespace android::bluetooth
{
	// Fields
	
	BluetoothGattCallback::BluetoothGattCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BluetoothGattCallback::BluetoothGattCallback()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothGattCallback",
			"()V"
		);
	}
	
	// Methods
	void BluetoothGattCallback::onCharacteristicChanged(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1)
	{
		__thiz.callMethod<void>(
			"onCharacteristicChanged",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void BluetoothGattCallback::onCharacteristicRead(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onCharacteristicRead",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void BluetoothGattCallback::onCharacteristicWrite(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onCharacteristicWrite",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void BluetoothGattCallback::onConnectionStateChange(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onConnectionStateChange",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void BluetoothGattCallback::onDescriptorRead(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattDescriptor arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onDescriptorRead",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void BluetoothGattCallback::onDescriptorWrite(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattDescriptor arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onDescriptorWrite",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void BluetoothGattCallback::onMtuChanged(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onMtuChanged",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void BluetoothGattCallback::onPhyRead(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onPhyRead",
			"(Landroid/bluetooth/BluetoothGatt;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void BluetoothGattCallback::onPhyUpdate(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onPhyUpdate",
			"(Landroid/bluetooth/BluetoothGatt;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void BluetoothGattCallback::onReadRemoteRssi(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onReadRemoteRssi",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void BluetoothGattCallback::onReliableWriteCompleted(android::bluetooth::BluetoothGatt arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onReliableWriteCompleted",
			"(Landroid/bluetooth/BluetoothGatt;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BluetoothGattCallback::onServicesDiscovered(android::bluetooth::BluetoothGatt arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onServicesDiscovered",
			"(Landroid/bluetooth/BluetoothGatt;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth

