#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE_CALLBACK
#define ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE_CALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothHidDevice_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAppStatusChanged(__jni_impl::android::bluetooth::BluetoothDevice arg0, jboolean arg1);
		void onConnectionStateChanged(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1);
		void onGetReport(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jint arg3);
		void onSetReport(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jbyteArray arg3);
		void onSetProtocol(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1);
		void onInterruptData(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyteArray arg2);
		void onVirtualCableUnplug(__jni_impl::android::bluetooth::BluetoothDevice arg0);
	};
} // namespace __jni_impl::android::bluetooth

#include "BluetoothDevice.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	
	// Constructors
	void BluetoothHidDevice_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHidDevice$Callback",
			"()V");
	}
	
	// Methods
	void BluetoothHidDevice_Callback::onAppStatusChanged(__jni_impl::android::bluetooth::BluetoothDevice arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onAppStatusChanged",
			"(Landroid/bluetooth/BluetoothDevice;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void BluetoothHidDevice_Callback::onConnectionStateChanged(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionStateChanged",
			"(Landroid/bluetooth/BluetoothDevice;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void BluetoothHidDevice_Callback::onGetReport(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onGetReport",
			"(Landroid/bluetooth/BluetoothDevice;BBI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	void BluetoothHidDevice_Callback::onSetReport(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jbyteArray arg3)
	{
		__thiz.callMethod<void>(
			"onSetReport",
			"(Landroid/bluetooth/BluetoothDevice;BB[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	void BluetoothHidDevice_Callback::onSetProtocol(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1)
	{
		__thiz.callMethod<void>(
			"onSetProtocol",
			"(Landroid/bluetooth/BluetoothDevice;B)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void BluetoothHidDevice_Callback::onInterruptData(__jni_impl::android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"onInterruptData",
			"(Landroid/bluetooth/BluetoothDevice;B[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void BluetoothHidDevice_Callback::onVirtualCableUnplug(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		__thiz.callMethod<void>(
			"onVirtualCableUnplug",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothHidDevice_Callback : public __jni_impl::android::bluetooth::BluetoothHidDevice_Callback
	{
	public:
		BluetoothHidDevice_Callback(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothHidDevice_Callback()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE_CALLBACK

