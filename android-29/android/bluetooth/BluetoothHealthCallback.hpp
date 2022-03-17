#pragma once

#include "./BluetoothDevice.def.hpp"
#include "./BluetoothHealthAppConfiguration.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "./BluetoothHealthCallback.def.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	inline BluetoothHealthCallback::BluetoothHealthCallback()
		: JObject(
			"android.bluetooth.BluetoothHealthCallback",
			"()V"
		) {}
	
	// Methods
	inline void BluetoothHealthCallback::onHealthAppConfigurationStatusChange(android::bluetooth::BluetoothHealthAppConfiguration arg0, jint arg1) const
	{
		callMethod<void>(
			"onHealthAppConfigurationStatusChange",
			"(Landroid/bluetooth/BluetoothHealthAppConfiguration;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void BluetoothHealthCallback::onHealthChannelStateChange(android::bluetooth::BluetoothHealthAppConfiguration arg0, android::bluetooth::BluetoothDevice arg1, jint arg2, jint arg3, android::os::ParcelFileDescriptor arg4, jint arg5) const
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

// Base class headers

