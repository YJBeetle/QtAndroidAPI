#pragma once

#ifndef JAVAX_NET_SSL_SSLSOCKET
#define JAVAX_NET_SSL_SSLSOCKET

#include "../../../__JniBaseClass.hpp"
#include "../../../java/net/Socket.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLParameters;
}

namespace __jni_impl::javax::net::ssl
{
	class SSLSocket : public __jni_impl::java::net::Socket
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jarray getEnabledCipherSuites();
		jarray getEnabledProtocols();
		jboolean getNeedClientAuth();
		void setNeedClientAuth(jboolean arg0);
		jboolean getWantClientAuth();
		void setWantClientAuth(jboolean arg0);
		void setEnabledCipherSuites(jarray arg0);
		void setEnabledProtocols(jarray arg0);
		jarray getSupportedCipherSuites();
		jarray getSupportedProtocols();
		QAndroidJniObject getHandshakeSession();
		void setUseClientMode(jboolean arg0);
		jboolean getUseClientMode();
		void setEnableSessionCreation(jboolean arg0);
		jboolean getEnableSessionCreation();
		QAndroidJniObject getSSLParameters();
		void setSSLParameters(__jni_impl::javax::net::ssl::SSLParameters arg0);
		jstring getApplicationProtocol();
		jstring getHandshakeApplicationProtocol();
		void setHandshakeApplicationProtocolSelector(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getHandshakeApplicationProtocolSelector();
		void addHandshakeCompletedListener(__jni_impl::__JniBaseClass arg0);
		void removeHandshakeCompletedListener(__jni_impl::__JniBaseClass arg0);
		void startHandshake();
		QAndroidJniObject getSession();
	};
} // namespace __jni_impl::javax::net::ssl

#include "../../../java/net/InetAddress.hpp"
#include "SSLParameters.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLSocket",
			"(V)V");
	}
	
	// Methods
	jarray SSLSocket::getEnabledCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLSocket::getEnabledProtocols()
	{
		return __thiz.callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean SSLSocket::getNeedClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	void SSLSocket::setNeedClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	jboolean SSLSocket::getWantClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	void SSLSocket::setWantClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLSocket::setEnabledCipherSuites(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLSocket::setEnabledProtocols(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	jarray SSLSocket::getSupportedCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLSocket::getSupportedProtocols()
	{
		return __thiz.callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject SSLSocket::getHandshakeSession()
	{
		return __thiz.callObjectMethod(
			"getHandshakeSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	void SSLSocket::setUseClientMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	jboolean SSLSocket::getUseClientMode()
	{
		return __thiz.callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	void SSLSocket::setEnableSessionCreation(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	jboolean SSLSocket::getEnableSessionCreation()
	{
		return __thiz.callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	QAndroidJniObject SSLSocket::getSSLParameters()
	{
		return __thiz.callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	void SSLSocket::setSSLParameters(__jni_impl::javax::net::ssl::SSLParameters arg0)
	{
		__thiz.callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.__jniObject().object()
		);
	}
	jstring SSLSocket::getApplicationProtocol()
	{
		return __thiz.callObjectMethod(
			"getApplicationProtocol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SSLSocket::getHandshakeApplicationProtocol()
	{
		return __thiz.callObjectMethod(
			"getHandshakeApplicationProtocol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SSLSocket::setHandshakeApplicationProtocolSelector(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setHandshakeApplicationProtocolSelector",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SSLSocket::getHandshakeApplicationProtocolSelector()
	{
		return __thiz.callObjectMethod(
			"getHandshakeApplicationProtocolSelector",
			"()Ljava/util/function/BiFunction;"
		);
	}
	void SSLSocket::addHandshakeCompletedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addHandshakeCompletedListener",
			"(Ljavax/net/ssl/HandshakeCompletedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SSLSocket::removeHandshakeCompletedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeHandshakeCompletedListener",
			"(Ljavax/net/ssl/HandshakeCompletedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SSLSocket::startHandshake()
	{
		__thiz.callMethod<void>(
			"startHandshake",
			"()V"
		);
	}
	QAndroidJniObject SSLSocket::getSession()
	{
		return __thiz.callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLSocket : public __jni_impl::javax::net::ssl::SSLSocket
	{
	public:
		SSLSocket(QAndroidJniObject obj) { __thiz = obj; }
		SSLSocket()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLSOCKET

