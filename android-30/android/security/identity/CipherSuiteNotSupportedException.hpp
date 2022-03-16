#pragma once

#include "./IdentityCredentialException.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class CipherSuiteNotSupportedException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CipherSuiteNotSupportedException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		CipherSuiteNotSupportedException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
		
		// Constructors
		CipherSuiteNotSupportedException(JString arg0);
		CipherSuiteNotSupportedException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

