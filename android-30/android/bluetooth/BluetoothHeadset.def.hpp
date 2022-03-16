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
	class BluetoothHeadset : public JObject
	{
	public:
		// Fields
		static JString ACTION_AUDIO_STATE_CHANGED();
		static JString ACTION_CONNECTION_STATE_CHANGED();
		static JString ACTION_VENDOR_SPECIFIC_HEADSET_EVENT();
		static jint AT_CMD_TYPE_ACTION();
		static jint AT_CMD_TYPE_BASIC();
		static jint AT_CMD_TYPE_READ();
		static jint AT_CMD_TYPE_SET();
		static jint AT_CMD_TYPE_TEST();
		static JString EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS();
		static JString EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD();
		static JString EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE();
		static jint STATE_AUDIO_CONNECTED();
		static jint STATE_AUDIO_CONNECTING();
		static jint STATE_AUDIO_DISCONNECTED();
		static JString VENDOR_RESULT_CODE_COMMAND_ANDROID();
		static JString VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothHeadset(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHeadset(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getConnectedDevices() const;
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0) const;
		JObject getDevicesMatchingConnectionStates(JIntArray arg0) const;
		jboolean isAudioConnected(android::bluetooth::BluetoothDevice arg0) const;
		jboolean sendVendorSpecificResultCode(android::bluetooth::BluetoothDevice arg0, JString arg1, JString arg2) const;
		jboolean startVoiceRecognition(android::bluetooth::BluetoothDevice arg0) const;
		jboolean stopVoiceRecognition(android::bluetooth::BluetoothDevice arg0) const;
	};
} // namespace android::bluetooth

