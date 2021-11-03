#pragma once

#include "../../JObject.hpp"

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
	class BluetoothHealthCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothHealthCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHealthCallback(QAndroidJniObject obj);
		
		// Constructors
		BluetoothHealthCallback();
		
		// Methods
		void onHealthAppConfigurationStatusChange(android::bluetooth::BluetoothHealthAppConfiguration arg0, jint arg1);
		void onHealthChannelStateChange(android::bluetooth::BluetoothHealthAppConfiguration arg0, android::bluetooth::BluetoothDevice arg1, jint arg2, jint arg3, android::os::ParcelFileDescriptor arg4, jint arg5);
	};
} // namespace android::bluetooth

