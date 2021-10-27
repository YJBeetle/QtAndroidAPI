#include "./BluetoothDevice.hpp"
#include "./BluetoothGattCharacteristic.hpp"
#include "./BluetoothGattService.hpp"
#include "../../java/util/UUID.hpp"
#include "./BluetoothGattServer.hpp"

namespace android::bluetooth
{
	// Fields
	
	BluetoothGattServer::BluetoothGattServer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean BluetoothGattServer::addService(android::bluetooth::BluetoothGattService arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addService",
			"(Landroid/bluetooth/BluetoothGattService;)Z",
			arg0.__jniObject().object()
		);
	}
	void BluetoothGattServer::cancelConnection(android::bluetooth::BluetoothDevice arg0)
	{
		__thiz.callMethod<void>(
			"cancelConnection",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.__jniObject().object()
		);
	}
	void BluetoothGattServer::clearServices()
	{
		__thiz.callMethod<void>(
			"clearServices",
			"()V"
		);
	}
	void BluetoothGattServer::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean BluetoothGattServer::connect(android::bluetooth::BluetoothDevice arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"connect",
			"(Landroid/bluetooth/BluetoothDevice;Z)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject BluetoothGattServer::getConnectedDevices()
	{
		return __thiz.callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothGattServer::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothGattServer::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject BluetoothGattServer::getService(java::util::UUID arg0)
	{
		return __thiz.callObjectMethod(
			"getService",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattService;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothGattServer::getServices()
	{
		return __thiz.callObjectMethod(
			"getServices",
			"()Ljava/util/List;"
		);
	}
	jboolean BluetoothGattServer::notifyCharacteristicChanged(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"notifyCharacteristicChanged",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothGattCharacteristic;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void BluetoothGattServer::readPhy(android::bluetooth::BluetoothDevice arg0)
	{
		__thiz.callMethod<void>(
			"readPhy",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothGattServer::removeService(android::bluetooth::BluetoothGattService arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeService",
			"(Landroid/bluetooth/BluetoothGattService;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothGattServer::sendResponse(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4)
	{
		return __thiz.callMethod<jboolean>(
			"sendResponse",
			"(Landroid/bluetooth/BluetoothDevice;III[B)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void BluetoothGattServer::setPreferredPhy(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setPreferredPhy",
			"(Landroid/bluetooth/BluetoothDevice;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::bluetooth

