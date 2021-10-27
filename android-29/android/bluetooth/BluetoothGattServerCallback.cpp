#include "./BluetoothDevice.hpp"
#include "./BluetoothGattCharacteristic.hpp"
#include "./BluetoothGattDescriptor.hpp"
#include "./BluetoothGattService.hpp"
#include "./BluetoothGattServerCallback.hpp"

namespace android::bluetooth
{
	// Fields
	
	BluetoothGattServerCallback::BluetoothGattServerCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BluetoothGattServerCallback::BluetoothGattServerCallback()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothGattServerCallback",
			"()V"
		);
	}
	
	// Methods
	void BluetoothGattServerCallback::onCharacteristicReadRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, android::bluetooth::BluetoothGattCharacteristic arg3)
	{
		__thiz.callMethod<void>(
			"onCharacteristicReadRequest",
			"(Landroid/bluetooth/BluetoothDevice;IILandroid/bluetooth/BluetoothGattCharacteristic;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void BluetoothGattServerCallback::onCharacteristicWriteRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, android::bluetooth::BluetoothGattCharacteristic arg2, jboolean arg3, jboolean arg4, jint arg5, jbyteArray arg6)
	{
		__thiz.callMethod<void>(
			"onCharacteristicWriteRequest",
			"(Landroid/bluetooth/BluetoothDevice;ILandroid/bluetooth/BluetoothGattCharacteristic;ZZI[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void BluetoothGattServerCallback::onConnectionStateChange(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onConnectionStateChange",
			"(Landroid/bluetooth/BluetoothDevice;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void BluetoothGattServerCallback::onDescriptorReadRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, android::bluetooth::BluetoothGattDescriptor arg3)
	{
		__thiz.callMethod<void>(
			"onDescriptorReadRequest",
			"(Landroid/bluetooth/BluetoothDevice;IILandroid/bluetooth/BluetoothGattDescriptor;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void BluetoothGattServerCallback::onDescriptorWriteRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, android::bluetooth::BluetoothGattDescriptor arg2, jboolean arg3, jboolean arg4, jint arg5, jbyteArray arg6)
	{
		__thiz.callMethod<void>(
			"onDescriptorWriteRequest",
			"(Landroid/bluetooth/BluetoothDevice;ILandroid/bluetooth/BluetoothGattDescriptor;ZZI[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void BluetoothGattServerCallback::onExecuteWrite(android::bluetooth::BluetoothDevice arg0, jint arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onExecuteWrite",
			"(Landroid/bluetooth/BluetoothDevice;IZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void BluetoothGattServerCallback::onMtuChanged(android::bluetooth::BluetoothDevice arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onMtuChanged",
			"(Landroid/bluetooth/BluetoothDevice;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BluetoothGattServerCallback::onNotificationSent(android::bluetooth::BluetoothDevice arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onNotificationSent",
			"(Landroid/bluetooth/BluetoothDevice;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BluetoothGattServerCallback::onPhyRead(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onPhyRead",
			"(Landroid/bluetooth/BluetoothDevice;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void BluetoothGattServerCallback::onPhyUpdate(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onPhyUpdate",
			"(Landroid/bluetooth/BluetoothDevice;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void BluetoothGattServerCallback::onServiceAdded(jint arg0, android::bluetooth::BluetoothGattService arg1)
	{
		__thiz.callMethod<void>(
			"onServiceAdded",
			"(ILandroid/bluetooth/BluetoothGattService;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::bluetooth

