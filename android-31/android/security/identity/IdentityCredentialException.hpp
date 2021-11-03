#pragma once

#include "../../../java/lang/Exception.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class IdentityCredentialException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IdentityCredentialException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		IdentityCredentialException(QAndroidJniObject obj);
		
		// Constructors
		IdentityCredentialException(JString arg0);
		IdentityCredentialException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

