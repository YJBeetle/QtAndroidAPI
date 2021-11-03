#pragma once

#include "./IdentityCredentialException.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class DocTypeNotSupportedException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DocTypeNotSupportedException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		DocTypeNotSupportedException(QJniObject obj);
		
		// Constructors
		DocTypeNotSupportedException(JString arg0);
		DocTypeNotSupportedException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

