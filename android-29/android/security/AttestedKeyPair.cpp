#include "../../java/security/KeyPair.hpp"
#include "./AttestedKeyPair.hpp"

namespace android::security
{
	// Fields
	
	AttestedKeyPair::AttestedKeyPair(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AttestedKeyPair::getAttestationRecord()
	{
		return __thiz.callObjectMethod(
			"getAttestationRecord",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AttestedKeyPair::getKeyPair()
	{
		return __thiz.callObjectMethod(
			"getKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
} // namespace android::security

