#include "./BluetoothDevice.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./BluetoothSocket.hpp"

namespace android::bluetooth
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
	
	BluetoothSocket::BluetoothSocket(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
} // namespace android::bluetooth

