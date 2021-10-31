#include "./KeyStore_CallbackHandlerProtection.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyStore_CallbackHandlerProtection::KeyStore_CallbackHandlerProtection(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyStore_CallbackHandlerProtection::KeyStore_CallbackHandlerProtection(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.security.KeyStore$CallbackHandlerProtection",
			"(Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.object()
		) {}
	
	// Methods
	__JniBaseClass KeyStore_CallbackHandlerProtection::getCallbackHandler()
	{
		return callObjectMethod(
			"getCallbackHandler",
			"()Ljavax/security/auth/callback/CallbackHandler;"
		);
	}
} // namespace java::security

