#include "../../JByteArray.hpp"
#include "./BluetoothDevice.hpp"
#include "./BluetoothHidDevice_Callback.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	BluetoothHidDevice_Callback::BluetoothHidDevice_Callback()
		: JObject(
			"android.bluetooth.BluetoothHidDevice$Callback",
			"()V"
		) {}
	
	// Methods
	void BluetoothHidDevice_Callback::onAppStatusChanged(android::bluetooth::BluetoothDevice arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onAppStatusChanged",
			"(Landroid/bluetooth/BluetoothDevice;Z)V",
			arg0.object(),
			arg1
		);
	}
	void BluetoothHidDevice_Callback::onConnectionStateChanged(android::bluetooth::BluetoothDevice arg0, jint arg1) const
	{
		callMethod<void>(
			"onConnectionStateChanged",
			"(Landroid/bluetooth/BluetoothDevice;I)V",
			arg0.object(),
			arg1
		);
	}
	void BluetoothHidDevice_Callback::onGetReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jint arg3) const
	{
		callMethod<void>(
			"onGetReport",
			"(Landroid/bluetooth/BluetoothDevice;BBI)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void BluetoothHidDevice_Callback::onInterruptData(android::bluetooth::BluetoothDevice arg0, jbyte arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"onInterruptData",
			"(Landroid/bluetooth/BluetoothDevice;B[B)V",
			arg0.object(),
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	void BluetoothHidDevice_Callback::onSetProtocol(android::bluetooth::BluetoothDevice arg0, jbyte arg1) const
	{
		callMethod<void>(
			"onSetProtocol",
			"(Landroid/bluetooth/BluetoothDevice;B)V",
			arg0.object(),
			arg1
		);
	}
	void BluetoothHidDevice_Callback::onSetReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, JByteArray arg3) const
	{
		callMethod<void>(
			"onSetReport",
			"(Landroid/bluetooth/BluetoothDevice;BB[B)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jbyteArray>()
		);
	}
	void BluetoothHidDevice_Callback::onVirtualCableUnplug(android::bluetooth::BluetoothDevice arg0) const
	{
		callMethod<void>(
			"onVirtualCableUnplug",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
} // namespace android::bluetooth

