#pragma once

#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "./BluetoothDevice.def.hpp"
#include "./BluetoothHidDevice_Callback.def.hpp"
#include "./BluetoothHidDeviceAppQosSettings.def.hpp"
#include "./BluetoothHidDeviceAppSdpSettings.def.hpp"
#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./BluetoothHidDevice.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JString BluetoothHidDevice::ACTION_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHidDevice",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline jbyte BluetoothHidDevice::ERROR_RSP_INVALID_PARAM()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_INVALID_PARAM"
		);
	}
	inline jbyte BluetoothHidDevice::ERROR_RSP_INVALID_RPT_ID()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_INVALID_RPT_ID"
		);
	}
	inline jbyte BluetoothHidDevice::ERROR_RSP_NOT_READY()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_NOT_READY"
		);
	}
	inline jbyte BluetoothHidDevice::ERROR_RSP_SUCCESS()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_SUCCESS"
		);
	}
	inline jbyte BluetoothHidDevice::ERROR_RSP_UNKNOWN()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_UNKNOWN"
		);
	}
	inline jbyte BluetoothHidDevice::ERROR_RSP_UNSUPPORTED_REQ()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"ERROR_RSP_UNSUPPORTED_REQ"
		);
	}
	inline jbyte BluetoothHidDevice::PROTOCOL_BOOT_MODE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"PROTOCOL_BOOT_MODE"
		);
	}
	inline jbyte BluetoothHidDevice::PROTOCOL_REPORT_MODE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"PROTOCOL_REPORT_MODE"
		);
	}
	inline jbyte BluetoothHidDevice::REPORT_TYPE_FEATURE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"REPORT_TYPE_FEATURE"
		);
	}
	inline jbyte BluetoothHidDevice::REPORT_TYPE_INPUT()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"REPORT_TYPE_INPUT"
		);
	}
	inline jbyte BluetoothHidDevice::REPORT_TYPE_OUTPUT()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"REPORT_TYPE_OUTPUT"
		);
	}
	inline jbyte BluetoothHidDevice::SUBCLASS1_COMBO()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_COMBO"
		);
	}
	inline jbyte BluetoothHidDevice::SUBCLASS1_KEYBOARD()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_KEYBOARD"
		);
	}
	inline jbyte BluetoothHidDevice::SUBCLASS1_MOUSE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_MOUSE"
		);
	}
	inline jbyte BluetoothHidDevice::SUBCLASS1_NONE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS1_NONE"
		);
	}
	inline jbyte BluetoothHidDevice::SUBCLASS2_CARD_READER()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_CARD_READER"
		);
	}
	inline jbyte BluetoothHidDevice::SUBCLASS2_DIGITIZER_TABLET()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_DIGITIZER_TABLET"
		);
	}
	inline jbyte BluetoothHidDevice::SUBCLASS2_GAMEPAD()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_GAMEPAD"
		);
	}
	inline jbyte BluetoothHidDevice::SUBCLASS2_JOYSTICK()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_JOYSTICK"
		);
	}
	inline jbyte BluetoothHidDevice::SUBCLASS2_REMOTE_CONTROL()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_REMOTE_CONTROL"
		);
	}
	inline jbyte BluetoothHidDevice::SUBCLASS2_SENSING_DEVICE()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_SENSING_DEVICE"
		);
	}
	inline jbyte BluetoothHidDevice::SUBCLASS2_UNCATEGORIZED()
	{
		return getStaticField<jbyte>(
			"android.bluetooth.BluetoothHidDevice",
			"SUBCLASS2_UNCATEGORIZED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean BluetoothHidDevice::connect(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jboolean>(
			"connect",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
	inline jboolean BluetoothHidDevice::disconnect(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jboolean>(
			"disconnect",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.object()
		);
	}
	inline JObject BluetoothHidDevice::getConnectedDevices() const
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	inline jint BluetoothHidDevice::getConnectionState(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	inline JObject BluetoothHidDevice::getDevicesMatchingConnectionStates(JIntArray arg0) const
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
	inline jboolean BluetoothHidDevice::registerApp(android::bluetooth::BluetoothHidDeviceAppSdpSettings arg0, android::bluetooth::BluetoothHidDeviceAppQosSettings arg1, android::bluetooth::BluetoothHidDeviceAppQosSettings arg2, JObject arg3, android::bluetooth::BluetoothHidDevice_Callback arg4) const
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
	inline jboolean BluetoothHidDevice::replyReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, JByteArray arg3) const
	{
		return callMethod<jboolean>(
			"replyReport",
			"(Landroid/bluetooth/BluetoothDevice;BB[B)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jbyteArray>()
		);
	}
	inline jboolean BluetoothHidDevice::reportError(android::bluetooth::BluetoothDevice arg0, jbyte arg1) const
	{
		return callMethod<jboolean>(
			"reportError",
			"(Landroid/bluetooth/BluetoothDevice;B)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean BluetoothHidDevice::sendReport(android::bluetooth::BluetoothDevice arg0, jint arg1, JByteArray arg2) const
	{
		return callMethod<jboolean>(
			"sendReport",
			"(Landroid/bluetooth/BluetoothDevice;I[B)Z",
			arg0.object(),
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	inline jboolean BluetoothHidDevice::unregisterApp() const
	{
		return callMethod<jboolean>(
			"unregisterApp",
			"()Z"
		);
	}
} // namespace android::bluetooth

// Base class headers

