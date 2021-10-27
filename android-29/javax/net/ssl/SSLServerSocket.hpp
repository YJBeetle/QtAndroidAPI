#pragma once

#ifndef JAVAX_NET_SSL_SSLSERVERSOCKET
#define JAVAX_NET_SSL_SSLSERVERSOCKET

#include "../../../__JniBaseClass.hpp"
#include "../../../java/net/ServerSocket.hpp"

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
	class SSLServerSocket : public __jni_impl::java::net::ServerSocket
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean getEnableSessionCreation();
		jarray getEnabledCipherSuites();
		jarray getEnabledProtocols();
		jboolean getNeedClientAuth();
		QAndroidJniObject getSSLParameters();
		jarray getSupportedCipherSuites();
		jarray getSupportedProtocols();
		jboolean getUseClientMode();
		jboolean getWantClientAuth();
		void setEnableSessionCreation(jboolean arg0);
		void setEnabledCipherSuites(jarray arg0);
		void setEnabledProtocols(jarray arg0);
		void setNeedClientAuth(jboolean arg0);
		void setSSLParameters(__jni_impl::javax::net::ssl::SSLParameters arg0);
		void setUseClientMode(jboolean arg0);
		void setWantClientAuth(jboolean arg0);
	};
} // namespace __jni_impl::javax::net::ssl

#include "../../../java/net/InetAddress.hpp"
#include "SSLParameters.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLServerSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLServerSocket",
			"(V)V");
	}
	
	// Methods
	jboolean SSLServerSocket::getEnableSessionCreation()
	{
		return __thiz.callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	jarray SSLServerSocket::getEnabledCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLServerSocket::getEnabledProtocols()
	{
		return __thiz.callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean SSLServerSocket::getNeedClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	QAndroidJniObject SSLServerSocket::getSSLParameters()
	{
		return __thiz.callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	jarray SSLServerSocket::getSupportedCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLServerSocket::getSupportedProtocols()
	{
		return __thiz.callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean SSLServerSocket::getUseClientMode()
	{
		return __thiz.callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	jboolean SSLServerSocket::getWantClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	void SSLServerSocket::setEnableSessionCreation(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	void SSLServerSocket::setEnabledCipherSuites(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLServerSocket::setEnabledProtocols(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLServerSocket::setNeedClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLServerSocket::setSSLParameters(__jni_impl::javax::net::ssl::SSLParameters arg0)
	{
		__thiz.callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.__jniObject().object()
		);
	}
	void SSLServerSocket::setUseClientMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	void SSLServerSocket::setWantClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLServerSocket : public __jni_impl::javax::net::ssl::SSLServerSocket
	{
	public:
		SSLServerSocket(QAndroidJniObject obj) { __thiz = obj; }
		SSLServerSocket()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLSERVERSOCKET

