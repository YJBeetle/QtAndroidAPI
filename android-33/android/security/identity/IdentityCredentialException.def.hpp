#pragma once

#include "../../../java/lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class IdentityCredentialException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IdentityCredentialException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		IdentityCredentialException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		IdentityCredentialException(JString arg0);
		IdentityCredentialException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

