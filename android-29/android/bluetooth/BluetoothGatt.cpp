#include "./BluetoothDevice.hpp"
#include "./BluetoothGattCharacteristic.hpp"
#include "./BluetoothGattDescriptor.hpp"
#include "./BluetoothGattService.hpp"
#include "../../java/util/UUID.hpp"
#include "./BluetoothGatt.hpp"

namespace android::bluetooth
{
	// Fields
	jint BluetoothGatt::CONNECTION_PRIORITY_BALANCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"CONNECTION_PRIORITY_BALANCED"
		);
	}
	jint BluetoothGatt::CONNECTION_PRIORITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"CONNECTION_PRIORITY_HIGH"
		);
	}
	jint BluetoothGatt::CONNECTION_PRIORITY_LOW_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"CONNECTION_PRIORITY_LOW_POWER"
		);
	}
	jint BluetoothGatt::GATT_CONNECTION_CONGESTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_CONNECTION_CONGESTED"
		);
	}
	jint BluetoothGatt::GATT_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_FAILURE"
		);
	}
	jint BluetoothGatt::GATT_INSUFFICIENT_AUTHENTICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INSUFFICIENT_AUTHENTICATION"
		);
	}
	jint BluetoothGatt::GATT_INSUFFICIENT_ENCRYPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INSUFFICIENT_ENCRYPTION"
		);
	}
	jint BluetoothGatt::GATT_INVALID_ATTRIBUTE_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INVALID_ATTRIBUTE_LENGTH"
		);
	}
	jint BluetoothGatt::GATT_INVALID_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INVALID_OFFSET"
		);
	}
	jint BluetoothGatt::GATT_READ_NOT_PERMITTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_READ_NOT_PERMITTED"
		);
	}
	jint BluetoothGatt::GATT_REQUEST_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_REQUEST_NOT_SUPPORTED"
		);
	}
	jint BluetoothGatt::GATT_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_SUCCESS"
		);
	}
	jint BluetoothGatt::GATT_WRITE_NOT_PERMITTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_WRITE_NOT_PERMITTED"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothGatt::BluetoothGatt(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void BluetoothGatt::abortReliableWrite()
	{
		callMethod<void>(
			"abortReliableWrite",
			"()V"
		);
	}
	void BluetoothGatt::abortReliableWrite(android::bluetooth::BluetoothDevice arg0)
	{
		callMethod<void>(
			"abortReliableWrite",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
	jboolean BluetoothGatt::beginReliableWrite()
	{
		return callMethod<jboolean>(
			"beginReliableWrite",
			"()Z"
		);
	}
	void BluetoothGatt::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean BluetoothGatt::connect()
	{
		return callMethod<jboolean>(
			"connect",
			"()Z"
		);
	}
	void BluetoothGatt::disconnect()
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	jboolean BluetoothGatt::discoverServices()
	{
		return callMethod<jboolean>(
			"discoverServices",
			"()Z"
		);
	}
	jboolean BluetoothGatt::executeReliableWrite()
	{
		return callMethod<jboolean>(
			"executeReliableWrite",
			"()Z"
		);
	}
	QAndroidJniObject BluetoothGatt::getConnectedDevices()
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothGatt::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	QAndroidJniObject BluetoothGatt::getDevice()
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	QAndroidJniObject BluetoothGatt::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject BluetoothGatt::getService(java::util::UUID arg0)
	{
		return callObjectMethod(
			"getService",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattService;",
			arg0.object()
		);
	}
	QAndroidJniObject BluetoothGatt::getServices()
	{
		return callObjectMethod(
			"getServices",
			"()Ljava/util/List;"
		);
	}
	jboolean BluetoothGatt::readCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0)
	{
		return callMethod<jboolean>(
			"readCharacteristic",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;)Z",
			arg0.object()
		);
	}
	jboolean BluetoothGatt::readDescriptor(android::bluetooth::BluetoothGattDescriptor arg0)
	{
		return callMethod<jboolean>(
			"readDescriptor",
			"(Landroid/bluetooth/BluetoothGattDescriptor;)Z",
			arg0.object()
		);
	}
	void BluetoothGatt::readPhy()
	{
		callMethod<void>(
			"readPhy",
			"()V"
		);
	}
	jboolean BluetoothGatt::readRemoteRssi()
	{
		return callMethod<jboolean>(
			"readRemoteRssi",
			"()Z"
		);
	}
	jboolean BluetoothGatt::requestConnectionPriority(jint arg0)
	{
		return callMethod<jboolean>(
			"requestConnectionPriority",
			"(I)Z",
			arg0
		);
	}
	jboolean BluetoothGatt::requestMtu(jint arg0)
	{
		return callMethod<jboolean>(
			"requestMtu",
			"(I)Z",
			arg0
		);
	}
	jboolean BluetoothGatt::setCharacteristicNotification(android::bluetooth::BluetoothGattCharacteristic arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setCharacteristicNotification",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;Z)Z",
			arg0.object(),
			arg1
		);
	}
	void BluetoothGatt::setPreferredPhy(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setPreferredPhy",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean BluetoothGatt::writeCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0)
	{
		return callMethod<jboolean>(
			"writeCharacteristic",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;)Z",
			arg0.object()
		);
	}
	jboolean BluetoothGatt::writeDescriptor(android::bluetooth::BluetoothGattDescriptor arg0)
	{
		return callMethod<jboolean>(
			"writeDescriptor",
			"(Landroid/bluetooth/BluetoothGattDescriptor;)Z",
			arg0.object()
		);
	}
} // namespace android::bluetooth

