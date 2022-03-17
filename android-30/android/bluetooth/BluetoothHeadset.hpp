#pragma once

#include "../../JIntArray.hpp"
#include "./BluetoothDevice.def.hpp"
#include "../../JString.hpp"
#include "./BluetoothHeadset.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JString BluetoothHeadset::ACTION_AUDIO_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"ACTION_AUDIO_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothHeadset::ACTION_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothHeadset::ACTION_VENDOR_SPECIFIC_HEADSET_EVENT()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"ACTION_VENDOR_SPECIFIC_HEADSET_EVENT",
			"Ljava/lang/String;"
		);
	}
	inline jint BluetoothHeadset::AT_CMD_TYPE_ACTION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_ACTION"
		);
	}
	inline jint BluetoothHeadset::AT_CMD_TYPE_BASIC()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_BASIC"
		);
	}
	inline jint BluetoothHeadset::AT_CMD_TYPE_READ()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_READ"
		);
	}
	inline jint BluetoothHeadset::AT_CMD_TYPE_SET()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_SET"
		);
	}
	inline jint BluetoothHeadset::AT_CMD_TYPE_TEST()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_TEST"
		);
	}
	inline JString BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline jint BluetoothHeadset::STATE_AUDIO_CONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"STATE_AUDIO_CONNECTED"
		);
	}
	inline jint BluetoothHeadset::STATE_AUDIO_CONNECTING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"STATE_AUDIO_CONNECTING"
		);
	}
	inline jint BluetoothHeadset::STATE_AUDIO_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"STATE_AUDIO_DISCONNECTED"
		);
	}
	inline JString BluetoothHeadset::VENDOR_RESULT_CODE_COMMAND_ANDROID()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"VENDOR_RESULT_CODE_COMMAND_ANDROID",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothHeadset::VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject BluetoothHeadset::getConnectedDevices() const
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	inline jint BluetoothHeadset::getConnectionState(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	inline JObject BluetoothHeadset::getDevicesMatchingConnectionStates(JIntArray arg0) const
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
	inline jboolean BluetoothHeadset::isAudioConnected(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jboolean>(
			"isAudioConnected",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
	inline jboolean BluetoothHeadset::sendVendorSpecificResultCode(android::bluetooth::BluetoothDevice arg0, JString arg1, JString arg2) const
	{
		return callMethod<jboolean>(
			"sendVendorSpecificResultCode",
			"(Landroid/bluetooth/BluetoothDevice;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline jboolean BluetoothHeadset::startVoiceRecognition(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jboolean>(
			"startVoiceRecognition",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
	inline jboolean BluetoothHeadset::stopVoiceRecognition(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jboolean>(
			"stopVoiceRecognition",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
