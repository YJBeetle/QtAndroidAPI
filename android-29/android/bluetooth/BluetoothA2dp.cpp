#include "./BluetoothDevice.hpp"
#include "../content/Context.hpp"
#include "./BluetoothA2dp.hpp"

namespace android::bluetooth
{
	// Fields
	jstring BluetoothA2dp::ACTION_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothA2dp",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothA2dp::ACTION_PLAYING_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothA2dp",
			"ACTION_PLAYING_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
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
	
	// QJniObject forward
	BluetoothA2dp::BluetoothA2dp(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BluetoothA2dp::finalize()
	{
		callMethod<void>(
			"finalize",
			"()V"
		);
	}
	JObject BluetoothA2dp::getConnectedDevices()
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothA2dp::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	JObject BluetoothA2dp::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	jboolean BluetoothA2dp::isA2dpPlaying(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jboolean>(
			"isA2dpPlaying",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
} // namespace android::bluetooth

