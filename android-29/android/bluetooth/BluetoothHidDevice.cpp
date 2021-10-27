#include "./BluetoothDevice.hpp"
#include "./BluetoothHidDevice_Callback.hpp"
#include "./BluetoothHidDeviceAppQosSettings.hpp"
#include "./BluetoothHidDeviceAppSdpSettings.hpp"
#include "../content/Context.hpp"
#include "./BluetoothHidDevice.hpp"

namespace android::bluetooth
{
	// Fields
	jstring BluetoothHidDevice::ACTION_CONNECTION_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHidDevice",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jbyte BluetoothHidDevice::ERROR_RSP_INVALID_PARAM()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_INVALID_PARAM"
		);
	}
	jbyte BluetoothHidDevice::ERROR_RSP_INVALID_RPT_ID()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_INVALID_RPT_ID"
		);
	}
	jbyte BluetoothHidDevice::ERROR_RSP_NOT_READY()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_NOT_READY"
		);
	}
	jbyte BluetoothHidDevice::ERROR_RSP_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_SUCCESS"
		);
	}
	jbyte BluetoothHidDevice::ERROR_RSP_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_UNKNOWN"
		);
	}
	jbyte BluetoothHidDevice::ERROR_RSP_UNSUPPORTED_REQ()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_UNSUPPORTED_REQ"
		);
	}
	jbyte BluetoothHidDevice::PROTOCOL_BOOT_MODE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"PROTOCOL_BOOT_MODE"
		);
	}
	jbyte BluetoothHidDevice::PROTOCOL_REPORT_MODE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"PROTOCOL_REPORT_MODE"
		);
	}
	jbyte BluetoothHidDevice::REPORT_TYPE_FEATURE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"REPORT_TYPE_FEATURE"
		);
	}
	jbyte BluetoothHidDevice::REPORT_TYPE_INPUT()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"REPORT_TYPE_INPUT"
		);
	}
	jbyte BluetoothHidDevice::REPORT_TYPE_OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"REPORT_TYPE_OUTPUT"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS1_COMBO()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_COMBO"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS1_KEYBOARD()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_KEYBOARD"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS1_MOUSE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_MOUSE"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS1_NONE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_NONE"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_CARD_READER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_CARD_READER"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_DIGITIZER_TABLET()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_DIGITIZER_TABLET"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_GAMEPAD()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_GAMEPAD"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_JOYSTICK()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_JOYSTICK"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_REMOTE_CONTROL()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_REMOTE_CONTROL"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_SENSING_DEVICE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_SENSING_DEVICE"
		);
	}
	jbyte BluetoothHidDevice::SUBCLASS2_UNCATEGORIZED()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_UNCATEGORIZED"
		);
	}
	
	BluetoothHidDevice::BluetoothHidDevice(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean BluetoothHidDevice::connect(android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jboolean>(
			"connect",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothHidDevice::disconnect(android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jboolean>(
			"disconnect",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothHidDevice::getConnectedDevices()
	{
		return __thiz.callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothHidDevice::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothHidDevice::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	jboolean BluetoothHidDevice::registerApp(android::bluetooth::BluetoothHidDeviceAppSdpSettings arg0, android::bluetooth::BluetoothHidDeviceAppQosSettings arg1, android::bluetooth::BluetoothHidDeviceAppQosSettings arg2, __JniBaseClass arg3, android::bluetooth::BluetoothHidDevice_Callback arg4)
	{
		return __thiz.callMethod<jboolean>(
			"registerApp",
			"(Landroid/bluetooth/BluetoothHidDeviceAppSdpSettings;Landroid/bluetooth/BluetoothHidDeviceAppQosSettings;Landroid/bluetooth/BluetoothHidDeviceAppQosSettings;Ljava/util/concurrent/Executor;Landroid/bluetooth/BluetoothHidDevice$Callback;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	jboolean BluetoothHidDevice::replyReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jbyteArray arg3)
	{
		return __thiz.callMethod<jboolean>(
			"replyReport",
			"(Landroid/bluetooth/BluetoothDevice;BB[B)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean BluetoothHidDevice::reportError(android::bluetooth::BluetoothDevice arg0, jbyte arg1)
	{
		return __thiz.callMethod<jboolean>(
			"reportError",
			"(Landroid/bluetooth/BluetoothDevice;B)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean BluetoothHidDevice::sendReport(android::bluetooth::BluetoothDevice arg0, jint arg1, jbyteArray arg2)
	{
		return __thiz.callMethod<jboolean>(
			"sendReport",
			"(Landroid/bluetooth/BluetoothDevice;I[B)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean BluetoothHidDevice::unregisterApp()
	{
		return __thiz.callMethod<jboolean>(
			"unregisterApp",
			"()Z"
		);
	}
} // namespace android::bluetooth

