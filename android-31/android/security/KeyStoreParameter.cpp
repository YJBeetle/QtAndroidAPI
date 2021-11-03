#include "./KeyStoreParameter.hpp"

namespace android::security
{
	// Fields
	
	// QJniObject forward
	KeyStoreParameter::KeyStoreParameter(QJniObject obj) : JObject(obj) {}
	
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

