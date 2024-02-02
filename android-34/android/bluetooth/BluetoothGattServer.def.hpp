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
	class BluetoothGattService;
}
namespace java::util
{
	class UUID;
}

namespace android::bluetooth
{
	class BluetoothGattServer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothGattServer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGattServer(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean addService(android::bluetooth::BluetoothGattService arg0) const;
		void cancelConnection(android::bluetooth::BluetoothDevice arg0) const;
		void clearServices() const;
		void close() const;
		jboolean connect(android::bluetooth::BluetoothDevice arg0, jboolean arg1) const;
		JObject getConnectedDevices() const;
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0) const;
		JObject getDevicesMatchingConnectionStates(JIntArray arg0) const;
		android::bluetooth::BluetoothGattService getService(java::util::UUID arg0) const;
		JObject getServices() const;
		jboolean notifyCharacteristicChanged(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jboolean arg2) const;
		jint notifyCharacteristicChanged(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jboolean arg2, JByteArray arg3) const;
		void readPhy(android::bluetooth::BluetoothDevice arg0) const;
		jboolean removeService(android::bluetooth::BluetoothGattService arg0) const;
		jboolean sendResponse(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4) const;
		void setPreferredPhy(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3) const;
	};
} // namespace android::bluetooth

