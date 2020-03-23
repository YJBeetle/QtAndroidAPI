#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHGATTCALLBACK
#define ANDROID_BLUETOOTH_BLUETOOTHGATTCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothGatt;
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
	class BluetoothGattCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onPhyUpdate(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3);
		void onPhyRead(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3);
		void onConnectionStateChange(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2);
		void onServicesDiscovered(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1);
		void onCharacteristicRead(__jni_impl::android::bluetooth::BluetoothGatt arg0, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2);
		void onCharacteristicWrite(__jni_impl::android::bluetooth::BluetoothGatt arg0, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2);
		void onCharacteristicChanged(__jni_impl::android::bluetooth::BluetoothGatt arg0, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg1);
		void onDescriptorRead(__jni_impl::android::bluetooth::BluetoothGatt arg0, __jni_impl::android::bluetooth::BluetoothGattDescriptor arg1, jint arg2);
		void onDescriptorWrite(__jni_impl::android::bluetooth::BluetoothGatt arg0, __jni_impl::android::bluetooth::BluetoothGattDescriptor arg1, jint arg2);
		void onReliableWriteCompleted(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1);
		void onReadRemoteRssi(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2);
		void onMtuChanged(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::bluetooth

#include "BluetoothGatt.hpp"
#include "BluetoothGattCharacteristic.hpp"
#include "BluetoothGattDescriptor.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	
	// Constructors
	void BluetoothGattCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothGattCallback",
			"()V");
	}
	
	// Methods
	void BluetoothGattCallback::onPhyUpdate(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onPhyUpdate",
			"(Landroid/bluetooth/BluetoothGatt;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	void BluetoothGattCallback::onPhyRead(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onPhyRead",
			"(Landroid/bluetooth/BluetoothGatt;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	void BluetoothGattCallback::onConnectionStateChange(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onConnectionStateChange",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void BluetoothGattCallback::onServicesDiscovered(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onServicesDiscovered",
			"(Landroid/bluetooth/BluetoothGatt;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void BluetoothGattCallback::onCharacteristicRead(__jni_impl::android::bluetooth::BluetoothGatt arg0, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onCharacteristicRead",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void BluetoothGattCallback::onCharacteristicWrite(__jni_impl::android::bluetooth::BluetoothGatt arg0, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onCharacteristicWrite",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void BluetoothGattCallback::onCharacteristicChanged(__jni_impl::android::bluetooth::BluetoothGatt arg0, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg1)
	{
		__thiz.callMethod<void>(
			"onCharacteristicChanged",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattCharacteristic;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void BluetoothGattCallback::onDescriptorRead(__jni_impl::android::bluetooth::BluetoothGatt arg0, __jni_impl::android::bluetooth::BluetoothGattDescriptor arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onDescriptorRead",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void BluetoothGattCallback::onDescriptorWrite(__jni_impl::android::bluetooth::BluetoothGatt arg0, __jni_impl::android::bluetooth::BluetoothGattDescriptor arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onDescriptorWrite",
			"(Landroid/bluetooth/BluetoothGatt;Landroid/bluetooth/BluetoothGattDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void BluetoothGattCallback::onReliableWriteCompleted(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onReliableWriteCompleted",
			"(Landroid/bluetooth/BluetoothGatt;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void BluetoothGattCallback::onReadRemoteRssi(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onReadRemoteRssi",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void BluetoothGattCallback::onMtuChanged(__jni_impl::android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onMtuChanged",
			"(Landroid/bluetooth/BluetoothGatt;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothGattCallback : public __jni_impl::android::bluetooth::BluetoothGattCallback
	{
	public:
		BluetoothGattCallback(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothGattCallback()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHGATTCALLBACK

