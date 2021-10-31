#include "../../java/security/KeyPair.hpp"
#include "./AttestedKeyPair.hpp"

namespace android::security
{
	// Fields
	
	// QJniObject forward
	AttestedKeyPair::AttestedKeyPair(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AttestedKeyPair::AttestedKeyPair(java::security::KeyPair arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.security.AttestedKeyPair",
			"(Ljava/security/KeyPair;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	__JniBaseClass AttestedKeyPair::getAttestationRecord()
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

