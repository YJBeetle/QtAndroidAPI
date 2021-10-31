#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth
{
	class BluetoothHidDevice_Callback;
}
namespace android::bluetooth
{
	class BluetoothHidDeviceAppQosSettings;
}
namespace android::bluetooth
{
	class BluetoothHidDeviceAppSdpSettings;
}

namespace android::bluetooth
{
	class BluetoothHidDevice : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CONNECTION_STATE_CHANGED();
		static jbyte ERROR_RSP_INVALID_PARAM();
		static jbyte ERROR_RSP_INVALID_RPT_ID();
		static jbyte ERROR_RSP_NOT_READY();
		static jbyte ERROR_RSP_SUCCESS();
		static jbyte ERROR_RSP_UNKNOWN();
		static jbyte ERROR_RSP_UNSUPPORTED_REQ();
		static jbyte PROTOCOL_BOOT_MODE();
		static jbyte PROTOCOL_REPORT_MODE();
		static jbyte REPORT_TYPE_FEATURE();
		static jbyte REPORT_TYPE_INPUT();
		static jbyte REPORT_TYPE_OUTPUT();
		static jbyte SUBCLASS1_COMBO();
		static jbyte SUBCLASS1_KEYBOARD();
		static jbyte SUBCLASS1_MOUSE();
		static jbyte SUBCLASS1_NONE();
		static jbyte SUBCLASS2_CARD_READER();
		static jbyte SUBCLASS2_DIGITIZER_TABLET();
		static jbyte SUBCLASS2_GAMEPAD();
		static jbyte SUBCLASS2_JOYSTICK();
		static jbyte SUBCLASS2_REMOTE_CONTROL();
		static jbyte SUBCLASS2_SENSING_DEVICE();
		static jbyte SUBCLASS2_UNCATEGORIZED();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothHidDevice(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHidDevice(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean connect(android::bluetooth::BluetoothDevice arg0);
		jboolean disconnect(android::bluetooth::BluetoothDevice arg0);
		__JniBaseClass getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		__JniBaseClass getDevicesMatchingConnectionStates(jintArray arg0);
		jboolean registerApp(android::bluetooth::BluetoothHidDeviceAppSdpSettings arg0, android::bluetooth::BluetoothHidDeviceAppQosSettings arg1, android::bluetooth::BluetoothHidDeviceAppQosSettings arg2, __JniBaseClass arg3, android::bluetooth::BluetoothHidDevice_Callback arg4);
		jboolean replyReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jbyteArray arg3);
		jboolean reportError(android::bluetooth::BluetoothDevice arg0, jbyte arg1);
		jboolean sendReport(android::bluetooth::BluetoothDevice arg0, jint arg1, jbyteArray arg2);
		jboolean unregisterApp();
	};
} // namespace android::bluetooth

