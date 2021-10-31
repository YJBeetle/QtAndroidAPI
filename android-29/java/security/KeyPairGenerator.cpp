#include "./KeyPair.hpp"
#include "./Provider.hpp"
#include "./SecureRandom.hpp"
#include "./KeyPairGenerator.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyPairGenerator::KeyPairGenerator(QAndroidJniObject obj) : java::security::KeyPairGeneratorSpi(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject KeyPairGenerator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyPairGenerator;",
			arg0
		);
	}
	QAndroidJniObject KeyPairGenerator::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyPairGenerator;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyPairGenerator::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyPairGenerator;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject KeyPairGenerator::genKeyPair()
	{
		return callObjectMethod(
			"genKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	QAndroidJniObject KeyPairGenerator::generateKeyPair()
	{
		return callObjectMethod(
			"generateKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	jstring KeyPairGenerator::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyPairGenerator::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void KeyPairGenerator::initialize(jint arg0)
	{
		callMethod<void>(
			"initialize",
			"(I)V",
			arg0
		);
	}
	void KeyPairGenerator::initialize(__JniBaseClass arg0)
	{
		callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	void KeyPairGenerator::initialize(jint arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"initialize",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.object()
		);
	}
	void KeyPairGenerator::initialize(__JniBaseClass arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security
