#include "../../JIntArray.hpp"
#include "./BluetoothDevice.hpp"
#include "../../JString.hpp"
#include "./BluetoothLeAudio.hpp"

namespace android::bluetooth
{
	// Fields
	JString BluetoothLeAudio::ACTION_LE_AUDIO_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothLeAudio",
			"ACTION_LE_AUDIO_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothLeAudio::BluetoothLeAudio(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BluetoothLeAudio::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JObject BluetoothLeAudio::getConnectedDevices()
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothLeAudio::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	JObject BluetoothLeAudio::getDevicesMatchingConnectionStates(JIntArray arg0)
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::bluetooth

