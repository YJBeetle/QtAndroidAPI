#pragma once

#include "../../JIntArray.hpp"
#include "./BluetoothDevice.def.hpp"
#include "../../JString.hpp"
#include "./BluetoothLeAudio.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JString BluetoothLeAudio::ACTION_LE_AUDIO_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothLeAudio",
			"ACTION_LE_AUDIO_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline jint BluetoothLeAudio::GROUP_ID_INVALID()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudio",
			"GROUP_ID_INVALID"
		);
	}
	
	// Constructors
	
	// Methods
	inline void BluetoothLeAudio::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JObject BluetoothLeAudio::getConnectedDevices() const
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	inline android::bluetooth::BluetoothDevice BluetoothLeAudio::getConnectedGroupLeadDevice(jint arg0) const
	{
		return callObjectMethod(
			"getConnectedGroupLeadDevice",
			"(I)Landroid/bluetooth/BluetoothDevice;",
			arg0
		);
	}
	inline jint BluetoothLeAudio::getConnectionState(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	inline JObject BluetoothLeAudio::getDevicesMatchingConnectionStates(JIntArray arg0) const
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
	inline jint BluetoothLeAudio::getGroupId(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jint>(
			"getGroupId",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
