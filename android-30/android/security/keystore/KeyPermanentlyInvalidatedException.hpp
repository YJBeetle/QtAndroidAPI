#pragma once

#include "../../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyPermanentlyInvalidatedException(const char *className, const char *sig, Ts...agv) : java::security::InvalidKeyException(className, sig, std::forward<Ts>(agv)...) {}
		KeyPermanentlyInvalidatedException(QJniObject obj);
		
		// Constructors
		KeyPermanentlyInvalidatedException();
		KeyPermanentlyInvalidatedException(jstring arg0);
		KeyPermanentlyInvalidatedException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

