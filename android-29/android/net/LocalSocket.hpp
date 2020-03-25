#pragma once

#ifndef ANDROID_NET_LOCALSOCKET
#define ANDROID_NET_LOCALSOCKET

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class LocalSocketAddress;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::android::net
{
	class Credentials;
}

namespace __jni_impl::android::net
{
	class LocalSocket : public __JniBaseClass
	{
	public:
		// Fields
		static jint SOCKET_DGRAM();
		static jint SOCKET_SEQPACKET();
		static jint SOCKET_STREAM();
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		QAndroidJniObject toString();
		void connect(__jni_impl::android::net::LocalSocketAddress arg0, jint arg1);
		void connect(__jni_impl::android::net::LocalSocketAddress arg0);
		void close();
		QAndroidJniObject getInputStream();
		void bind(__jni_impl::android::net::LocalSocketAddress arg0);
		jboolean isConnected();
		QAndroidJniObject getFileDescriptor();
		jboolean isClosed();
		QAndroidJniObject getOutputStream();
		jboolean isBound();
		jboolean isInputShutdown();
		jboolean isOutputShutdown();
		void shutdownInput();
		void shutdownOutput();
		QAndroidJniObject getRemoteSocketAddress();
		QAndroidJniObject getLocalSocketAddress();
		void setSoTimeout(jint arg0);
		jint getSoTimeout();
		void setSendBufferSize(jint arg0);
		jint getSendBufferSize();
		void setReceiveBufferSize(jint arg0);
		jint getReceiveBufferSize();
		void setFileDescriptorsForSend(jarray arg0);
		QAndroidJniObject getAncillaryFileDescriptors();
		QAndroidJniObject getPeerCredentials();
	};
} // namespace __jni_impl::android::net

#include "LocalSocketAddress.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/OutputStream.hpp"
#include "Credentials.hpp"

namespace __jni_impl::android::net
{
	// Fields
	jint LocalSocket::SOCKET_DGRAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_DGRAM");
	}
	jint LocalSocket::SOCKET_SEQPACKET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_SEQPACKET");
	}
	jint LocalSocket::SOCKET_STREAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_STREAM");
	}
	
	// Constructors
	void LocalSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalSocket",
			"()V");
	}
	void LocalSocket::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalSocket",
			"(I)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject LocalSocket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void LocalSocket::connect(__jni_impl::android::net::LocalSocketAddress arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Landroid/net/LocalSocketAddress;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void LocalSocket::connect(__jni_impl::android::net::LocalSocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Landroid/net/LocalSocketAddress;)V",
			arg0.__jniObject().object());
	}
	void LocalSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject LocalSocket::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;");
	}
	void LocalSocket::bind(__jni_impl::android::net::LocalSocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Landroid/net/LocalSocketAddress;)V",
			arg0.__jniObject().object());
	}
	jboolean LocalSocket::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z");
	}
	QAndroidJniObject LocalSocket::getFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;");
	}
	jboolean LocalSocket::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z");
	}
	QAndroidJniObject LocalSocket::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;");
	}
	jboolean LocalSocket::isBound()
	{
		return __thiz.callMethod<jboolean>(
			"isBound",
			"()Z");
	}
	jboolean LocalSocket::isInputShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isInputShutdown",
			"()Z");
	}
	jboolean LocalSocket::isOutputShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isOutputShutdown",
			"()Z");
	}
	void LocalSocket::shutdownInput()
	{
		__thiz.callMethod<void>(
			"shutdownInput",
			"()V");
	}
	void LocalSocket::shutdownOutput()
	{
		__thiz.callMethod<void>(
			"shutdownOutput",
			"()V");
	}
	QAndroidJniObject LocalSocket::getRemoteSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteSocketAddress",
			"()Landroid/net/LocalSocketAddress;");
	}
	QAndroidJniObject LocalSocket::getLocalSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalSocketAddress",
			"()Landroid/net/LocalSocketAddress;");
	}
	void LocalSocket::setSoTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0);
	}
	jint LocalSocket::getSoTimeout()
	{
		return __thiz.callMethod<jint>(
			"getSoTimeout",
			"()I");
	}
	void LocalSocket::setSendBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0);
	}
	jint LocalSocket::getSendBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getSendBufferSize",
			"()I");
	}
	void LocalSocket::setReceiveBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0);
	}
	jint LocalSocket::getReceiveBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getReceiveBufferSize",
			"()I");
	}
	void LocalSocket::setFileDescriptorsForSend(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setFileDescriptorsForSend",
			"([Ljava/io/FileDescriptor;)V",
			arg0);
	}
	QAndroidJniObject LocalSocket::getAncillaryFileDescriptors()
	{
		return __thiz.callObjectMethod(
			"getAncillaryFileDescriptors",
			"()[Ljava/io/FileDescriptor;");
	}
	QAndroidJniObject LocalSocket::getPeerCredentials()
	{
		return __thiz.callObjectMethod(
			"getPeerCredentials",
			"()Landroid/net/Credentials;");
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class LocalSocket : public __jni_impl::android::net::LocalSocket
	{
	public:
		LocalSocket(QAndroidJniObject obj) { __thiz = obj; }
		LocalSocket()
		{
			__constructor();
		}
		LocalSocket(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net

#endif // ANDROID_NET_LOCALSOCKET

