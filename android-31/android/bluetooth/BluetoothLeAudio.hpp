#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}

namespace android::bluetooth
{
	class BluetoothLeAudio : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_LE_AUDIO_CONNECTION_STATE_CHANGED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothLeAudio(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeAudio(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		__JniBaseClass getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		__JniBaseClass getDevicesMatchingConnectionStates(jintArray arg0);
	};
} // namespace android::bluetooth

