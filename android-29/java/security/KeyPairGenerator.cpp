#include "./KeyPair.hpp"
#include "./Provider.hpp"
#include "./SecureRandom.hpp"
#include "./KeyPairGenerator.hpp"

namespace java::security
{
	// Fields
	
	KeyPairGenerator::KeyPairGenerator(QAndroidJniObject obj) { __thiz = obj; }
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
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyPairGenerator::genKeyPair()
	{
		return __thiz.callObjectMethod(
			"genKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	QAndroidJniObject KeyPairGenerator::generateKeyPair()
	{
		return __thiz.callObjectMethod(
			"generateKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	jstring KeyPairGenerator::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyPairGenerator::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void KeyPairGenerator::initialize(jint arg0)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(I)V",
			arg0
		);
	}
	void KeyPairGenerator::initialize(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyPairGenerator::initialize(jint arg0, java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void KeyPairGenerator::initialize(__JniBaseClass arg0, java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::security

