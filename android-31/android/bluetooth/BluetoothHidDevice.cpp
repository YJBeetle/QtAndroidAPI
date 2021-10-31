#include "./BluetoothDevice.hpp"
#include "./BluetoothHidDevice_Callback.hpp"
#include "./BluetoothHidDeviceAppQosSettings.hpp"
#include "./BluetoothHidDeviceAppSdpSettings.hpp"
#include "./BluetoothHidDevice.hpp"

namespace android::bluetooth
{
	// Fields
	jstring BluetoothHidDevice::ACTION_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHidDevice",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jbyte BluetoothHidDevice::ERROR_RSP_INVALID_PARAM()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_INVALID_PARAM"
		);
	}
	jbyte BluetoothHidDevice::ERROR_RSP_INVALID_RPT_ID()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_INVALID_RPT_ID"
		);
	}
	jbyte BluetoothHidDevice::ERROR_RSP_NOT_READY()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_NOT_READY"
		);
	}
	jbyte BluetoothHidDevice::ERROR_RSP_SUCCESS()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_SUCCESS"
		);
	}
	jbyte BluetoothHidDevice::ERROR_RSP_UNKNOWN()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_UNKNOWN"
		);
	}
	jbyte BluetoothHidDevice::ERROR_RSP_UNSUPPORTED_REQ()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_UNSUPPORTED_REQ"
		);
	}
	jbyte BluetoothHidDevice::PROTOCOL_BOOT_MODE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"PROTOCOL_BOOT_MODE"
		);
	}
	jbyte BluetoothHidDevice::PROTOCOL_REPORT_MODE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"PROTOCOL_REPORT_MODE"
		);
	}
	jbyte BluetoothHidDevice::REPORT_TYPE_FEATURE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"REPORT_TYPE_FEATURE"
		);
	}
	jbyte BluetoothHidDevice::REPORT_TYPE_INPUT()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"REPORT_TYPE_INPUT"
		);
	}
	jbyte BluetoothHidDevice::REPORT_TYPE_OUTPUT()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"REPORT_TYPE_OUTPUT"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS1_COMBO()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_COMBO"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS1_KEYBOARD()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_KEYBOARD"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS1_MOUSE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_MOUSE"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS1_NONE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_NONE"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_CARD_READER()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_CARD_READER"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_DIGITIZER_TABLET()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_DIGITIZER_TABLET"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_GAMEPAD()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_GAMEPAD"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_JOYSTICK()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_JOYSTICK"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_REMOTE_CONTROL()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_REMOTE_CONTROL"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_SENSING_DEVICE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_SENSING_DEVICE"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_UNCATEGORIZED()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_UNCATEGORIZED"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothHidDevice::BluetoothHidDevice(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean BluetoothHidDevice::connect(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jboolean>(
			"connect",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
	jboolean BluetoothHidDevice::disconnect(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jboolean>(
			"disconnect",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
	__JniBaseClass BluetoothHidDevice::getConnectedDevices()
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothHidDevice::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	__JniBaseClass BluetoothHidDevice::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	jboolean BluetoothHidDevice::registerApp(android::bluetooth::BluetoothHidDeviceAppSdpSettings arg0, android::bluetooth::BluetoothHidDeviceAppQosSettings arg1, android::bluetooth::BluetoothHidDeviceAppQosSettings arg2, __JniBaseClass arg3, android::bluetooth::BluetoothHidDevice_Callback arg4)
	{
		return callMethod<jboolean>(
			"registerApp",
			"(Landroid/bluetooth/BluetoothHidDeviceAppSdpSettings;Landroid/bluetooth/BluetoothHidDeviceAppQosSettings;Landroid/bluetooth/BluetoothHidDeviceAppQosSettings;Ljava/util/concurrent/Executor;Landroid/bluetooth/BluetoothHidDevice$Callback;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	jboolean BluetoothHidDevice::replyReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jbyteArray arg3)
	{
		return callMethod<jboolean>(
			"replyReport",
			"(Landroid/bluetooth/BluetoothDevice;BB[B)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean BluetoothHidDevice::reportError(android::bluetooth::BluetoothDevice arg0, jbyte arg1)
	{
		return callMethod<jboolean>(
			"reportError",
			"(Landroid/bluetooth/BluetoothDevice;B)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean BluetoothHidDevice::sendReport(android::bluetooth::BluetoothDevice arg0, jint arg1, jbyteArray arg2)
	{
		return callMethod<jboolean>(
			"sendReport",
			"(Landroid/bluetooth/BluetoothDevice;I[B)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean BluetoothHidDevice::unregisterApp()
	{
		return callMethod<jboolean>(
			"unregisterApp",
			"()Z"
		);
	}
} // namespace android::bluetooth

