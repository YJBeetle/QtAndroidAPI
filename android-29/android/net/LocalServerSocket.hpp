#pragma once

#ifndef ANDROID_NET_LOCALSERVERSOCKET
#define ANDROID_NET_LOCALSERVERSOCKET

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::android::net
{
	class LocalSocket;
}
namespace __jni_impl::android::net
{
	class LocalSocketAddress;
}

namespace __jni_impl::android::net
{
	class LocalServerSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::java::io::FileDescriptor arg0);
		
		// Methods
		QAndroidJniObject accept();
		void close();
		QAndroidJniObject getFileDescriptor();
		QAndroidJniObject getLocalSocketAddress();
	};
} // namespace __jni_impl::android::net

#include "../../java/io/FileDescriptor.hpp"
#include "LocalSocket.hpp"
#include "LocalSocketAddress.hpp"

namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void LocalServerSocket::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalServerSocket",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void LocalServerSocket::__constructor(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalServerSocket",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject LocalServerSocket::accept()
	{
		return __thiz.callObjectMethod(
			"accept",
			"()Landroid/net/LocalSocket;");
	}
	void LocalServerSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject LocalServerSocket::getFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;");
	}
	QAndroidJniObject LocalServerSocket::getLocalSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalSocketAddress",
			"()Landroid/net/LocalSocketAddress;");
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class LocalServerSocket : public __jni_impl::android::net::LocalServerSocket
	{
	public:
		LocalServerSocket(QAndroidJniObject obj) { __thiz = obj; }
		LocalServerSocket(jstring arg0)
		{
			__constructor(
				arg0);
		}
		LocalServerSocket(__jni_impl::java::io::FileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net

#endif // ANDROID_NET_LOCALSERVERSOCKET

