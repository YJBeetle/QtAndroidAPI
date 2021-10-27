#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothSocket;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothServerSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject accept();
		QAndroidJniObject accept(jint arg0);
		void close();
		jint getPsm();
		jstring toString();
	};
} // namespace __jni_impl::android::bluetooth

#include "BluetoothSocket.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	
	// Constructors
	void BluetoothServerSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothServerSocket",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothServerSocket : public __jni_impl::android::bluetooth::BluetoothServerSocket
	{
	public:
		BluetoothServerSocket(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothServerSocket()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

