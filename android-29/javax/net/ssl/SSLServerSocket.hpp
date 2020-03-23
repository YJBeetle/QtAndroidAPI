#pragma once

#ifndef JAVAX_NET_SSL_SSLSERVERSOCKET
#define JAVAX_NET_SSL_SSLSERVERSOCKET

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
		QAndroidJniObject getEnabledCipherSuites();
		QAndroidJniObject getEnabledProtocols();
		jboolean getNeedClientAuth();
		void setNeedClientAuth(jboolean arg0);
		jboolean getWantClientAuth();
		void setWantClientAuth(jboolean arg0);
		void setEnabledCipherSuites(jarray arg0);
		void setEnabledProtocols(jarray arg0);
		QAndroidJniObject getSupportedCipherSuites();
		QAndroidJniObject getSupportedProtocols();
		void setUseClientMode(jboolean arg0);
		jboolean getUseClientMode();
		void setEnableSessionCreation(jboolean arg0);
		jboolean getEnableSessionCreation();
		QAndroidJniObject getSSLParameters();
		void setSSLParameters(__jni_impl::javax::net::ssl::SSLParameters arg0);
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
	QAndroidJniObject SSLServerSocket::getEnabledCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject SSLServerSocket::getEnabledProtocols()
	{
		return __thiz.callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;");
	}
	jboolean SSLServerSocket::getNeedClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z");
	}
	void SSLServerSocket::setNeedClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0);
	}
	jboolean SSLServerSocket::getWantClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getWantClientAuth",
			"()Z");
	}
	void SSLServerSocket::setWantClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0);
	}
	void SSLServerSocket::setEnabledCipherSuites(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void SSLServerSocket::setEnabledProtocols(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject SSLServerSocket::getSupportedCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject SSLServerSocket::getSupportedProtocols()
	{
		return __thiz.callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;");
	}
	void SSLServerSocket::setUseClientMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0);
	}
	jboolean SSLServerSocket::getUseClientMode()
	{
		return __thiz.callMethod<jboolean>(
			"getUseClientMode",
			"()Z");
	}
	void SSLServerSocket::setEnableSessionCreation(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0);
	}
	jboolean SSLServerSocket::getEnableSessionCreation()
	{
		return __thiz.callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z");
	}
	QAndroidJniObject SSLServerSocket::getSSLParameters()
	{
		return __thiz.callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;");
	}
	void SSLServerSocket::setSSLParameters(__jni_impl::javax::net::ssl::SSLParameters arg0)
	{
		__thiz.callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.__jniObject().object());
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

