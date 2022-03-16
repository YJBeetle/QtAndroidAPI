#include "../../java/security/KeyPair.hpp"
#include "./AttestedKeyPair.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	AttestedKeyPair::AttestedKeyPair(java::security::KeyPair arg0, JObject arg1)
		: JObject(
			"android.security.AttestedKeyPair",
			"(Ljava/security/KeyPair;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JObject AttestedKeyPair::getAttestationRecord() const
	{
		return callObjectMethod(
			"getAttestationRecord",
			"()Ljava/util/List;"
		);
	}
	java::security::KeyPair AttestedKeyPair::getKeyPair() const
	{
		return callObjectMethod(
			"getKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
} // namespace android::security

