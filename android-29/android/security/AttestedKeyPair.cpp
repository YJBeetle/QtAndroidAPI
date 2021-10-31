#include "../../java/security/KeyPair.hpp"
#include "./AttestedKeyPair.hpp"

namespace android::security
{
	// Fields
	
	// QAndroidJniObject forward
	AttestedKeyPair::AttestedKeyPair(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AttestedKeyPair::getAttestationRecord()
	{
		return callObjectMethod(
			"getAttestationRecord",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AttestedKeyPair::getKeyPair()
	{
		return callObjectMethod(
			"getKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
} // namespace android::security

