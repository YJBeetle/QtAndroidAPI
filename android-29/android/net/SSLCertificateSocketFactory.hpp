#pragma once

#ifndef ANDROID_NET_SSLCERTIFICATESOCKETFACTORY
#define ANDROID_NET_SSLCERTIFICATESOCKETFACTORY

#include "../../__JniBaseClass.hpp"
#include "../../javax/net/SocketFactory.hpp"
#include "../../javax/net/ssl/SSLSocketFactory.hpp"

namespace __jni_impl::javax::net::ssl
{
	class SSLSocketFactory;
}
namespace __jni_impl::android::net
{
	class SSLSessionCache;
}
namespace __jni_impl::javax::net
{
	class SocketFactory;
}
namespace __jni_impl::java::net
{
	class Socket;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::android::net
{
	class SSLCertificateSocketFactory : public __jni_impl::javax::net::ssl::SSLSocketFactory
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		static QAndroidJniObject getDefault(jint arg0, __jni_impl::android::net::SSLSessionCache arg1);
		static QAndroidJniObject getDefault(jint arg0);
		void setUseSessionTickets(__jni_impl::java::net::Socket arg0, jboolean arg1);
		static QAndroidJniObject getInsecure(jint arg0, __jni_impl::android::net::SSLSessionCache arg1);
		void setTrustManagers(jarray arg0);
		void setNpnProtocols(jarray arg0);
		jbyteArray getNpnSelectedProtocol(__jni_impl::java::net::Socket arg0);
		void setKeyManagers(jarray arg0);
		void setHostname(__jni_impl::java::net::Socket arg0, jstring arg1);
		jarray getDefaultCipherSuites();
		jarray getSupportedCipherSuites();
		QAndroidJniObject createSocket(__jni_impl::java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3);
		QAndroidJniObject createSocket(jstring arg0, jint arg1);
		QAndroidJniObject createSocket(jstring arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3);
		QAndroidJniObject createSocket(__jni_impl::java::net::InetAddress arg0, jint arg1);
		QAndroidJniObject createSocket(__jni_impl::java::net::InetAddress arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3);
		QAndroidJniObject createSocket();
	};
} // namespace __jni_impl::android::net

#include "../../javax/net/ssl/SSLSocketFactory.hpp"
#include "SSLSessionCache.hpp"
#include "../../javax/net/SocketFactory.hpp"
#include "../../java/net/Socket.hpp"
#include "../../java/net/InetAddress.hpp"

namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void SSLCertificateSocketFactory::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.SSLCertificateSocketFactory",
			"(I)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject SSLCertificateSocketFactory::getDefault(jint arg0, __jni_impl::android::net::SSLSessionCache arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.SSLCertificateSocketFactory",
			"getDefault",
			"(ILandroid/net/SSLSessionCache;)Ljavax/net/ssl/SSLSocketFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::getDefault(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.SSLCertificateSocketFactory",
			"getDefault",
			"(I)Ljavax/net/SocketFactory;",
			arg0
		);
	}
	void SSLCertificateSocketFactory::setUseSessionTickets(__jni_impl::java::net::Socket arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setUseSessionTickets",
			"(Ljava/net/Socket;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::getInsecure(jint arg0, __jni_impl::android::net::SSLSessionCache arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.SSLCertificateSocketFactory",
			"getInsecure",
			"(ILandroid/net/SSLSessionCache;)Ljavax/net/ssl/SSLSocketFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SSLCertificateSocketFactory::setTrustManagers(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setTrustManagers",
			"([Ljavax/net/ssl/TrustManager;)V",
			arg0
		);
	}
	void SSLCertificateSocketFactory::setNpnProtocols(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setNpnProtocols",
			"([[B)V",
			arg0
		);
	}
	jbyteArray SSLCertificateSocketFactory::getNpnSelectedProtocol(__jni_impl::java::net::Socket arg0)
	{
		return __thiz.callObjectMethod(
			"getNpnSelectedProtocol",
			"(Ljava/net/Socket;)[B",
			arg0.__jniObject().object()
		).object<jbyteArray>();
	}
	void SSLCertificateSocketFactory::setKeyManagers(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setKeyManagers",
			"([Ljavax/net/ssl/KeyManager;)V",
			arg0
		);
	}
	void SSLCertificateSocketFactory::setHostname(__jni_impl::java::net::Socket arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setHostname",
			"(Ljava/net/Socket;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jarray SSLCertificateSocketFactory::getDefaultCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getDefaultCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLCertificateSocketFactory::getSupportedCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(__jni_impl::java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;I)Ljava/net/Socket;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(jstring arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(__jni_impl::java::net::InetAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(__jni_impl::java::net::InetAddress arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::createSocket()
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"()Ljava/net/Socket;"
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class SSLCertificateSocketFactory : public __jni_impl::android::net::SSLCertificateSocketFactory
	{
	public:
		SSLCertificateSocketFactory(QAndroidJniObject obj) { __thiz = obj; }
		SSLCertificateSocketFactory(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net

#endif // ANDROID_NET_SSLCERTIFICATESOCKETFACTORY

