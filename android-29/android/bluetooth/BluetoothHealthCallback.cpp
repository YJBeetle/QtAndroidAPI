#include "./BluetoothDevice.hpp"
#include "./BluetoothHealthAppConfiguration.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "./BluetoothHealthCallback.hpp"

namespace android::bluetooth
{
	// Fields
	
	BluetoothHealthCallback::BluetoothHealthCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BluetoothHealthCallback::BluetoothHealthCallback()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHealthCallback",
			"()V"
		);
	}
	
	// Methods
	void BluetoothHealthCallback::onHealthAppConfigurationStatusChange(android::bluetooth::BluetoothHealthAppConfiguration arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onHealthAppConfigurationStatusChange",
			"(Landroid/bluetooth/BluetoothHealthAppConfiguration;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BluetoothHealthCallback::onHealthChannelStateChange(android::bluetooth::BluetoothHealthAppConfiguration arg0, android::bluetooth::BluetoothDevice arg1, jint arg2, jint arg3, android::os::ParcelFileDescriptor arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"onHealthChannelStateChange",
			"(Landroid/bluetooth/BluetoothHealthAppConfiguration;Landroid/bluetooth/BluetoothDevice;IILandroid/os/ParcelFileDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5
		);
	}
} // namespace android::bluetooth

