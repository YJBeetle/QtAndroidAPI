#include "./BluetoothDevice.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./BluetoothSocket.hpp"

namespace android::bluetooth
{
	// Fields
	jint BluetoothSocket::TYPE_L2CAP()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_L2CAP"
		);
	}
	jint BluetoothSocket::TYPE_RFCOMM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_RFCOMM"
		);
	}
	jint BluetoothSocket::TYPE_SCO()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_SCO"
		);
	}
	
	// QJniObject forward
	BluetoothSocket::BluetoothSocket(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BluetoothSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void BluetoothSocket::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	jint BluetoothSocket::getConnectionType() const
	{
		return callMethod<jint>(
			"getConnectionType",
			"()I"
		);
	}
	java::io::InputStream BluetoothSocket::getInputStream() const
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jint BluetoothSocket::getMaxReceivePacketSize() const
	{
		return callMethod<jint>(
			"getMaxReceivePacketSize",
			"()I"
		);
	}
	jint BluetoothSocket::getMaxTransmitPacketSize() const
	{
		return callMethod<jint>(
			"getMaxTransmitPacketSize",
			"()I"
		);
	}
	java::io::OutputStream BluetoothSocket::getOutputStream() const
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	android::bluetooth::BluetoothDevice BluetoothSocket::getRemoteDevice() const
	{
		return callObjectMethod(
			"getRemoteDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	jboolean BluetoothSocket::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace android::bluetooth

