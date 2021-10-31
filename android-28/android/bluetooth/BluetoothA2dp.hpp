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
	class BluetoothA2dp : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CONNECTION_STATE_CHANGED();
		static jstring ACTION_PLAYING_STATE_CHANGED();
		static jint STATE_NOT_PLAYING();
		static jint STATE_PLAYING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothA2dp(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothA2dp(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void finalize();
		__JniBaseClass getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		__JniBaseClass getDevicesMatchingConnectionStates(jintArray arg0);
		jboolean isA2dpPlaying(android::bluetooth::BluetoothDevice arg0);
	};
} // namespace android::bluetooth

