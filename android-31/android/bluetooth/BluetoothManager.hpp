#pragma once

#include "../../JIntArray.hpp"
#include "./BluetoothAdapter.def.hpp"
#include "./BluetoothDevice.def.hpp"
#include "./BluetoothGattServer.def.hpp"
#include "./BluetoothGattServerCallback.def.hpp"
#include "../content/Context.def.hpp"
#include "./BluetoothManager.def.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::bluetooth::BluetoothAdapter BluetoothManager::getAdapter() const
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/bluetooth/BluetoothAdapter;"
		);
	}
	inline JObject BluetoothManager::getConnectedDevices(jint arg0) const
	{
		return callObjectMethod(
			"getConnectedDevices",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline jint BluetoothManager::getConnectionState(android::bluetooth::BluetoothDevice arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;I)I",
			arg0.object(),
			arg1
		);
	}
	inline JObject BluetoothManager::getDevicesMatchingConnectionStates(jint arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"(I[I)Ljava/util/List;",
			arg0,
			arg1.object<jintArray>()
		);
	}
	inline android::bluetooth::BluetoothGattServer BluetoothManager::openGattServer(android::content::Context arg0, android::bluetooth::BluetoothGattServerCallback arg1) const
	{
		return callObjectMethod(
			"openGattServer",
			"(Landroid/content/Context;Landroid/bluetooth/BluetoothGattServerCallback;)Landroid/bluetooth/BluetoothGattServer;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::bluetooth

// Base class headers

