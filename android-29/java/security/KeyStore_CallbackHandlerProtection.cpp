#include "./KeyStore_CallbackHandlerProtection.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyStore_CallbackHandlerProtection::KeyStore_CallbackHandlerProtection(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyStore_CallbackHandlerProtection::KeyStore_CallbackHandlerProtection(JObject arg0)
		: JObject(
			"java.security.KeyStore$CallbackHandlerProtection",
			"(Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject KeyStore_CallbackHandlerProtection::getCallbackHandler()
	{
		return callObjectMethod(
			"getCallbackHandler",
			"()Ljavax/security/auth/callback/CallbackHandler;"
		);
	}
} // namespace java::security

