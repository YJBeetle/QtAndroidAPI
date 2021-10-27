#include "./BluetoothSocket.hpp"
#include "./BluetoothServerSocket.hpp"

namespace android::bluetooth
{
	// Fields
	
	BluetoothServerSocket::BluetoothServerSocket(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject BluetoothServerSocket::accept()
	{
		return __thiz.callObjectMethod(
			"accept",
			"()Landroid/bluetooth/BluetoothSocket;"
		);
	}
	QAndroidJniObject BluetoothServerSocket::accept(jint arg0)
	{
		return __thiz.callObjectMethod(
			"accept",
			"(I)Landroid/bluetooth/BluetoothSocket;",
			arg0
		);
	}
	void BluetoothServerSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint BluetoothServerSocket::getPsm()
	{
		return __thiz.callMethod<jint>(
			"getPsm",
			"()I"
		);
	}
	jstring BluetoothServerSocket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::bluetooth

