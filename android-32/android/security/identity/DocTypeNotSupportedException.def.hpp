#pragma once

#include "./IdentityCredentialException.def.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class DocTypeNotSupportedException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DocTypeNotSupportedException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		DocTypeNotSupportedException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
		
		// Constructors
		DocTypeNotSupportedException(JString arg0);
		DocTypeNotSupportedException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

