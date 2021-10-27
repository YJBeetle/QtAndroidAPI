#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::content
{
	class Context;
}

namespace android::bluetooth
{
	class BluetoothHearingAid : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CONNECTION_STATE_CHANGED();
		
		BluetoothHearingAid(QAndroidJniObject obj);
		// Constructors
		BluetoothHearingAid() = default;
		
		// Methods
		QAndroidJniObject getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		QAndroidJniObject getDevicesMatchingConnectionStates(jintArray arg0);
	};
} // namespace android::bluetooth

