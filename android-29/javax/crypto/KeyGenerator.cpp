#include "../../java/security/Provider.hpp"
#include "../../java/security/SecureRandom.hpp"
#include "./KeyGeneratorSpi.hpp"
#include "./KeyGenerator.hpp"

namespace javax::crypto
{
	// Fields
	
	KeyGenerator::KeyGenerator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject KeyGenerator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/KeyGenerator;",
			arg0
		);
	}
	QAndroidJniObject KeyGenerator::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyGenerator;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyGenerator::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyGenerator;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenerator::generateKey()
	{
		return __thiz.callObjectMethod(
			"generateKey",
			"()Ljavax/crypto/SecretKey;"
		);
	}
	jstring KeyGenerator::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyGenerator::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void KeyGenerator::init(jint arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(I)V",
			arg0
		);
	}
	void KeyGenerator::init(java::security::SecureRandom arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyGenerator::init(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyGenerator::init(jint arg0, java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void KeyGenerator::init(__JniBaseClass arg0, java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace javax::crypto

