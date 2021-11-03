#include "./BluetoothDevice.hpp"
#include "../content/Context.hpp"
#include "./BluetoothHearingAid.hpp"

namespace android::bluetooth
{
	// Fields
	jstring BluetoothHearingAid::ACTION_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHearingAid",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	BluetoothHearingAid::BluetoothHearingAid(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject BluetoothHearingAid::getConnectedDevices()
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothHearingAid::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	JObject BluetoothHearingAid::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
} // namespace android::bluetooth

