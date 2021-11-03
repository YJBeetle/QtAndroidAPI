#include "./BluetoothSocket.hpp"
#include "../../JString.hpp"
#include "./BluetoothServerSocket.hpp"

namespace android::bluetooth
{
	// Fields
	
	// QJniObject forward
	BluetoothServerSocket::BluetoothServerSocket(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::bluetooth::BluetoothSocket BluetoothServerSocket::accept()
	{
		return callObjectMethod(
			"accept",
			"()Landroid/bluetooth/BluetoothSocket;"
		);
	}
	android::bluetooth::BluetoothSocket BluetoothServerSocket::accept(jint arg0)
	{
		return callObjectMethod(
			"accept",
			"(I)Landroid/bluetooth/BluetoothSocket;",
			arg0
		);
	}
	void BluetoothServerSocket::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint BluetoothServerSocket::getPsm()
	{
		return callMethod<jint>(
			"getPsm",
			"()I"
		);
	}
	JString BluetoothServerSocket::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::bluetooth

