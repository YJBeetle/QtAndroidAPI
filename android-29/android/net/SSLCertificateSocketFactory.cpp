#include "./SSLSessionCache.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/Socket.hpp"
#include "../../javax/net/SocketFactory.hpp"
#include "../../javax/net/ssl/SSLSocketFactory.hpp"
#include "./SSLCertificateSocketFactory.hpp"

namespace android::net
{
	// Fields
	
	SSLCertificateSocketFactory::SSLCertificateSocketFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLCertificateSocketFactory::SSLCertificateSocketFactory(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.SSLCertificateSocketFactory",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject SSLCertificateSocketFactory::getDefault(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.SSLCertificateSocketFactory",
			"getDefault",
			"(I)Ljavax/net/SocketFactory;",
			arg0
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::getDefault(jint arg0, android::net::SSLSessionCache arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.SSLCertificateSocketFactory",
			"getDefault",
			"(ILandroid/net/SSLSessionCache;)Ljavax/net/ssl/SSLSocketFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::getInsecure(jint arg0, android::net::SSLSessionCache arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.SSLCertificateSocketFactory",
			"getInsecure",
			"(ILandroid/net/SSLSessionCache;)Ljavax/net/ssl/SSLSocketFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::createSocket()
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"()Ljava/net/Socket;"
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
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;I)Ljava/net/Socket;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(java::net::InetAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(jstring arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
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
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(const QString &arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
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
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3)
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
	QAndroidJniObject SSLCertificateSocketFactory::createSocket(java::net::Socket arg0, const QString &arg1, jint arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	jarray SSLCertificateSocketFactory::getDefaultCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getDefaultCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jbyteArray SSLCertificateSocketFactory::getNpnSelectedProtocol(java::net::Socket arg0)
	{
		return __thiz.callObjectMethod(
			"getNpnSelectedProtocol",
			"(Ljava/net/Socket;)[B",
			arg0.__jniObject().object()
		).object<jbyteArray>();
	}
	jarray SSLCertificateSocketFactory::getSupportedCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void SSLCertificateSocketFactory::setHostname(java::net::Socket arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setHostname",
			"(Ljava/net/Socket;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SSLCertificateSocketFactory::setHostname(java::net::Socket arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setHostname",
			"(Ljava/net/Socket;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void SSLCertificateSocketFactory::setKeyManagers(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setKeyManagers",
			"([Ljavax/net/ssl/KeyManager;)V",
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
	void SSLCertificateSocketFactory::setTrustManagers(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setTrustManagers",
			"([Ljavax/net/ssl/TrustManager;)V",
			arg0
		);
	}
	void SSLCertificateSocketFactory::setUseSessionTickets(java::net::Socket arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setUseSessionTickets",
			"(Ljava/net/Socket;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

