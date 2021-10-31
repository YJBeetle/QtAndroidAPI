#include "./KeyStore_CallbackHandlerProtection.hpp"

namespace java::security
{
	// Fields
	
	KeyStore_CallbackHandlerProtection::KeyStore_CallbackHandlerProtection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyStore_CallbackHandlerProtection::KeyStore_CallbackHandlerProtection(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$CallbackHandlerProtection",
			"(Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject KeyStore_CallbackHandlerProtection::getCallbackHandler()
	{
		return __thiz.callObjectMethod(
			"getCallbackHandler",
			"()Ljavax/security/auth/callback/CallbackHandler;"
		);
	}
} // namespace java::security

