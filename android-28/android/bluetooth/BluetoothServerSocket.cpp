#include "./BluetoothSocket.hpp"
#include "./BluetoothServerSocket.hpp"

namespace android::bluetooth
{
	// Fields
	
	// QJniObject forward
	BluetoothServerSocket::BluetoothServerSocket(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	jstring BluetoothServerSocket::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::bluetooth

