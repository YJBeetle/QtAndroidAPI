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
	class KeyManagerFactorySpi;
}

namespace __jni_impl::javax::net::ssl
{
	class KeyManagerFactory : public __JniBaseClass
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
		jarray getKeyManagers();
		QAndroidJniObject getProvider();
		void init(__jni_impl::__JniBaseClass arg0);
		void init(__jni_impl::java::security::KeyStore arg0, jcharArray arg1);
	};
} // namespace __jni_impl::javax::net::ssl

#include "../../../java/security/KeyStore.hpp"
#include "../../../java/security/Provider.hpp"
#include "KeyManagerFactorySpi.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void KeyManagerFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.KeyManagerFactory",
			"(V)V");
	}
	
	// Methods
	jstring KeyManagerFactory::getDefaultAlgorithm()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getDefaultAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyManagerFactory::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/KeyManagerFactory;",
			arg0
		);
	}
	QAndroidJniObject KeyManagerFactory::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/KeyManagerFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject KeyManagerFactory::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/KeyManagerFactory;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyManagerFactory::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/KeyManagerFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject KeyManagerFactory::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/KeyManagerFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyManagerFactory::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/KeyManagerFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jstring KeyManagerFactory::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray KeyManagerFactory::getKeyManagers()
	{
		return __thiz.callObjectMethod(
			"getKeyManagers",
			"()[Ljavax/net/ssl/KeyManager;"
		).object<jarray>();
	}
	QAndroidJniObject KeyManagerFactory::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void KeyManagerFactory::init(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljavax/net/ssl/ManagerFactoryParameters;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyManagerFactory::init(__jni_impl::java::security::KeyStore arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/KeyStore;[C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class KeyManagerFactory : public __jni_impl::javax::net::ssl::KeyManagerFactory
	{
	public:
		KeyManagerFactory(QAndroidJniObject obj) { __thiz = obj; }
		KeyManagerFactory()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

