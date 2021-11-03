#include "./BluetoothAdapter.hpp"
#include "./BluetoothDevice.hpp"
#include "./BluetoothGattServer.hpp"
#include "./BluetoothGattServerCallback.hpp"
#include "../content/Context.hpp"
#include "./BluetoothManager.hpp"

namespace android::bluetooth
{
	// Fields
	
	// QAndroidJniObject forward
	BluetoothManager::BluetoothManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::bluetooth::BluetoothAdapter BluetoothManager::getAdapter()
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/bluetooth/BluetoothAdapter;"
		);
	}
	JObject BluetoothManager::getConnectedDevices(jint arg0)
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
	JObject BluetoothManager::getDevicesMatchingConnectionStates(jint arg0, jintArray arg1)
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

