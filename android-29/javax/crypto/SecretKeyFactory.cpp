#include "../../java/security/Provider.hpp"
#include "./SecretKeyFactorySpi.hpp"
#include "./SecretKeyFactory.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	SecretKeyFactory::SecretKeyFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject SecretKeyFactory::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;",
			arg0
		);
	}
	QAndroidJniObject SecretKeyFactory::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SecretKeyFactory::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/SecretKeyFactory;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject SecretKeyFactory::generateSecret(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"generateSecret",
			"(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;",
			arg0.object()
		);
	}
	jstring SecretKeyFactory::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SecretKeyFactory::getKeySpec(__JniBaseClass arg0, jclass arg1)
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject SecretKeyFactory::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	QAndroidJniObject SecretKeyFactory::translateKey(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"translateKey",
			"(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;",
			arg0.object()
		);
	}
} // namespace javax::crypto

