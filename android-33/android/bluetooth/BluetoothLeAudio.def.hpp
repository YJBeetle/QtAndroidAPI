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
	class BluetoothLeAudio : public JObject
	{
	public:
		// Fields
		static JString ACTION_LE_AUDIO_CONNECTION_STATE_CHANGED();
		static jint GROUP_ID_INVALID();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothLeAudio(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeAudio(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		JObject getConnectedDevices() const;
		android::bluetooth::BluetoothDevice getConnectedGroupLeadDevice(jint arg0) const;
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0) const;
		JObject getDevicesMatchingConnectionStates(JIntArray arg0) const;
		jint getGroupId(android::bluetooth::BluetoothDevice arg0) const;
	};
} // namespace android::bluetooth

