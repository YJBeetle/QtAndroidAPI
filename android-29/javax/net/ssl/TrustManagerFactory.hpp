#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class KeyStore;
}
namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::javax::net::ssl
{
	class TrustManagerFactorySpi;
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
		static jstring getDefaultAlgorithm();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1);
		jstring getAlgorithm();
		QAndroidJniObject getProvider();
		jarray getTrustManagers();
		void init(__jni_impl::java::security::KeyStore arg0);
		void init(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::javax::net::ssl

#include "../../../java/security/KeyStore.hpp"
#include "../../../java/security/Provider.hpp"
#include "TrustManagerFactorySpi.hpp"

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
	jstring TrustManagerFactory::getDefaultAlgorithm()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getDefaultAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TrustManagerFactory::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0
		);
	}
	QAndroidJniObject TrustManagerFactory::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TrustManagerFactory::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TrustManagerFactory::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject TrustManagerFactory::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TrustManagerFactory::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/TrustManagerFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jstring TrustManagerFactory::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TrustManagerFactory::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jarray TrustManagerFactory::getTrustManagers()
	{
		return __thiz.callObjectMethod(
			"getTrustManagers",
			"()[Ljavax/net/ssl/TrustManager;"
		).object<jarray>();
	}
	void TrustManagerFactory::init(__jni_impl::java::security::KeyStore arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/KeyStore;)V",
			arg0.__jniObject().object()
		);
	}
	void TrustManagerFactory::init(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljavax/net/ssl/ManagerFactoryParameters;)V",
			arg0.__jniObject().object()
		);
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

