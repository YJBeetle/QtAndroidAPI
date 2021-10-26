#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHHEALTHCALLBACK
#define ANDROID_BLUETOOTH_BLUETOOTHHEALTHCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothHealthAppConfiguration;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothHealthCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onHealthChannelStateChange(__jni_impl::android::bluetooth::BluetoothHealthAppConfiguration arg0, __jni_impl::android::bluetooth::BluetoothDevice arg1, jint arg2, jint arg3, __jni_impl::android::os::ParcelFileDescriptor arg4, jint arg5);
		void onHealthAppConfigurationStatusChange(__jni_impl::android::bluetooth::BluetoothHealthAppConfiguration arg0, jint arg1);
	};
} // namespace __jni_impl::android::bluetooth

#include "BluetoothHealthAppConfiguration.hpp"
#include "BluetoothDevice.hpp"
#include "../os/ParcelFileDescriptor.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	
	// Constructors
	void BluetoothHealthCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHealthCallback",
			"()V"
		);
	}
	
	// Methods
	void BluetoothHealthCallback::onHealthChannelStateChange(__jni_impl::android::bluetooth::BluetoothHealthAppConfiguration arg0, __jni_impl::android::bluetooth::BluetoothDevice arg1, jint arg2, jint arg3, __jni_impl::android::os::ParcelFileDescriptor arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"onHealthChannelStateChange",
			"(Landroid/bluetooth/BluetoothHealthAppConfiguration;Landroid/bluetooth/BluetoothDevice;IILandroid/os/ParcelFileDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5
		);
	}
	void BluetoothHealthCallback::onHealthAppConfigurationStatusChange(__jni_impl::android::bluetooth::BluetoothHealthAppConfiguration arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onHealthAppConfigurationStatusChange",
			"(Landroid/bluetooth/BluetoothHealthAppConfiguration;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothHealthCallback : public __jni_impl::android::bluetooth::BluetoothHealthCallback
	{
	public:
		BluetoothHealthCallback(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothHealthCallback()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHHEALTHCALLBACK

