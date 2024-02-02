#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JIntArray;
namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth
{
	class BluetoothGattCharacteristic;
}
namespace android::bluetooth
{
	class BluetoothGattDescriptor;
}
namespace android::bluetooth
{
	class BluetoothGattService;
}
namespace java::util
{
	class UUID;
}

namespace android::bluetooth
{
	class BluetoothGatt : public JObject
	{
	public:
		// Fields
		static jint CONNECTION_PRIORITY_BALANCED();
		static jint CONNECTION_PRIORITY_DCK();
		static jint CONNECTION_PRIORITY_HIGH();
		static jint CONNECTION_PRIORITY_LOW_POWER();
		static jint GATT_CONNECTION_CONGESTED();
		static jint GATT_FAILURE();
		static jint GATT_INSUFFICIENT_AUTHENTICATION();
		static jint GATT_INSUFFICIENT_AUTHORIZATION();
		static jint GATT_INSUFFICIENT_ENCRYPTION();
		static jint GATT_INVALID_ATTRIBUTE_LENGTH();
		static jint GATT_INVALID_OFFSET();
		static jint GATT_READ_NOT_PERMITTED();
		static jint GATT_REQUEST_NOT_SUPPORTED();
		static jint GATT_SUCCESS();
		static jint GATT_WRITE_NOT_PERMITTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothGatt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGatt(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void abortReliableWrite() const;
		void abortReliableWrite(android::bluetooth::BluetoothDevice arg0) const;
		jboolean beginReliableWrite() const;
		void close() const;
		jboolean connect() const;
		void disconnect() const;
		jboolean discoverServices() const;
		jboolean executeReliableWrite() const;
		JObject getConnectedDevices() const;
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0) const;
		android::bluetooth::BluetoothDevice getDevice() const;
		JObject getDevicesMatchingConnectionStates(JIntArray arg0) const;
		android::bluetooth::BluetoothGattService getService(java::util::UUID arg0) const;
		JObject getServices() const;
		jboolean readCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0) const;
		jboolean readDescriptor(android::bluetooth::BluetoothGattDescriptor arg0) const;
		void readPhy() const;
		jboolean readRemoteRssi() const;
		jboolean requestConnectionPriority(jint arg0) const;
		jboolean requestMtu(jint arg0) const;
		jboolean setCharacteristicNotification(android::bluetooth::BluetoothGattCharacteristic arg0, jboolean arg1) const;
		void setPreferredPhy(jint arg0, jint arg1, jint arg2) const;
		jboolean writeCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0) const;
		jint writeCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0, JByteArray arg1, jint arg2) const;
		jboolean writeDescriptor(android::bluetooth::BluetoothGattDescriptor arg0) const;
		jint writeDescriptor(android::bluetooth::BluetoothGattDescriptor arg0, JByteArray arg1) const;
	};
} // namespace android::bluetooth

