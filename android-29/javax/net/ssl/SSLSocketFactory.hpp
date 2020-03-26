#pragma once

#ifndef JAVAX_NET_SSL_SSLSOCKETFACTORY
#define JAVAX_NET_SSL_SSLSOCKETFACTORY

#include "../../../__JniBaseClass.hpp"
#include "../SocketFactory.hpp"

namespace __jni_impl::javax::net
{
	class SocketFactory;
}
namespace __jni_impl::java::net
{
	class Socket;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::javax::net::ssl
{
	class SSLSocketFactory : public __jni_impl::javax::net::SocketFactory
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefault();
		jarray getDefaultCipherSuites();
		jarray getSupportedCipherSuites();
		QAndroidJniObject createSocket(__jni_impl::java::net::Socket arg0, __jni_impl::java::io::InputStream arg1, jboolean arg2);
		QAndroidJniObject createSocket(__jni_impl::java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3);
	};
} // namespace __jni_impl::javax::net::ssl

#include "../SocketFactory.hpp"
#include "../../../java/net/Socket.hpp"
#include "../../../java/io/InputStream.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLSocketFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLSocketFactory",
			"()V");
	}
	
	// Methods
	QAndroidJniObject SSLSocketFactory::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLSocketFactory",
			"getDefault",
			"()Ljavax/net/SocketFactory;"
		);
	}
	jarray SSLSocketFactory::getDefaultCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getDefaultCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLSocketFactory::getSupportedCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject SSLSocketFactory::createSocket(__jni_impl::java::net::Socket arg0, __jni_impl::java::io::InputStream arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/io/InputStream;Z)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject SSLSocketFactory::createSocket(__jni_impl::java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3)
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
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLSocketFactory : public __jni_impl::javax::net::ssl::SSLSocketFactory
	{
	public:
		SSLSocketFactory(QAndroidJniObject obj) { __thiz = obj; }
		SSLSocketFactory()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLSOCKETFACTORY

