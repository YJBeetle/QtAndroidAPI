#pragma once

#include "../../__JniBaseClass.hpp"

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
	class BluetoothGattServer : public __JniBaseClass
	{
	public:
		// Fields
		
		BluetoothGattServer(QAndroidJniObject obj);
		// Constructors
		BluetoothGattServer() = default;
		
		// Methods
		jboolean addService(android::bluetooth::BluetoothGattService arg0);
		void cancelConnection(android::bluetooth::BluetoothDevice arg0);
		void clearServices();
		void close();
		jboolean connect(android::bluetooth::BluetoothDevice arg0, jboolean arg1);
		QAndroidJniObject getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		QAndroidJniObject getDevicesMatchingConnectionStates(jintArray arg0);
		QAndroidJniObject getService(java::util::UUID arg0);
		QAndroidJniObject getServices();
		jboolean notifyCharacteristicChanged(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jboolean arg2);
		void readPhy(android::bluetooth::BluetoothDevice arg0);
		jboolean removeService(android::bluetooth::BluetoothGattService arg0);
		jboolean sendResponse(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4);
		void setPreferredPhy(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::bluetooth

