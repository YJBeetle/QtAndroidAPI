#include "./KeyStore_CallbackHandlerProtection.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStore_CallbackHandlerProtection::KeyStore_CallbackHandlerProtection(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyStore_CallbackHandlerProtection::KeyStore_CallbackHandlerProtection(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.security.KeyStore$CallbackHandlerProtection",
			"(Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject KeyStore_CallbackHandlerProtection::getCallbackHandler()
	{
		return callObjectMethod(
			"getCallbackHandler",
			"()Ljavax/security/auth/callback/CallbackHandler;"
		);
	}
} // namespace java::security

