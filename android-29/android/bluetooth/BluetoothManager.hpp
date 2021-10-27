#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothAdapter;
}
namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth
{
	class BluetoothGattServer;
}
namespace android::bluetooth
{
	class BluetoothGattServerCallback;
}
namespace android::content
{
	class Context;
}

namespace android::bluetooth
{
	class BluetoothManager : public __JniBaseClass
	{
	public:
		// Fields
		
		BluetoothManager(QAndroidJniObject obj);
		// Constructors
		BluetoothManager() = default;
		
		// Methods
		QAndroidJniObject getAdapter();
		QAndroidJniObject getConnectedDevices(jint arg0);
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0, jint arg1);
		QAndroidJniObject getDevicesMatchingConnectionStates(jint arg0, jintArray arg1);
		QAndroidJniObject openGattServer(android::content::Context arg0, android::bluetooth::BluetoothGattServerCallback arg1);
	};
} // namespace android::bluetooth

