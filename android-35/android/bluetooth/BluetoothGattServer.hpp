#pragma once

#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "./BluetoothDevice.def.hpp"
#include "./BluetoothGattCharacteristic.def.hpp"
#include "./BluetoothGattService.def.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./BluetoothGattServer.def.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean BluetoothGattServer::addService(android::bluetooth::BluetoothGattService arg0) const
	{
		return callMethod<jboolean>(
			"addService",
			"(Landroid/bluetooth/BluetoothGattService;)Z",
			arg0.object()
		);
	}
	inline void BluetoothGattServer::cancelConnection(android::bluetooth::BluetoothDevice arg0) const
	{
		callMethod<void>(
			"cancelConnection",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
	inline void BluetoothGattServer::clearServices() const
	{
		callMethod<void>(
			"clearServices",
			"()V"
		);
	}
	inline void BluetoothGattServer::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean BluetoothGattServer::connect(android::bluetooth::BluetoothDevice arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"connect",
			"(Landroid/bluetooth/BluetoothDevice;Z)Z",
			arg0.object(),
			arg1
		);
	}
	inline JObject BluetoothGattServer::getConnectedDevices() const
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	inline jint BluetoothGattServer::getConnectionState(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	inline JObject BluetoothGattServer::getDevicesMatchingConnectionStates(JIntArray arg0) const
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
	inline android::bluetooth::BluetoothGattService BluetoothGattServer::getService(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"getService",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattService;",
			arg0.object()
		);
	}
	inline JObject BluetoothGattServer::getServices() const
	{
		return callObjectMethod(
			"getServices",
			"()Ljava/util/List;"
		);
	}
	inline jboolean BluetoothGattServer::notifyCharacteristicChanged(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"notifyCharacteristicChanged",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothGattCharacteristic;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jint BluetoothGattServer::notifyCharacteristicChanged(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jboolean arg2, JByteArray arg3) const
	{
		return callMethod<jint>(
			"notifyCharacteristicChanged",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothGattCharacteristic;Z[B)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jbyteArray>()
		);
	}
	inline void BluetoothGattServer::readPhy(android::bluetooth::BluetoothDevice arg0) const
	{
		callMethod<void>(
			"readPhy",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
	inline jboolean BluetoothGattServer::removeService(android::bluetooth::BluetoothGattService arg0) const
	{
		return callMethod<jboolean>(
			"removeService",
			"(Landroid/bluetooth/BluetoothGattService;)Z",
			arg0.object()
		);
	}
	inline jboolean BluetoothGattServer::sendResponse(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4) const
	{
		return callMethod<jboolean>(
			"sendResponse",
			"(Landroid/bluetooth/BluetoothDevice;III[B)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object<jbyteArray>()
		);
	}
	inline void BluetoothGattServer::setPreferredPhy(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
