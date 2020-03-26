#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHMANAGER
#define ANDROID_BLUETOOTH_BLUETOOTHMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothAdapter;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothGattServer;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothGattServerCallback;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getAdapter();
		jint getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1);
		QAndroidJniObject getConnectedDevices(jint arg0);
		QAndroidJniObject getDevicesMatchingConnectionStates(jint arg0, jintArray arg1);
		QAndroidJniObject openGattServer(__jni_impl::android::content::Context arg0, __jni_impl::android::bluetooth::BluetoothGattServerCallback arg1);
	};
} // namespace __jni_impl::android::bluetooth

#include "../content/Context.hpp"
#include "BluetoothAdapter.hpp"
#include "BluetoothDevice.hpp"
#include "BluetoothGattServer.hpp"
#include "BluetoothGattServerCallback.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	
	// Constructors
	void BluetoothManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject BluetoothManager::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/bluetooth/BluetoothAdapter;"
		);
	}
	jint BluetoothManager::getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject BluetoothManager::getConnectedDevices(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getConnectedDevices",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject BluetoothManager::getDevicesMatchingConnectionStates(jint arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"(I[I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject BluetoothManager::openGattServer(__jni_impl::android::content::Context arg0, __jni_impl::android::bluetooth::BluetoothGattServerCallback arg1)
	{
		return __thiz.callObjectMethod(
			"openGattServer",
			"(Landroid/content/Context;Landroid/bluetooth/BluetoothGattServerCallback;)Landroid/bluetooth/BluetoothGattServer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothManager : public __jni_impl::android::bluetooth::BluetoothManager
	{
	public:
		BluetoothManager(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothManager()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHMANAGER

