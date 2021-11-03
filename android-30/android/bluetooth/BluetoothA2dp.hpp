#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::bluetooth
{
	class BluetoothDevice;
}
class JString;

namespace android::bluetooth
{
	class BluetoothA2dp : public JObject
	{
	public:
		// Fields
		static JString ACTION_CONNECTION_STATE_CHANGED();
		static JString ACTION_PLAYING_STATE_CHANGED();
		static jint STATE_NOT_PLAYING();
		static jint STATE_PLAYING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothA2dp(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothA2dp(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void finalize();
		JObject getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		JObject getDevicesMatchingConnectionStates(JIntArray arg0);
		jboolean isA2dpPlaying(android::bluetooth::BluetoothDevice arg0);
	};
} // namespace android::bluetooth

