#include "./KeyStore_CallbackHandlerProtection.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStore_CallbackHandlerProtection::KeyStore_CallbackHandlerProtection(QAndroidJniObject obj) : JObject(obj) {}
	
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

