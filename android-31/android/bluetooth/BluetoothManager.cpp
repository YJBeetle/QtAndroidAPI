#include "./BluetoothAdapter.hpp"
#include "./BluetoothDevice.hpp"
#include "./BluetoothGattServer.hpp"
#include "./BluetoothGattServerCallback.hpp"
#include "../content/Context.hpp"
#include "./BluetoothManager.hpp"

namespace android::bluetooth
{
	// Fields
	
	// QJniObject forward
	BluetoothManager::BluetoothManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::bluetooth::BluetoothAdapter BluetoothManager::getAdapter()
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/bluetooth/BluetoothAdapter;"
		);
	}
	__JniBaseClass BluetoothManager::getConnectedDevices(jint arg0)
	{
		return callObjectMethod(
			"getConnectedDevices",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jint BluetoothManager::getConnectionState(android::bluetooth::BluetoothDevice arg0, jint arg1)
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;I)I",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass BluetoothManager::getDevicesMatchingConnectionStates(jint arg0, jintArray arg1)
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"(I[I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	android::bluetooth::BluetoothGattServer BluetoothManager::openGattServer(android::content::Context arg0, android::bluetooth::BluetoothGattServerCallback arg1)
	{
		return callObjectMethod(
			"openGattServer",
			"(Landroid/content/Context;Landroid/bluetooth/BluetoothGattServerCallback;)Landroid/bluetooth/BluetoothGattServer;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::bluetooth

