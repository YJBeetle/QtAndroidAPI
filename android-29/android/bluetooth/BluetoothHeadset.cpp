#include "./BluetoothDevice.hpp"
#include "../content/Context.hpp"
#include "./BluetoothHeadset.hpp"

namespace android::bluetooth
{
	// Fields
	jstring BluetoothHeadset::ACTION_AUDIO_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"ACTION_AUDIO_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHeadset::ACTION_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHeadset::ACTION_VENDOR_SPECIFIC_HEADSET_EVENT()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"ACTION_VENDOR_SPECIFIC_HEADSET_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothHeadset::AT_CMD_TYPE_ACTION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_ACTION"
		);
	}
	jint BluetoothHeadset::AT_CMD_TYPE_BASIC()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_BASIC"
		);
	}
	jint BluetoothHeadset::AT_CMD_TYPE_READ()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_READ"
		);
	}
	jint BluetoothHeadset::AT_CMD_TYPE_SET()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_SET"
		);
	}
	jint BluetoothHeadset::AT_CMD_TYPE_TEST()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_TEST"
		);
	}
	jstring BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothHeadset::STATE_AUDIO_CONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"STATE_AUDIO_CONNECTED"
		);
	}
	jint BluetoothHeadset::STATE_AUDIO_CONNECTING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"STATE_AUDIO_CONNECTING"
		);
	}
	jint BluetoothHeadset::STATE_AUDIO_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"STATE_AUDIO_DISCONNECTED"
		);
	}
	jstring BluetoothHeadset::VENDOR_RESULT_CODE_COMMAND_ANDROID()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"VENDOR_RESULT_CODE_COMMAND_ANDROID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHeadset::VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	BluetoothHeadset::BluetoothHeadset(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject BluetoothHeadset::getConnectedDevices()
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothHeadset::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	JObject BluetoothHeadset::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	jboolean BluetoothHeadset::isAudioConnected(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jboolean>(
			"isAudioConnected",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
	jboolean BluetoothHeadset::sendVendorSpecificResultCode(android::bluetooth::BluetoothDevice arg0, jstring arg1, jstring arg2)
	{
		return callMethod<jboolean>(
			"sendVendorSpecificResultCode",
			"(Landroid/bluetooth/BluetoothDevice;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean BluetoothHeadset::startVoiceRecognition(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jboolean>(
			"startVoiceRecognition",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
	jboolean BluetoothHeadset::stopVoiceRecognition(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jboolean>(
			"stopVoiceRecognition",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
} // namespace android::bluetooth

