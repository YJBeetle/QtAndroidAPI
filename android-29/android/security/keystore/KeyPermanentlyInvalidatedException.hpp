#pragma once

#include "../../../java/security/InvalidKeyException.hpp"

class JString;
class JThrowable;

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
		KeyPermanentlyInvalidatedException(JString arg0);
		KeyPermanentlyInvalidatedException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

