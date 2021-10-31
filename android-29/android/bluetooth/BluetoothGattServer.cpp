#include "./BluetoothDevice.hpp"
#include "./BluetoothGattCharacteristic.hpp"
#include "./BluetoothGattService.hpp"
#include "../../java/util/UUID.hpp"
#include "./BluetoothGattServer.hpp"

namespace android::bluetooth
{
	// Fields
	
	// QAndroidJniObject forward
	BluetoothGattServer::BluetoothGattServer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean BluetoothGattServer::addService(android::bluetooth::BluetoothGattService arg0)
	{
		return callMethod<jboolean>(
			"addService",
			"(Landroid/bluetooth/BluetoothGattService;)Z",
			arg0.object()
		);
	}
	void BluetoothGattServer::cancelConnection(android::bluetooth::BluetoothDevice arg0)
	{
		callMethod<void>(
			"cancelConnection",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
	void BluetoothGattServer::clearServices()
	{
		callMethod<void>(
			"clearServices",
			"()V"
		);
	}
	void BluetoothGattServer::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean BluetoothGattServer::connect(android::bluetooth::BluetoothDevice arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"connect",
			"(Landroid/bluetooth/BluetoothDevice;Z)Z",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass BluetoothGattServer::getConnectedDevices()
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothGattServer::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	__JniBaseClass BluetoothGattServer::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	android::bluetooth::BluetoothGattService BluetoothGattServer::getService(java::util::UUID arg0)
	{
		return callObjectMethod(
			"getService",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattService;",
			arg0.object()
		);
	}
	__JniBaseClass BluetoothGattServer::getServices()
	{
		return callObjectMethod(
			"getServices",
			"()Ljava/util/List;"
		);
	}
	jboolean BluetoothGattServer::notifyCharacteristicChanged(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jboolean arg2)
	{
		return callMethod<jboolean>(
			"notifyCharacteristicChanged",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothGattCharacteristic;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void BluetoothGattServer::readPhy(android::bluetooth::BluetoothDevice arg0)
	{
		callMethod<void>(
			"readPhy",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
	jboolean BluetoothGattServer::removeService(android::bluetooth::BluetoothGattService arg0)
	{
		return callMethod<jboolean>(
			"removeService",
			"(Landroid/bluetooth/BluetoothGattService;)Z",
			arg0.object()
		);
	}
	jboolean BluetoothGattServer::sendResponse(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4)
	{
		return callMethod<jboolean>(
			"sendResponse",
			"(Landroid/bluetooth/BluetoothDevice;III[B)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void BluetoothGattServer::setPreferredPhy(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setPreferredPhy",
			"(Landroid/bluetooth/BluetoothDevice;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::bluetooth

