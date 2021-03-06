#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHHEADSET
#define ANDROID_BLUETOOTH_BLUETOOTHHEADSET

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
	class BluetoothHeadset : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_AUDIO_STATE_CHANGED();
		static jstring ACTION_CONNECTION_STATE_CHANGED();
		static jstring ACTION_VENDOR_SPECIFIC_HEADSET_EVENT();
		static jint AT_CMD_TYPE_ACTION();
		static jint AT_CMD_TYPE_BASIC();
		static jint AT_CMD_TYPE_READ();
		static jint AT_CMD_TYPE_SET();
		static jint AT_CMD_TYPE_TEST();
		static jstring EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS();
		static jstring EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD();
		static jstring EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE();
		static jint STATE_AUDIO_CONNECTED();
		static jint STATE_AUDIO_CONNECTING();
		static jint STATE_AUDIO_DISCONNECTED();
		static jstring VENDOR_RESULT_CODE_COMMAND_ANDROID();
		static jstring VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		QAndroidJniObject getConnectedDevices();
		QAndroidJniObject getDevicesMatchingConnectionStates(jintArray arg0);
		jboolean startVoiceRecognition(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		jboolean stopVoiceRecognition(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		jboolean isAudioConnected(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		jboolean sendVendorSpecificResultCode(__jni_impl::android::bluetooth::BluetoothDevice arg0, jstring arg1, jstring arg2);
	};
} // namespace __jni_impl::android::bluetooth

#include "../content/Context.hpp"
#include "BluetoothDevice.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	jstring BluetoothHeadset::ACTION_AUDIO_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"ACTION_AUDIO_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHeadset::ACTION_CONNECTION_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHeadset::ACTION_VENDOR_SPECIFIC_HEADSET_EVENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"ACTION_VENDOR_SPECIFIC_HEADSET_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothHeadset::AT_CMD_TYPE_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_ACTION"
		);
	}
	jint BluetoothHeadset::AT_CMD_TYPE_BASIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_BASIC"
		);
	}
	jint BluetoothHeadset::AT_CMD_TYPE_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_READ"
		);
	}
	jint BluetoothHeadset::AT_CMD_TYPE_SET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_SET"
		);
	}
	jint BluetoothHeadset::AT_CMD_TYPE_TEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"AT_CMD_TYPE_TEST"
		);
	}
	jstring BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothHeadset::STATE_AUDIO_CONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"STATE_AUDIO_CONNECTED"
		);
	}
	jint BluetoothHeadset::STATE_AUDIO_CONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"STATE_AUDIO_CONNECTING"
		);
	}
	jint BluetoothHeadset::STATE_AUDIO_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHeadset",
			"STATE_AUDIO_DISCONNECTED"
		);
	}
	jstring BluetoothHeadset::VENDOR_RESULT_CODE_COMMAND_ANDROID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"VENDOR_RESULT_CODE_COMMAND_ANDROID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHeadset::VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHeadset",
			"VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void BluetoothHeadset::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHeadset",
			"(V)V");
	}
	
	// Methods
	jint BluetoothHeadset::getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothHeadset::getConnectedDevices()
	{
		return __thiz.callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject BluetoothHeadset::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	jboolean BluetoothHeadset::startVoiceRecognition(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jboolean>(
			"startVoiceRecognition",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothHeadset::stopVoiceRecognition(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jboolean>(
			"stopVoiceRecognition",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothHeadset::isAudioConnected(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAudioConnected",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothHeadset::sendVendorSpecificResultCode(__jni_impl::android::bluetooth::BluetoothDevice arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callMethod<jboolean>(
			"sendVendorSpecificResultCode",
			"(Landroid/bluetooth/BluetoothDevice;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothHeadset : public __jni_impl::android::bluetooth::BluetoothHeadset
	{
	public:
		BluetoothHeadset(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothHeadset()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHHEADSET

