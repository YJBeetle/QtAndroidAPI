#include "./Credentials.hpp"
#include "./LocalSocketAddress.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./LocalSocket.hpp"

namespace android::net
{
	// Fields
	jint LocalSocket::SOCKET_DGRAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_DGRAM"
		);
	}
	jint LocalSocket::SOCKET_SEQPACKET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_SEQPACKET"
		);
	}
	jint LocalSocket::SOCKET_STREAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_STREAM"
		);
	}
	
	LocalSocket::LocalSocket(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LocalSocket::LocalSocket()
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalSocket",
			"()V"
		);
	}
	LocalSocket::LocalSocket(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalSocket",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void LocalSocket::bind(android::net::LocalSocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Landroid/net/LocalSocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void LocalSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void LocalSocket::connect(android::net::LocalSocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Landroid/net/LocalSocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void LocalSocket::connect(android::net::LocalSocketAddress arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Landroid/net/LocalSocketAddress;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jarray LocalSocket::getAncillaryFileDescriptors()
	{
		return __thiz.callObjectMethod(
			"getAncillaryFileDescriptors",
			"()[Ljava/io/FileDescriptor;"
		).object<jarray>();
	}
	QAndroidJniObject LocalSocket::getFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	QAndroidJniObject LocalSocket::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject LocalSocket::getLocalSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalSocketAddress",
			"()Landroid/net/LocalSocketAddress;"
		);
	}
	QAndroidJniObject LocalSocket::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	QAndroidJniObject LocalSocket::getPeerCredentials()
	{
		return __thiz.callObjectMethod(
			"getPeerCredentials",
			"()Landroid/net/Credentials;"
		);
	}
	jint LocalSocket::getReceiveBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	QAndroidJniObject LocalSocket::getRemoteSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteSocketAddress",
			"()Landroid/net/LocalSocketAddress;"
		);
	}
	jint LocalSocket::getSendBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	jint LocalSocket::getSoTimeout()
	{
		return __thiz.callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	jboolean LocalSocket::isBound()
	{
		return __thiz.callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	jboolean LocalSocket::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean LocalSocket::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean LocalSocket::isInputShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isInputShutdown",
			"()Z"
		);
	}
	jboolean LocalSocket::isOutputShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isOutputShutdown",
			"()Z"
		);
	}
	void LocalSocket::setFileDescriptorsForSend(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setFileDescriptorsForSend",
			"([Ljava/io/FileDescriptor;)V",
			arg0
		);
	}
	void LocalSocket::setReceiveBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	void LocalSocket::setSendBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	void LocalSocket::setSoTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	void LocalSocket::shutdownInput()
	{
		__thiz.callMethod<void>(
			"shutdownInput",
			"()V"
		);
	}
	void LocalSocket::shutdownOutput()
	{
		__thiz.callMethod<void>(
			"shutdownOutput",
			"()V"
		);
	}
	jstring LocalSocket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net

