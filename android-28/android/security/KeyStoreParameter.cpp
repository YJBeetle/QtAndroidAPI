#include "./KeyStoreParameter.hpp"

namespace android::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStoreParameter::KeyStoreParameter(QAndroidJniObject obj) : JObject(obj) {}
	
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

