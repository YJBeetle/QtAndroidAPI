#include "../../../java/security/KeyStore.hpp"
#include "../../../java/security/Provider.hpp"
#include "./KeyManagerFactorySpi.hpp"
#include "./KeyManagerFactory.hpp"

namespace javax::net::ssl
{
	// Fields
	
	KeyManagerFactory::KeyManagerFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	QAndroidJniObject KeyManagerFactory::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/KeyManagerFactory;",
			arg0,
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
	void KeyManagerFactory::init(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljavax/net/ssl/ManagerFactoryParameters;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyManagerFactory::init(java::security::KeyStore arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/KeyStore;[C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace javax::net::ssl

