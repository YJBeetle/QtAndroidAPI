#include "./KeyStoreParameter.hpp"

namespace android::security
{
	// Fields
	
	KeyStoreParameter::KeyStoreParameter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean KeyStoreParameter::isEncryptionRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isEncryptionRequired",
			"()Z"
		);
	}
} // namespace android::security

