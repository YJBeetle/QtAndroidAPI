#include "../../JArray.hpp"
#include "../../java/security/KeyPair.hpp"
#include "./AttestedKeyPair.hpp"

namespace android::security
{
	// Fields
	
	// QJniObject forward
	AttestedKeyPair::AttestedKeyPair(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
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

