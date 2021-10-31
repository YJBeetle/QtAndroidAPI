#include "./BluetoothSocket.hpp"
#include "./BluetoothServerSocket.hpp"

namespace android::bluetooth
{
	// Fields
	
	// QAndroidJniObject forward
	BluetoothServerSocket::BluetoothServerSocket(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject BluetoothServerSocket::accept()
	{
		return callObjectMethod(
			"accept",
			"()Landroid/bluetooth/BluetoothSocket;"
		);
	}
	QAndroidJniObject BluetoothServerSocket::accept(jint arg0)
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
	jstring BluetoothServerSocket::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::bluetooth

