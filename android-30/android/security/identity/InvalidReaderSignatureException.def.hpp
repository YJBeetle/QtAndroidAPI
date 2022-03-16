#pragma once

#include "./IdentityCredentialException.def.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class InvalidReaderSignatureException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidReaderSignatureException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidReaderSignatureException(QJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
		
		// Constructors
		InvalidReaderSignatureException(JString arg0);
		InvalidReaderSignatureException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

