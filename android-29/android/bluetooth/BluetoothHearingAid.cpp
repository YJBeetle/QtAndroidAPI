#include "./BluetoothDevice.hpp"
#include "../content/Context.hpp"
#include "./BluetoothHearingAid.hpp"

namespace android::bluetooth
{
	// Fields
	jstring BluetoothHearingAid::ACTION_CONNECTION_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHearingAid",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	BluetoothHearingAid::BluetoothHearingAid(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject BluetoothHearingAid::getConnectedDevices()
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
	QAndroidJniObject BluetoothHearingAid::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
} // namespace android::bluetooth
