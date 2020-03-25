#pragma once

#ifndef JAVAX_NET_SSL_TRUSTMANAGERFACTORY
#define JAVAX_NET_SSL_TRUSTMANAGERFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::javax::net::ssl
{
	class TrustManagerFactorySpi;
}
namespace __jni_impl::java::security
{
	class KeyStore;
}

namespace __jni_impl::javax::net::ssl
{
	class TrustManagerFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		void init(__jni_impl::java::security::KeyStore arg0);
		void init(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getProvider();
		static QAndroidJniObject getDefaultAlgorithm();
		QAndroidJniObject getTrustManagers();
		QAndroidJniObject getAlgorithm();
	};
} // namespace __jni_impl::javax::net::ssl

#include "../../../java/security/Provider.hpp"
#include "TrustManagerFactorySpi.hpp"
#include "../../../java/security/KeyStore.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void TrustManagerFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.TrustManagerFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TrustManagerFactory::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0,
			arg1);
	}
	QAndroidJniObject TrustManagerFactory::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0);
	}
	QAndroidJniObject TrustManagerFactory::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0,
			arg1.__jniObject().object());
	}
	void TrustManagerFactory::init(__jni_impl::java::security::KeyStore arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/KeyStore;)V",
			arg0.__jniObject().object());
	}
	void TrustManagerFactory::init(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljavax/net/ssl/ManagerFactoryParameters;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TrustManagerFactory::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;");
	}
	QAndroidJniObject TrustManagerFactory::getDefaultAlgorithm()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getDefaultAlgorithm",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TrustManagerFactory::getTrustManagers()
	{
		return __thiz.callObjectMethod(
			"getTrustManagers",
			"()[Ljavax/net/ssl/TrustManager;");
	}
	QAndroidJniObject TrustManagerFactory::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class TrustManagerFactory : public __jni_impl::javax::net::ssl::TrustManagerFactory
	{
	public:
		TrustManagerFactory(QAndroidJniObject obj) { __thiz = obj; }
		TrustManagerFactory()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_TRUSTMANAGERFACTORY

