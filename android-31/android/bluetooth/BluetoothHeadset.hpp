#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}

namespace android::bluetooth
{
	class BluetoothHeadset : public JObject
	{
	public:
		// Fields
		static jstring ACTION_AUDIO_STATE_CHANGED();
		static jstring ACTION_CONNECTION_STATE_CHANGED();
		static jstring ACTION_VENDOR_SPECIFIC_HEADSET_EVENT();
		static jint AT_CMD_TYPE_ACTION();
		static jint AT_CMD_TYPE_BASIC();
		static jint AT_CMD_TYPE_READ();
		static jint AT_CMD_TYPE_SET();
		static jint AT_CMD_TYPE_TEST();
		static jstring EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS();
		static jstring EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD();
		static jstring EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE();
		static jint STATE_AUDIO_CONNECTED();
		static jint STATE_AUDIO_CONNECTING();
		static jint STATE_AUDIO_DISCONNECTED();
		static jstring VENDOR_RESULT_CODE_COMMAND_ANDROID();
		static jstring VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothHeadset(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHeadset(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		JObject getDevicesMatchingConnectionStates(jintArray arg0);
		jboolean isAudioConnected(android::bluetooth::BluetoothDevice arg0);
		jboolean isNoiseReductionSupported(android::bluetooth::BluetoothDevice arg0);
		jboolean isVoiceRecognitionSupported(android::bluetooth::BluetoothDevice arg0);
		jboolean sendVendorSpecificResultCode(android::bluetooth::BluetoothDevice arg0, jstring arg1, jstring arg2);
		jboolean startVoiceRecognition(android::bluetooth::BluetoothDevice arg0);
		jboolean stopVoiceRecognition(android::bluetooth::BluetoothDevice arg0);
	};
} // namespace android::bluetooth

