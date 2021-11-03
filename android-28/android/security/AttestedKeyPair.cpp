#include "../../java/security/KeyPair.hpp"
#include "./AttestedKeyPair.hpp"

namespace android::security
{
	// Fields
	
	// QAndroidJniObject forward
	AttestedKeyPair::AttestedKeyPair(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject AttestedKeyPair::getAttestationRecord()
	{
		return callObjectMethod(
			"getAttestationRecord",
			"()Ljava/util/List;"
		);
	}
	java::security::KeyPair AttestedKeyPair::getKeyPair()
	{
		return callObjectMethod(
			"getKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
} // namespace android::security

