#include "./KeyStoreParameter.hpp"

namespace android::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStoreParameter::KeyStoreParameter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean KeyStoreParameter::isEncryptionRequired()
	{
		return callMethod<jboolean>(
			"isEncryptionRequired",
			"()Z"
		);
	}
} // namespace android::security

