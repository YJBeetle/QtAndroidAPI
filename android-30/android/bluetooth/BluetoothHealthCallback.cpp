#include "./BluetoothDevice.hpp"
#include "./BluetoothHealthAppConfiguration.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "./BluetoothHealthCallback.hpp"

namespace android::bluetooth
{
	// Fields
	
	// QJniObject forward
	BluetoothHealthCallback::BluetoothHealthCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BluetoothHealthCallback::BluetoothHealthCallback()
		: JObject(
			"android.bluetooth.BluetoothHealthCallback",
			"()V"
		) {}
	
	// Methods
	void BluetoothHealthCallback::onHealthAppConfigurationStatusChange(android::bluetooth::BluetoothHealthAppConfiguration arg0, jint arg1)
	{
		callMethod<void>(
			"onHealthAppConfigurationStatusChange",
			"(Landroid/bluetooth/BluetoothHealthAppConfiguration;I)V",
			arg0.object(),
			arg1
		);
	}
	void BluetoothHealthCallback::onHealthChannelStateChange(android::bluetooth::BluetoothHealthAppConfiguration arg0, android::bluetooth::BluetoothDevice arg1, jint arg2, jint arg3, android::os::ParcelFileDescriptor arg4, jint arg5)
	{
		callMethod<void>(
			"onHealthChannelStateChange",
			"(Landroid/bluetooth/BluetoothHealthAppConfiguration;Landroid/bluetooth/BluetoothDevice;IILandroid/os/ParcelFileDescriptor;I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
} // namespace android::bluetooth

