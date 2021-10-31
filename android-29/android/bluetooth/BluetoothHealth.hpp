#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth
{
	class BluetoothHealthAppConfiguration;
}
namespace android::bluetooth
{
	class BluetoothHealthCallback;
}
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::bluetooth
{
	class BluetoothHealth : public __JniBaseClass
	{
	public:
		// Fields
		static jint APP_CONFIG_REGISTRATION_FAILURE();
		static jint APP_CONFIG_REGISTRATION_SUCCESS();
		static jint APP_CONFIG_UNREGISTRATION_FAILURE();
		static jint APP_CONFIG_UNREGISTRATION_SUCCESS();
		static jint CHANNEL_TYPE_RELIABLE();
		static jint CHANNEL_TYPE_STREAMING();
		static jint SINK_ROLE();
		static jint SOURCE_ROLE();
		static jint STATE_CHANNEL_CONNECTED();
		static jint STATE_CHANNEL_CONNECTING();
		static jint STATE_CHANNEL_DISCONNECTED();
		static jint STATE_CHANNEL_DISCONNECTING();
		
		BluetoothHealth(QAndroidJniObject obj);
		// Constructors
		BluetoothHealth() = default;
		
		// Methods
		jboolean connectChannelToSource(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1);
		jboolean disconnectChannel(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1, jint arg2);
		QAndroidJniObject getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		QAndroidJniObject getDevicesMatchingConnectionStates(jintArray arg0);
		QAndroidJniObject getMainChannelFd(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1);
		jboolean registerSinkAppConfiguration(jstring arg0, jint arg1, android::bluetooth::BluetoothHealthCallback arg2);
		jboolean unregisterAppConfiguration(android::bluetooth::BluetoothHealthAppConfiguration arg0);
	};
} // namespace android::bluetooth

