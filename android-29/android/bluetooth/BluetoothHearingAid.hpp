#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHHEARINGAID
#define ANDROID_BLUETOOTH_BLUETOOTHHEARINGAID

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
	class BluetoothHearingAid : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_CONNECTION_STATE_CHANGED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		QAndroidJniObject getConnectedDevices();
		QAndroidJniObject getDevicesMatchingConnectionStates(jintArray arg0);
	};
} // namespace __jni_impl::android::bluetooth

#include "../content/Context.hpp"
#include "BluetoothDevice.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	QAndroidJniObject BluetoothHearingAid::ACTION_CONNECTION_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHearingAid",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void BluetoothHearingAid::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHearingAid",
			"(V)V");
	}
	
	// Methods
	jint BluetoothHearingAid::getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BluetoothHearingAid::getConnectedDevices()
	{
		return __thiz.callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;");
	}
	QAndroidJniObject BluetoothHearingAid::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothHearingAid : public __jni_impl::android::bluetooth::BluetoothHearingAid
	{
	public:
		BluetoothHearingAid(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothHearingAid()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHHEARINGAID

