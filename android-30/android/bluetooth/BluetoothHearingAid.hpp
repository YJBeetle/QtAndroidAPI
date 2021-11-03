#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}

namespace android::bluetooth
{
	class BluetoothHearingAid : public JObject
	{
	public:
		// Fields
		static jstring ACTION_CONNECTION_STATE_CHANGED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothHearingAid(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHearingAid(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		JObject getDevicesMatchingConnectionStates(jintArray arg0);
	};
} // namespace android::bluetooth

