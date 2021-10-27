#pragma once

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
	class BluetoothGattService;
}
namespace __jni_impl::java::util
{
	class UUID;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothGattServer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean addService(__jni_impl::android::bluetooth::BluetoothGattService arg0);
		void cancelConnection(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		void clearServices();
		void close();
		jboolean connect(__jni_impl::android::bluetooth::BluetoothDevice arg0, jboolean arg1);
		QAndroidJniObject getConnectedDevices();
		jint getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		QAndroidJniObject getDevicesMatchingConnectionStates(jintArray arg0);
		QAndroidJniObject getService(__jni_impl::java::util::UUID arg0);
		QAndroidJniObject getServices();
		jboolean notifyCharacteristicChanged(__jni_impl::android::bluetooth::BluetoothDevice arg0, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg1, jboolean arg2);
		void readPhy(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		jboolean removeService(__jni_impl::android::bluetooth::BluetoothGattService arg0);
		jboolean sendResponse(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4);
		void setPreferredPhy(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::bluetooth

#include "./BluetoothDevice.hpp"
#include "./BluetoothGattCharacteristic.hpp"
#include "./BluetoothGattService.hpp"
#include "../../java/util/UUID.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	
	// Constructors
	void BluetoothGattServer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothGattServer",
			"(V)V");
	}
	
	// Methods
	jboolean BluetoothGattServer::addService(__jni_impl::android::bluetooth::BluetoothGattService arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addService",
			"(Landroid/bluetooth/BluetoothGattService;)Z",
			arg0.__jniObject().object()
		);
	}
	void BluetoothGattServer::cancelConnection(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		__thiz.callMethod<void>(
			"cancelConnection",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.__jniObject().object()
		);
	}
	void BluetoothGattServer::clearServices()
	{
		__thiz.callMethod<void>(
			"clearServices",
			"()V"
		);
	}
	void BluetoothGattServer::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean BluetoothGattServer::connect(__jni_impl::android::bluetooth::BluetoothDevice arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"connect",
			"(Landroid/bluetooth/BluetoothDevice;Z)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject BluetoothGattServer::getConnectedDevices()
	{
		return __thiz.callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothGattServer::getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothGattServer::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject BluetoothGattServer::getService(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callObjectMethod(
			"getService",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattService;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothGattServer::getServices()
	{
		return __thiz.callObjectMethod(
			"getServices",
			"()Ljava/util/List;"
		);
	}
	jboolean BluetoothGattServer::notifyCharacteristicChanged(__jni_impl::android::bluetooth::BluetoothDevice arg0, __jni_impl::android::bluetooth::BluetoothGattCharacteristic arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"notifyCharacteristicChanged",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothGattCharacteristic;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void BluetoothGattServer::readPhy(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		__thiz.callMethod<void>(
			"readPhy",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothGattServer::removeService(__jni_impl::android::bluetooth::BluetoothGattService arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeService",
			"(Landroid/bluetooth/BluetoothGattService;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothGattServer::sendResponse(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4)
	{
		return __thiz.callMethod<jboolean>(
			"sendResponse",
			"(Landroid/bluetooth/BluetoothDevice;III[B)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void BluetoothGattServer::setPreferredPhy(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setPreferredPhy",
			"(Landroid/bluetooth/BluetoothDevice;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothGattServer : public __jni_impl::android::bluetooth::BluetoothGattServer
	{
	public:
		BluetoothGattServer(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothGattServer()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

