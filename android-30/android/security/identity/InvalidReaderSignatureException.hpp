#pragma once

#include "./IdentityCredentialException.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class InvalidReaderSignatureException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidReaderSignatureException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidReaderSignatureException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
		
		// Constructors
		InvalidReaderSignatureException(JString arg0);
		InvalidReaderSignatureException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

