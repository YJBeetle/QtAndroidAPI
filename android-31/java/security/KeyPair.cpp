#include "./KeyPair.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyPair::KeyPair(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyPair::KeyPair(__JniBaseClass arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"java.security.KeyPair",
			"(Ljava/security/PublicKey;Ljava/security/PrivateKey;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	__JniBaseClass KeyPair::getPrivate()
	{
		return callObjectMethod(
			"getPrivate",
			"()Ljava/security/PrivateKey;"
		);
	}
	__JniBaseClass KeyPair::getPublic()
	{
		return callObjectMethod(
			"getPublic",
			"()Ljava/security/PublicKey;"
		);
	}
} // namespace java::security

