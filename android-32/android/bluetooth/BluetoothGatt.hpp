#pragma once

#include "../../JIntArray.hpp"
#include "./BluetoothDevice.def.hpp"
#include "./BluetoothGattCharacteristic.def.hpp"
#include "./BluetoothGattDescriptor.def.hpp"
#include "./BluetoothGattService.def.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./BluetoothGatt.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline jint BluetoothGatt::CONNECTION_PRIORITY_BALANCED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"CONNECTION_PRIORITY_BALANCED"
		);
	}
	inline jint BluetoothGatt::CONNECTION_PRIORITY_HIGH()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"CONNECTION_PRIORITY_HIGH"
		);
	}
	inline jint BluetoothGatt::CONNECTION_PRIORITY_LOW_POWER()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"CONNECTION_PRIORITY_LOW_POWER"
		);
	}
	inline jint BluetoothGatt::GATT_CONNECTION_CONGESTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_CONNECTION_CONGESTED"
		);
	}
	inline jint BluetoothGatt::GATT_FAILURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_FAILURE"
		);
	}
	inline jint BluetoothGatt::GATT_INSUFFICIENT_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INSUFFICIENT_AUTHENTICATION"
		);
	}
	inline jint BluetoothGatt::GATT_INSUFFICIENT_ENCRYPTION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INSUFFICIENT_ENCRYPTION"
		);
	}
	inline jint BluetoothGatt::GATT_INVALID_ATTRIBUTE_LENGTH()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INVALID_ATTRIBUTE_LENGTH"
		);
	}
	inline jint BluetoothGatt::GATT_INVALID_OFFSET()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INVALID_OFFSET"
		);
	}
	inline jint BluetoothGatt::GATT_READ_NOT_PERMITTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_READ_NOT_PERMITTED"
		);
	}
	inline jint BluetoothGatt::GATT_REQUEST_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_REQUEST_NOT_SUPPORTED"
		);
	}
	inline jint BluetoothGatt::GATT_SUCCESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_SUCCESS"
		);
	}
	inline jint BluetoothGatt::GATT_WRITE_NOT_PERMITTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_WRITE_NOT_PERMITTED"
		);
	}
	
	// Constructors
	
	// Methods
	inline void BluetoothGatt::abortReliableWrite() const
	{
		callMethod<void>(
			"abortReliableWrite",
			"()V"
		);
	}
	inline void BluetoothGatt::abortReliableWrite(android::bluetooth::BluetoothDevice arg0) const
	{
		callMethod<void>(
			"abortReliableWrite",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
	inline jboolean BluetoothGatt::beginReliableWrite() const
	{
		return callMethod<jboolean>(
			"beginReliableWrite",
			"()Z"
		);
	}
	inline void BluetoothGatt::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean BluetoothGatt::connect() const
	{
		return callMethod<jboolean>(
			"connect",
			"()Z"
		);
	}
	inline void BluetoothGatt::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	inline jboolean BluetoothGatt::discoverServices() const
	{
		return callMethod<jboolean>(
			"discoverServices",
			"()Z"
		);
	}
	inline jboolean BluetoothGatt::executeReliableWrite() const
	{
		return callMethod<jboolean>(
			"executeReliableWrite",
			"()Z"
		);
	}
	inline JObject BluetoothGatt::getConnectedDevices() const
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	inline jint BluetoothGatt::getConnectionState(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	inline android::bluetooth::BluetoothDevice BluetoothGatt::getDevice() const
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	inline JObject BluetoothGatt::getDevicesMatchingConnectionStates(JIntArray arg0) const
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
	inline android::bluetooth::BluetoothGattService BluetoothGatt::getService(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"getService",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattService;",
			arg0.object()
		);
	}
	inline JObject BluetoothGatt::getServices() const
	{
		return callObjectMethod(
			"getServices",
			"()Ljava/util/List;"
		);
	}
	inline jboolean BluetoothGatt::readCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0) const
	{
		return callMethod<jboolean>(
			"readCharacteristic",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;)Z",
			arg0.object()
		);
	}
	inline jboolean BluetoothGatt::readDescriptor(android::bluetooth::BluetoothGattDescriptor arg0) const
	{
		return callMethod<jboolean>(
			"readDescriptor",
			"(Landroid/bluetooth/BluetoothGattDescriptor;)Z",
			arg0.object()
		);
	}
	inline void BluetoothGatt::readPhy() const
	{
		callMethod<void>(
			"readPhy",
			"()V"
		);
	}
	inline jboolean BluetoothGatt::readRemoteRssi() const
	{
		return callMethod<jboolean>(
			"readRemoteRssi",
			"()Z"
		);
	}
	inline jboolean BluetoothGatt::requestConnectionPriority(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestConnectionPriority",
			"(I)Z",
			arg0
		);
	}
	inline jboolean BluetoothGatt::requestMtu(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestMtu",
			"(I)Z",
			arg0
		);
	}
	inline jboolean BluetoothGatt::setCharacteristicNotification(android::bluetooth::BluetoothGattCharacteristic arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setCharacteristicNotification",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;Z)Z",
			arg0.object(),
			arg1
		);
	}
	inline void BluetoothGatt::setPreferredPhy(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setPreferredPhy",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean BluetoothGatt::writeCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0) const
	{
		return callMethod<jboolean>(
			"writeCharacteristic",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;)Z",
			arg0.object()
		);
	}
	inline jboolean BluetoothGatt::writeDescriptor(android::bluetooth::BluetoothGattDescriptor arg0) const
	{
		return callMethod<jboolean>(
			"writeDescriptor",
			"(Landroid/bluetooth/BluetoothGattDescriptor;)Z",
			arg0.object()
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
