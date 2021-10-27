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
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::bluetooth
{
	class BluetoothHealthCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		BluetoothHealthCallback(QAndroidJniObject obj);
		// Constructors
		BluetoothHealthCallback();
		
		// Methods
		void onHealthAppConfigurationStatusChange(android::bluetooth::BluetoothHealthAppConfiguration arg0, jint arg1);
		void onHealthChannelStateChange(android::bluetooth::BluetoothHealthAppConfiguration arg0, android::bluetooth::BluetoothDevice arg1, jint arg2, jint arg3, android::os::ParcelFileDescriptor arg4, jint arg5);
	};
} // namespace android::bluetooth

