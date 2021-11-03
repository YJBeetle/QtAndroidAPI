#pragma once

#include "../../JObject.hpp"

class JIntArray;
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
	class BluetoothManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::bluetooth::BluetoothAdapter getAdapter() const;
		JObject getConnectedDevices(jint arg0) const;
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0, jint arg1) const;
		JObject getDevicesMatchingConnectionStates(jint arg0, JIntArray arg1) const;
		android::bluetooth::BluetoothGattServer openGattServer(android::content::Context arg0, android::bluetooth::BluetoothGattServerCallback arg1) const;
	};
} // namespace android::bluetooth

