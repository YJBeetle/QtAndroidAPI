#include "./KeyPair.hpp"
#include "./SecureRandom.hpp"
#include "./KeyPairGeneratorSpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyPairGeneratorSpi::KeyPairGeneratorSpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyPairGeneratorSpi::KeyPairGeneratorSpi()
		: __JniBaseClass(
			"java.security.KeyPairGeneratorSpi",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject KeyPairGeneratorSpi::generateKeyPair()
	{
		return callObjectMethod(
			"generateKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	void KeyPairGeneratorSpi::initialize(jint arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"initialize",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.object()
		);
	}
	void KeyPairGeneratorSpi::initialize(__JniBaseClass arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security

