#include "./KeyPair.hpp"
#include "./SecureRandom.hpp"
#include "./KeyPairGeneratorSpi.hpp"

namespace java::security
{
	// Fields
	
	KeyPairGeneratorSpi::KeyPairGeneratorSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyPairGeneratorSpi::KeyPairGeneratorSpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyPairGeneratorSpi",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject KeyPairGeneratorSpi::generateKeyPair()
	{
		return __thiz.callObjectMethod(
			"generateKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	void KeyPairGeneratorSpi::initialize(jint arg0, java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void KeyPairGeneratorSpi::initialize(__JniBaseClass arg0, java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::security

