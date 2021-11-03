#pragma once

#include "../../JObject.hpp"

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
		static jint CONNECTION_PRIORITY_HIGH();
		static jint CONNECTION_PRIORITY_LOW_POWER();
		static jint GATT_CONNECTION_CONGESTED();
		static jint GATT_FAILURE();
		static jint GATT_INSUFFICIENT_AUTHENTICATION();
		static jint GATT_INSUFFICIENT_ENCRYPTION();
		static jint GATT_INVALID_ATTRIBUTE_LENGTH();
		static jint GATT_INVALID_OFFSET();
		static jint GATT_READ_NOT_PERMITTED();
		static jint GATT_REQUEST_NOT_SUPPORTED();
		static jint GATT_SUCCESS();
		static jint GATT_WRITE_NOT_PERMITTED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothGatt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGatt(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void abortReliableWrite();
		void abortReliableWrite(android::bluetooth::BluetoothDevice arg0);
		jboolean beginReliableWrite();
		void close();
		jboolean connect();
		void disconnect();
		jboolean discoverServices();
		jboolean executeReliableWrite();
		JObject getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		android::bluetooth::BluetoothDevice getDevice();
		JObject getDevicesMatchingConnectionStates(JIntArray arg0);
		android::bluetooth::BluetoothGattService getService(java::util::UUID arg0);
		JObject getServices();
		jboolean readCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0);
		jboolean readDescriptor(android::bluetooth::BluetoothGattDescriptor arg0);
		void readPhy();
		jboolean readRemoteRssi();
		jboolean requestConnectionPriority(jint arg0);
		jboolean requestMtu(jint arg0);
		jboolean setCharacteristicNotification(android::bluetooth::BluetoothGattCharacteristic arg0, jboolean arg1);
		void setPreferredPhy(jint arg0, jint arg1, jint arg2);
		jboolean writeCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0);
		jboolean writeDescriptor(android::bluetooth::BluetoothGattDescriptor arg0);
	};
} // namespace android::bluetooth

