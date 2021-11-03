#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}

namespace android::bluetooth
{
	class BluetoothLeAudio : public JObject
	{
	public:
		// Fields
		static jstring ACTION_LE_AUDIO_CONNECTION_STATE_CHANGED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothLeAudio(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeAudio(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		JObject getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		JObject getDevicesMatchingConnectionStates(jintArray arg0);
	};
} // namespace android::bluetooth

