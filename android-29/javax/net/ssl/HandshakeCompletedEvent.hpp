#pragma once

#ifndef JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT
#define JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT

#include "../../../__JniBaseClass.hpp"
#include "../../../java/util/EventObject.hpp"

namespace __jni_impl::javax::net::ssl
{
	class SSLSocket;
}

namespace __jni_impl::javax::net::ssl
{
	class HandshakeCompletedEvent : public __jni_impl::java::util::EventObject
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::javax::net::ssl::SSLSocket arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getSession();
		QAndroidJniObject getPeerCertificates();
		QAndroidJniObject getLocalCertificates();
		QAndroidJniObject getPeerCertificateChain();
		QAndroidJniObject getSocket();
		QAndroidJniObject getCipherSuite();
		QAndroidJniObject getPeerPrincipal();
		QAndroidJniObject getLocalPrincipal();
	};
} // namespace __jni_impl::javax::net::ssl

#include "SSLSocket.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void HandshakeCompletedEvent::__constructor(__jni_impl::javax::net::ssl::SSLSocket arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.HandshakeCompletedEvent",
			"(Ljavax/net/ssl/SSLSocket;Ljavax/net/ssl/SSLSession;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject HandshakeCompletedEvent::getSession()
	{
		return __thiz.callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;");
	}
	QAndroidJniObject HandshakeCompletedEvent::getPeerCertificates()
	{
		return __thiz.callObjectMethod(
			"getPeerCertificates",
			"()[Ljava/security/cert/Certificate;");
	}
	QAndroidJniObject HandshakeCompletedEvent::getLocalCertificates()
	{
		return __thiz.callObjectMethod(
			"getLocalCertificates",
			"()[Ljava/security/cert/Certificate;");
	}
	QAndroidJniObject HandshakeCompletedEvent::getPeerCertificateChain()
	{
		return __thiz.callObjectMethod(
			"getPeerCertificateChain",
			"()[Ljavax/security/cert/X509Certificate;");
	}
	QAndroidJniObject HandshakeCompletedEvent::getSocket()
	{
		return __thiz.callObjectMethod(
			"getSocket",
			"()Ljavax/net/ssl/SSLSocket;");
	}
	QAndroidJniObject HandshakeCompletedEvent::getCipherSuite()
	{
		return __thiz.callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject HandshakeCompletedEvent::getPeerPrincipal()
	{
		return __thiz.callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;");
	}
	QAndroidJniObject HandshakeCompletedEvent::getLocalPrincipal()
	{
		return __thiz.callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;");
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class HandshakeCompletedEvent : public __jni_impl::javax::net::ssl::HandshakeCompletedEvent
	{
	public:
		HandshakeCompletedEvent(QAndroidJniObject obj) { __thiz = obj; }
		HandshakeCompletedEvent(__jni_impl::javax::net::ssl::SSLSocket arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT

