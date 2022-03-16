#include "./KeyStoreParameter.hpp"

namespace android::security
{
	// Fields
	
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

