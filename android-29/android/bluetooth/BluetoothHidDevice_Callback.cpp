#include "./BluetoothDevice.hpp"
#include "./BluetoothHidDevice_Callback.hpp"

namespace android::bluetooth
{
	// Fields
	
	BluetoothHidDevice_Callback::BluetoothHidDevice_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BluetoothHidDevice_Callback::BluetoothHidDevice_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHidDevice$Callback",
			"()V"
		);
	}
	
	// Methods
	void BluetoothHidDevice_Callback::onAppStatusChanged(android::bluetooth::BluetoothDevice arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onAppStatusChanged",
			"(Landroid/bluetooth/BluetoothDevice;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BluetoothHidDevice_Callback::onConnectionStateChanged(android::bluetooth::BluetoothDevice arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionStateChanged",
			"(Landroid/bluetooth/BluetoothDevice;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BluetoothHidDevice_Callback::onGetReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onGetReport",
			"(Landroid/bluetooth/BluetoothDevice;BBI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void BluetoothHidDevice_Callback::onInterruptData(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"onInterruptData",
			"(Landroid/bluetooth/BluetoothDevice;B[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void BluetoothHidDevice_Callback::onSetProtocol(android::bluetooth::BluetoothDevice arg0, jbyte arg1)
	{
		__thiz.callMethod<void>(
			"onSetProtocol",
			"(Landroid/bluetooth/BluetoothDevice;B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BluetoothHidDevice_Callback::onSetReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jbyteArray arg3)
	{
		__thiz.callMethod<void>(
			"onSetReport",
			"(Landroid/bluetooth/BluetoothDevice;BB[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void BluetoothHidDevice_Callback::onVirtualCableUnplug(android::bluetooth::BluetoothDevice arg0)
	{
		__thiz.callMethod<void>(
			"onVirtualCableUnplug",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::bluetooth

