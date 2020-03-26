#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHGATTSERVERCALLBACK
#define ANDROID_BLUETOOTH_BLUETOOTHGATTSERVERCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothGattCharacteristic;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothGattDescriptor;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothGattService;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothGattServerCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onCharacteristicReadRequest(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg3);
		void onCharacteristicWriteRequest(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg2, jboolean arg3, jboolean arg4, jint arg5, jbyteArray arg6);
		void onDescriptorReadRequest(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, __jni_impl::android::bluetooth::BluetoothGattDescriptor arg3);
		void onDescriptorWriteRequest(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, __jni_impl::android::bluetooth::BluetoothGattDescriptor arg2, jboolean arg3, jboolean arg4, jint arg5, jbyteArray arg6);
		void onExecuteWrite(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jboolean arg2);
		void onNotificationSent(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1);
		void onPhyUpdate(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3);
		void onPhyRead(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3);
		void onConnectionStateChange(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2);
		void onMtuChanged(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1);
		void onServiceAdded(jint arg0, __jni_impl::android::bluetooth::BluetoothGattService arg1);
	};
} // namespace __jni_impl::android::bluetooth

#include "BluetoothDevice.hpp"
#include "BluetoothGattCharacteristic.hpp"
#include "BluetoothGattDescriptor.hpp"
#include "BluetoothGattService.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	
	// Constructors
	void BluetoothGattServerCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothGattServerCallback",
			"()V");
	}
	
	// Methods
	void BluetoothGattServerCallback::onCharacteristicReadRequest(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg3)
	{
		__thiz.callMethod<void>(
			"onCharacteristicReadRequest",
			"(Landroid/bluetooth/BluetoothDevice;IILandroid/bluetooth/BluetoothGattCharacteristic;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void BluetoothGattServerCallback::onCharacteristicWriteRequest(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg2, jboolean arg3, jboolean arg4, jint arg5, jbyteArray arg6)
	{
		__thiz.callMethod<void>(
			"onCharacteristicWriteRequest",
			"(Landroid/bluetooth/BluetoothDevice;ILandroid/bluetooth/BluetoothGattCharacteristic;ZZI[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void BluetoothGattServerCallback::onDescriptorReadRequest(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, __jni_impl::android::bluetooth::BluetoothGattDescriptor arg3)
	{
		__thiz.callMethod<void>(
			"onDescriptorReadRequest",
			"(Landroid/bluetooth/BluetoothDevice;IILandroid/bluetooth/BluetoothGattDescriptor;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void BluetoothGattServerCallback::onDescriptorWriteRequest(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, __jni_impl::android::bluetooth::BluetoothGattDescriptor arg2, jboolean arg3, jboolean arg4, jint arg5, jbyteArray arg6)
	{
		__thiz.callMethod<void>(
			"onDescriptorWriteRequest",
			"(Landroid/bluetooth/BluetoothDevice;ILandroid/bluetooth/BluetoothGattDescriptor;ZZI[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void BluetoothGattServerCallback::onExecuteWrite(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onExecuteWrite",
			"(Landroid/bluetooth/BluetoothDevice;IZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void BluetoothGattServerCallback::onNotificationSent(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onNotificationSent",
			"(Landroid/bluetooth/BluetoothDevice;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BluetoothGattServerCallback::onPhyUpdate(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onPhyUpdate",
			"(Landroid/bluetooth/BluetoothDevice;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void BluetoothGattServerCallback::onPhyRead(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onPhyRead",
			"(Landroid/bluetooth/BluetoothDevice;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void BluetoothGattServerCallback::onConnectionStateChange(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onConnectionStateChange",
			"(Landroid/bluetooth/BluetoothDevice;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void BluetoothGattServerCallback::onMtuChanged(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onMtuChanged",
			"(Landroid/bluetooth/BluetoothDevice;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BluetoothGattServerCallback::onServiceAdded(jint arg0, __jni_impl::android::bluetooth::BluetoothGattService arg1)
	{
		__thiz.callMethod<void>(
			"onServiceAdded",
			"(ILandroid/bluetooth/BluetoothGattService;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothGattServerCallback : public __jni_impl::android::bluetooth::BluetoothGattServerCallback
	{
	public:
		BluetoothGattServerCallback(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothGattServerCallback()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHGATTSERVERCALLBACK

