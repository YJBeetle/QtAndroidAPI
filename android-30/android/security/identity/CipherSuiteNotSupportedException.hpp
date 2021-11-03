#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"


namespace android::security::identity
{
	class CipherSuiteNotSupportedException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CipherSuiteNotSupportedException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		CipherSuiteNotSupportedException(QJniObject obj);
		
		// Constructors
		CipherSuiteNotSupportedException(jstring arg0);
		CipherSuiteNotSupportedException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

