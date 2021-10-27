#include "./BluetoothAdapter.hpp"
#include "./BluetoothDevice.hpp"
#include "./BluetoothGattServer.hpp"
#include "./BluetoothGattServerCallback.hpp"
#include "../content/Context.hpp"
#include "./BluetoothManager.hpp"

namespace android::bluetooth
{
	// Fields
	
	BluetoothManager::BluetoothManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject BluetoothManager::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/bluetooth/BluetoothAdapter;"
		);
	}
	QAndroidJniObject BluetoothManager::getConnectedDevices(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getConnectedDevices",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jint BluetoothManager::getConnectionState(android::bluetooth::BluetoothDevice arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject BluetoothManager::getDevicesMatchingConnectionStates(jint arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"(I[I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject BluetoothManager::openGattServer(android::content::Context arg0, android::bluetooth::BluetoothGattServerCallback arg1)
	{
		return __thiz.callObjectMethod(
			"openGattServer",
			"(Landroid/content/Context;Landroid/bluetooth/BluetoothGattServerCallback;)Landroid/bluetooth/BluetoothGattServer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::bluetooth

