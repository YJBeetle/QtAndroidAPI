#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE
#define ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothHidDeviceAppSdpSettings;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothHidDeviceAppQosSettings;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothHidDevice_Callback;
}

namespace __jni_impl::android::bluetooth
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
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean connect(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		jboolean reportError(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1);
		jint getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		QAndroidJniObject getConnectedDevices();
		QAndroidJniObject getDevicesMatchingConnectionStates(jintArray arg0);
		jboolean registerApp(__jni_impl::android::bluetooth::BluetoothHidDeviceAppSdpSettings arg0, __jni_impl::android::bluetooth::BluetoothHidDeviceAppQosSettings arg1, __jni_impl::android::bluetooth::BluetoothHidDeviceAppQosSettings arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::bluetooth::BluetoothHidDevice_Callback arg4);
		jboolean unregisterApp();
		jboolean sendReport(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jbyteArray arg2);
		jboolean replyReport(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jbyteArray arg3);
		jboolean disconnect(__jni_impl::android::bluetooth::BluetoothDevice arg0);
	};
} // namespace __jni_impl::android::bluetooth

#include "../content/Context.hpp"
#include "BluetoothDevice.hpp"
#include "BluetoothHidDeviceAppSdpSettings.hpp"
#include "BluetoothHidDeviceAppQosSettings.hpp"
#include "BluetoothHidDevice_Callback.hpp"

namespace __jni_impl::android::bluetooth
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
	
	// Constructors
	void BluetoothHidDevice::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHidDevice",
			"(V)V");
	}
	
	// Methods
	jboolean BluetoothHidDevice::connect(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jboolean>(
			"connect",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothHidDevice::reportError(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1)
	{
		return __thiz.callMethod<jboolean>(
			"reportError",
			"(Landroid/bluetooth/BluetoothDevice;B)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint BluetoothHidDevice::getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
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
	QAndroidJniObject BluetoothHidDevice::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	jboolean BluetoothHidDevice::registerApp(__jni_impl::android::bluetooth::BluetoothHidDeviceAppSdpSettings arg0, __jni_impl::android::bluetooth::BluetoothHidDeviceAppQosSettings arg1, __jni_impl::android::bluetooth::BluetoothHidDeviceAppQosSettings arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::bluetooth::BluetoothHidDevice_Callback arg4)
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
	jboolean BluetoothHidDevice::unregisterApp()
	{
		return __thiz.callMethod<jboolean>(
			"unregisterApp",
			"()Z"
		);
	}
	jboolean BluetoothHidDevice::sendReport(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jbyteArray arg2)
	{
		return __thiz.callMethod<jboolean>(
			"sendReport",
			"(Landroid/bluetooth/BluetoothDevice;I[B)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean BluetoothHidDevice::replyReport(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jbyteArray arg3)
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
	jboolean BluetoothHidDevice::disconnect(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jboolean>(
			"disconnect",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothHidDevice : public __jni_impl::android::bluetooth::BluetoothHidDevice
	{
	public:
		BluetoothHidDevice(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothHidDevice()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE

