#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHSOCKET
#define ANDROID_BLUETOOTH_BLUETOOTHSOCKET

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothSocket : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_L2CAP();
		static jint TYPE_RFCOMM();
		static jint TYPE_SCO();
		
		// Constructors
		void __constructor();
		
		// Methods
		void connect();
		void close();
		QAndroidJniObject getInputStream();
		QAndroidJniObject getRemoteDevice();
		jint getMaxTransmitPacketSize();
		jint getMaxReceivePacketSize();
		jint getConnectionType();
		QAndroidJniObject getOutputStream();
		jboolean isConnected();
	};
} // namespace __jni_impl::android::bluetooth

#include "../../java/io/InputStream.hpp"
#include "BluetoothDevice.hpp"
#include "../../java/io/OutputStream.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	jint BluetoothSocket::TYPE_L2CAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_L2CAP"
		);
	}
	jint BluetoothSocket::TYPE_RFCOMM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_RFCOMM"
		);
	}
	jint BluetoothSocket::TYPE_SCO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_SCO"
		);
	}
	
	// Constructors
	void BluetoothSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothSocket",
			"(V)V");
	}
	
	// Methods
	void BluetoothSocket::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	void BluetoothSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject BluetoothSocket::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject BluetoothSocket::getRemoteDevice()
	{
		return __thiz.callObjectMethod(
			"getRemoteDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	jint BluetoothSocket::getMaxTransmitPacketSize()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransmitPacketSize",
			"()I"
		);
	}
	jint BluetoothSocket::getMaxReceivePacketSize()
	{
		return __thiz.callMethod<jint>(
			"getMaxReceivePacketSize",
			"()I"
		);
	}
	jint BluetoothSocket::getConnectionType()
	{
		return __thiz.callMethod<jint>(
			"getConnectionType",
			"()I"
		);
	}
	QAndroidJniObject BluetoothSocket::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	jboolean BluetoothSocket::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothSocket : public __jni_impl::android::bluetooth::BluetoothSocket
	{
	public:
		BluetoothSocket(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothSocket()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHSOCKET

