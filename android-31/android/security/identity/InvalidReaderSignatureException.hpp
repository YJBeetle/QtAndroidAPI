#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"


namespace android::security::identity
{
	class InvalidReaderSignatureException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidReaderSignatureException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidReaderSignatureException(QJniObject obj);
		
		// Constructors
		InvalidReaderSignatureException(jstring arg0);
		InvalidReaderSignatureException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

