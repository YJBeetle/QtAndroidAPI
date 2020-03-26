#pragma once

#ifndef ANDROID_BLUETOOTH_LE_BLUETOOTHLEADVERTISER
#define ANDROID_BLUETOOTH_LE_BLUETOOTHLEADVERTISER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseSettings;
}
namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseData;
}
namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseCallback;
}
namespace __jni_impl::android::bluetooth::le
{
	class AdvertisingSetParameters;
}
namespace __jni_impl::android::bluetooth::le
{
	class PeriodicAdvertisingParameters;
}
namespace __jni_impl::android::bluetooth::le
{
	class AdvertisingSetCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::bluetooth::le
{
	class BluetoothLeAdvertiser : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void startAdvertising(__jni_impl::android::bluetooth::le::AdvertiseSettings arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseData arg2, __jni_impl::android::bluetooth::le::AdvertiseCallback arg3);
		void startAdvertising(__jni_impl::android::bluetooth::le::AdvertiseSettings arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseCallback arg2);
		void stopAdvertising(__jni_impl::android::bluetooth::le::AdvertiseCallback arg0);
		void startAdvertisingSet(__jni_impl::android::bluetooth::le::AdvertisingSetParameters arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseData arg2, __jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters arg3, __jni_impl::android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, __jni_impl::android::bluetooth::le::AdvertisingSetCallback arg7, __jni_impl::android::os::Handler arg8);
		void startAdvertisingSet(__jni_impl::android::bluetooth::le::AdvertisingSetParameters arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseData arg2, __jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters arg3, __jni_impl::android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, __jni_impl::android::bluetooth::le::AdvertisingSetCallback arg7);
		void startAdvertisingSet(__jni_impl::android::bluetooth::le::AdvertisingSetParameters arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseData arg2, __jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters arg3, __jni_impl::android::bluetooth::le::AdvertiseData arg4, __jni_impl::android::bluetooth::le::AdvertisingSetCallback arg5, __jni_impl::android::os::Handler arg6);
		void startAdvertisingSet(__jni_impl::android::bluetooth::le::AdvertisingSetParameters arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseData arg2, __jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters arg3, __jni_impl::android::bluetooth::le::AdvertiseData arg4, __jni_impl::android::bluetooth::le::AdvertisingSetCallback arg5);
		void stopAdvertisingSet(__jni_impl::android::bluetooth::le::AdvertisingSetCallback arg0);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "AdvertiseSettings.hpp"
#include "AdvertiseData.hpp"
#include "AdvertiseCallback.hpp"
#include "AdvertisingSetParameters.hpp"
#include "PeriodicAdvertisingParameters.hpp"
#include "AdvertisingSetCallback.hpp"
#include "../../os/Handler.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	
	// Constructors
	void BluetoothLeAdvertiser::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.BluetoothLeAdvertiser",
			"(V)V");
	}
	
	// Methods
	void BluetoothLeAdvertiser::startAdvertising(__jni_impl::android::bluetooth::le::AdvertiseSettings arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseData arg2, __jni_impl::android::bluetooth::le::AdvertiseCallback arg3)
	{
		__thiz.callMethod<void>(
			"startAdvertising",
			"(Landroid/bluetooth/le/AdvertiseSettings;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertising(__jni_impl::android::bluetooth::le::AdvertiseSettings arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseCallback arg2)
	{
		__thiz.callMethod<void>(
			"startAdvertising",
			"(Landroid/bluetooth/le/AdvertiseSettings;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::stopAdvertising(__jni_impl::android::bluetooth::le::AdvertiseCallback arg0)
	{
		__thiz.callMethod<void>(
			"stopAdvertising",
			"(Landroid/bluetooth/le/AdvertiseCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(__jni_impl::android::bluetooth::le::AdvertisingSetParameters arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseData arg2, __jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters arg3, __jni_impl::android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, __jni_impl::android::bluetooth::le::AdvertisingSetCallback arg7, __jni_impl::android::os::Handler arg8)
	{
		__thiz.callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;IILandroid/bluetooth/le/AdvertisingSetCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6,
			arg7.__jniObject().object(),
			arg8.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(__jni_impl::android::bluetooth::le::AdvertisingSetParameters arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseData arg2, __jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters arg3, __jni_impl::android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, __jni_impl::android::bluetooth::le::AdvertisingSetCallback arg7)
	{
		__thiz.callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;IILandroid/bluetooth/le/AdvertisingSetCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6,
			arg7.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(__jni_impl::android::bluetooth::le::AdvertisingSetParameters arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseData arg2, __jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters arg3, __jni_impl::android::bluetooth::le::AdvertiseData arg4, __jni_impl::android::bluetooth::le::AdvertisingSetCallback arg5, __jni_impl::android::os::Handler arg6)
	{
		__thiz.callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertisingSetCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::startAdvertisingSet(__jni_impl::android::bluetooth::le::AdvertisingSetParameters arg0, __jni_impl::android::bluetooth::le::AdvertiseData arg1, __jni_impl::android::bluetooth::le::AdvertiseData arg2, __jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters arg3, __jni_impl::android::bluetooth::le::AdvertiseData arg4, __jni_impl::android::bluetooth::le::AdvertisingSetCallback arg5)
	{
		__thiz.callMethod<void>(
			"startAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/PeriodicAdvertisingParameters;Landroid/bluetooth/le/AdvertiseData;Landroid/bluetooth/le/AdvertisingSetCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	void BluetoothLeAdvertiser::stopAdvertisingSet(__jni_impl::android::bluetooth::le::AdvertisingSetCallback arg0)
	{
		__thiz.callMethod<void>(
			"stopAdvertisingSet",
			"(Landroid/bluetooth/le/AdvertisingSetCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class BluetoothLeAdvertiser : public __jni_impl::android::bluetooth::le::BluetoothLeAdvertiser
	{
	public:
		BluetoothLeAdvertiser(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothLeAdvertiser()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_BLUETOOTHLEADVERTISER

