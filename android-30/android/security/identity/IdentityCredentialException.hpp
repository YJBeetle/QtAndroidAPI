#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace android::security::identity
{
	class IdentityCredentialException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IdentityCredentialException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		IdentityCredentialException(QJniObject obj);
		
		// Constructors
		IdentityCredentialException(jstring arg0);
		IdentityCredentialException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

