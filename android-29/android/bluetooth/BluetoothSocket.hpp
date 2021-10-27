#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}
namespace __jni_impl::java::io
{
	class InputStream;
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
		void close();
		void connect();
		jint getConnectionType();
		QAndroidJniObject getInputStream();
		jint getMaxReceivePacketSize();
		jint getMaxTransmitPacketSize();
		QAndroidJniObject getOutputStream();
		QAndroidJniObject getRemoteDevice();
		jboolean isConnected();
	};
} // namespace __jni_impl::android::bluetooth

#include "BluetoothDevice.hpp"
#include "../../java/io/InputStream.hpp"
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
	void BluetoothSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void BluetoothSocket::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jint BluetoothSocket::getConnectionType()
	{
		return __thiz.callMethod<jint>(
			"getConnectionType",
			"()I"
		);
	}
	QAndroidJniObject BluetoothSocket::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jint BluetoothSocket::getMaxReceivePacketSize()
	{
		return __thiz.callMethod<jint>(
			"getMaxReceivePacketSize",
			"()I"
		);
	}
	jint BluetoothSocket::getMaxTransmitPacketSize()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransmitPacketSize",
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
	QAndroidJniObject BluetoothSocket::getRemoteDevice()
	{
		return __thiz.callObjectMethod(
			"getRemoteDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
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

