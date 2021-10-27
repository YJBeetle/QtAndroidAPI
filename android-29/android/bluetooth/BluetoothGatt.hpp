#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHGATT
#define ANDROID_BLUETOOTH_BLUETOOTHGATT

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
namespace __jni_impl::java::util
{
	class UUID;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothGatt : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONNECTION_PRIORITY_BALANCED();
		static jint CONNECTION_PRIORITY_HIGH();
		static jint CONNECTION_PRIORITY_LOW_POWER();
		static jint GATT_CONNECTION_CONGESTED();
		static jint GATT_FAILURE();
		static jint GATT_INSUFFICIENT_AUTHENTICATION();
		static jint GATT_INSUFFICIENT_ENCRYPTION();
		static jint GATT_INVALID_ATTRIBUTE_LENGTH();
		static jint GATT_INVALID_OFFSET();
		static jint GATT_READ_NOT_PERMITTED();
		static jint GATT_REQUEST_NOT_SUPPORTED();
		static jint GATT_SUCCESS();
		static jint GATT_WRITE_NOT_PERMITTED();
		
		// Constructors
		void __constructor();
		
		// Methods
		void abortReliableWrite();
		void abortReliableWrite(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		jboolean beginReliableWrite();
		void close();
		jboolean connect();
		void disconnect();
		jboolean discoverServices();
		jboolean executeReliableWrite();
		QAndroidJniObject getConnectedDevices();
		jint getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		QAndroidJniObject getDevice();
		QAndroidJniObject getDevicesMatchingConnectionStates(jintArray arg0);
		QAndroidJniObject getService(__jni_impl::java::util::UUID arg0);
		QAndroidJniObject getServices();
		jboolean readCharacteristic(__jni_impl::android::bluetooth::BluetoothGattCharacteristic arg0);
		jboolean readDescriptor(__jni_impl::android::bluetooth::BluetoothGattDescriptor arg0);
		void readPhy();
		jboolean readRemoteRssi();
		jboolean requestConnectionPriority(jint arg0);
		jboolean requestMtu(jint arg0);
		jboolean setCharacteristicNotification(__jni_impl::android::bluetooth::BluetoothGattCharacteristic arg0, jboolean arg1);
		void setPreferredPhy(jint arg0, jint arg1, jint arg2);
		jboolean writeCharacteristic(__jni_impl::android::bluetooth::BluetoothGattCharacteristic arg0);
		jboolean writeDescriptor(__jni_impl::android::bluetooth::BluetoothGattDescriptor arg0);
	};
} // namespace __jni_impl::android::bluetooth

#include "BluetoothDevice.hpp"
#include "BluetoothGattCharacteristic.hpp"
#include "BluetoothGattDescriptor.hpp"
#include "BluetoothGattService.hpp"
#include "../../java/util/UUID.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	jint BluetoothGatt::CONNECTION_PRIORITY_BALANCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"CONNECTION_PRIORITY_BALANCED"
		);
	}
	jint BluetoothGatt::CONNECTION_PRIORITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"CONNECTION_PRIORITY_HIGH"
		);
	}
	jint BluetoothGatt::CONNECTION_PRIORITY_LOW_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"CONNECTION_PRIORITY_LOW_POWER"
		);
	}
	jint BluetoothGatt::GATT_CONNECTION_CONGESTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_CONNECTION_CONGESTED"
		);
	}
	jint BluetoothGatt::GATT_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_FAILURE"
		);
	}
	jint BluetoothGatt::GATT_INSUFFICIENT_AUTHENTICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INSUFFICIENT_AUTHENTICATION"
		);
	}
	jint BluetoothGatt::GATT_INSUFFICIENT_ENCRYPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INSUFFICIENT_ENCRYPTION"
		);
	}
	jint BluetoothGatt::GATT_INVALID_ATTRIBUTE_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INVALID_ATTRIBUTE_LENGTH"
		);
	}
	jint BluetoothGatt::GATT_INVALID_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_INVALID_OFFSET"
		);
	}
	jint BluetoothGatt::GATT_READ_NOT_PERMITTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_READ_NOT_PERMITTED"
		);
	}
	jint BluetoothGatt::GATT_REQUEST_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_REQUEST_NOT_SUPPORTED"
		);
	}
	jint BluetoothGatt::GATT_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_SUCCESS"
		);
	}
	jint BluetoothGatt::GATT_WRITE_NOT_PERMITTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGatt",
			"GATT_WRITE_NOT_PERMITTED"
		);
	}
	
	// Constructors
	void BluetoothGatt::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothGatt",
			"(V)V");
	}
	
	// Methods
	void BluetoothGatt::abortReliableWrite()
	{
		__thiz.callMethod<void>(
			"abortReliableWrite",
			"()V"
		);
	}
	void BluetoothGatt::abortReliableWrite(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		__thiz.callMethod<void>(
			"abortReliableWrite",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothGatt::beginReliableWrite()
	{
		return __thiz.callMethod<jboolean>(
			"beginReliableWrite",
			"()Z"
		);
	}
	void BluetoothGatt::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean BluetoothGatt::connect()
	{
		return __thiz.callMethod<jboolean>(
			"connect",
			"()Z"
		);
	}
	void BluetoothGatt::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	jboolean BluetoothGatt::discoverServices()
	{
		return __thiz.callMethod<jboolean>(
			"discoverServices",
			"()Z"
		);
	}
	jboolean BluetoothGatt::executeReliableWrite()
	{
		return __thiz.callMethod<jboolean>(
			"executeReliableWrite",
			"()Z"
		);
	}
	QAndroidJniObject BluetoothGatt::getConnectedDevices()
	{
		return __thiz.callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothGatt::getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothGatt::getDevice()
	{
		return __thiz.callObjectMethod(
			"getDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	QAndroidJniObject BluetoothGatt::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject BluetoothGatt::getService(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callObjectMethod(
			"getService",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattService;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothGatt::getServices()
	{
		return __thiz.callObjectMethod(
			"getServices",
			"()Ljava/util/List;"
		);
	}
	jboolean BluetoothGatt::readCharacteristic(__jni_impl::android::bluetooth::BluetoothGattCharacteristic arg0)
	{
		return __thiz.callMethod<jboolean>(
			"readCharacteristic",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothGatt::readDescriptor(__jni_impl::android::bluetooth::BluetoothGattDescriptor arg0)
	{
		return __thiz.callMethod<jboolean>(
			"readDescriptor",
			"(Landroid/bluetooth/BluetoothGattDescriptor;)Z",
			arg0.__jniObject().object()
		);
	}
	void BluetoothGatt::readPhy()
	{
		__thiz.callMethod<void>(
			"readPhy",
			"()V"
		);
	}
	jboolean BluetoothGatt::readRemoteRssi()
	{
		return __thiz.callMethod<jboolean>(
			"readRemoteRssi",
			"()Z"
		);
	}
	jboolean BluetoothGatt::requestConnectionPriority(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestConnectionPriority",
			"(I)Z",
			arg0
		);
	}
	jboolean BluetoothGatt::requestMtu(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestMtu",
			"(I)Z",
			arg0
		);
	}
	jboolean BluetoothGatt::setCharacteristicNotification(__jni_impl::android::bluetooth::BluetoothGattCharacteristic arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setCharacteristicNotification",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;Z)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BluetoothGatt::setPreferredPhy(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setPreferredPhy",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean BluetoothGatt::writeCharacteristic(__jni_impl::android::bluetooth::BluetoothGattCharacteristic arg0)
	{
		return __thiz.callMethod<jboolean>(
			"writeCharacteristic",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothGatt::writeDescriptor(__jni_impl::android::bluetooth::BluetoothGattDescriptor arg0)
	{
		return __thiz.callMethod<jboolean>(
			"writeDescriptor",
			"(Landroid/bluetooth/BluetoothGattDescriptor;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothGatt : public __jni_impl::android::bluetooth::BluetoothGatt
	{
	public:
		BluetoothGatt(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothGatt()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHGATT

