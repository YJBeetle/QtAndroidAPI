#include "./LocalSocket.hpp"
#include "./LocalSocketAddress.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "./LocalServerSocket.hpp"

namespace android::net
{
	// Fields
	
	LocalServerSocket::LocalServerSocket(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LocalServerSocket::LocalServerSocket(java::io::FileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalServerSocket",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	LocalServerSocket::LocalServerSocket(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalServerSocket",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject LocalServerSocket::accept()
	{
		return __thiz.callObjectMethod(
			"accept",
			"()Landroid/net/LocalSocket;"
		);
	}
	void LocalServerSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject LocalServerSocket::getFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	QAndroidJniObject LocalServerSocket::getLocalSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalSocketAddress",
			"()Landroid/net/LocalSocketAddress;"
		);
	}
} // namespace android::net

