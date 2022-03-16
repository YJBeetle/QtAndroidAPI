#include "../../JIntArray.hpp"
#include "./BluetoothDevice.hpp"
#include "../../JString.hpp"
#include "./BluetoothA2dp.hpp"

namespace android::bluetooth
{
	// Fields
	JString BluetoothA2dp::ACTION_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothA2dp",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothA2dp::ACTION_PLAYING_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothA2dp",
			"ACTION_PLAYING_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	jint BluetoothA2dp::STATE_NOT_PLAYING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothA2dp",
			"STATE_NOT_PLAYING"
		);
	}
	jint BluetoothA2dp::STATE_PLAYING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothA2dp",
			"STATE_PLAYING"
		);
	}
	
	// Constructors
	
	// Methods
	void BluetoothA2dp::finalize() const
	{
		callMethod<void>(
			"finalize",
			"()V"
		);
	}
	JObject BluetoothA2dp::getConnectedDevices() const
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothA2dp::getConnectionState(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	JObject BluetoothA2dp::getDevicesMatchingConnectionStates(JIntArray arg0) const
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
	jboolean BluetoothA2dp::isA2dpPlaying(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jboolean>(
			"isA2dpPlaying",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
} // namespace android::bluetooth

