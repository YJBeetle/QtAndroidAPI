#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/security/GeneralSecurityException.hpp"
#include "../../../java/security/KeyException.hpp"
#include "../../../java/security/InvalidKeyException.hpp"


namespace android::security::keystore
{
	class KeyPermanentlyInvalidatedException : public java::security::InvalidKeyException
	{
	public:
		// Fields
		
		KeyPermanentlyInvalidatedException(QAndroidJniObject obj);
		// Constructors
		KeyPermanentlyInvalidatedException();
		KeyPermanentlyInvalidatedException(jstring arg0);
		KeyPermanentlyInvalidatedException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

