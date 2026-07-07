#pragma once

#include "../../JIntArray.hpp"
#include "./BluetoothDevice.def.hpp"
#include "../../JString.hpp"
#include "./BluetoothCsipSetCoordinator.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JString BluetoothCsipSetCoordinator::ACTION_CSIS_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothCsipSetCoordinator",
			"ACTION_CSIS_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline void BluetoothCsipSetCoordinator::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JObject BluetoothCsipSetCoordinator::getConnectedDevices() const
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	inline jint BluetoothCsipSetCoordinator::getConnectionState(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	inline JObject BluetoothCsipSetCoordinator::getDevicesMatchingConnectionStates(JIntArray arg0) const
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
