#include "./KeyStoreParameter.hpp"

namespace android::security
{
	// Fields
	
	// QJniObject forward
	KeyStoreParameter::KeyStoreParameter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean KeyStoreParameter::isEncryptionRequired() const
	{
		return callMethod<jboolean>(
			"isEncryptionRequired",
			"()Z"
		);
	}
} // namespace android::security

