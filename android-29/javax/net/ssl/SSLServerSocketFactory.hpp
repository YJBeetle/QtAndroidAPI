#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../ServerSocketFactory.hpp"

namespace __jni_impl::javax::net
{
	class ServerSocketFactory;
}

namespace __jni_impl::javax::net::ssl
{
	class SSLServerSocketFactory : public __jni_impl::javax::net::ServerSocketFactory
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefault();
		jarray getDefaultCipherSuites();
		jarray getSupportedCipherSuites();
	};
} // namespace __jni_impl::javax::net::ssl

#include "../ServerSocketFactory.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLServerSocketFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLServerSocketFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SSLServerSocketFactory::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLServerSocketFactory",
			"getDefault",
			"()Ljavax/net/ServerSocketFactory;"
		);
	}
	jarray SSLServerSocketFactory::getDefaultCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getDefaultCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLServerSocketFactory::getSupportedCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLServerSocketFactory : public __jni_impl::javax::net::ssl::SSLServerSocketFactory
	{
	public:
		SSLServerSocketFactory(QAndroidJniObject obj) { __thiz = obj; }
		SSLServerSocketFactory()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

