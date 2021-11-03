#include "./KeyPair.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyPair::KeyPair(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyPair::KeyPair(JObject arg0, JObject arg1)
		: JObject(
			"java.security.KeyPair",
			"(Ljava/security/PublicKey;Ljava/security/PrivateKey;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JObject KeyPair::getPrivate()
	{
		return callObjectMethod(
			"getPrivate",
			"()Ljava/security/PrivateKey;"
		);
	}
	JObject KeyPair::getPublic()
	{
		return callObjectMethod(
			"getPublic",
			"()Ljava/security/PublicKey;"
		);
	}
} // namespace java::security

