#include "../../javax/security/auth/Subject.hpp"
#include "./AuthProvider.hpp"

namespace java::security
{
	// Fields
	
	AuthProvider::AuthProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void AuthProvider::login(javax::security::auth::Subject arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"login",
			"(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AuthProvider::logout()
	{
		__thiz.callMethod<void>(
			"logout",
			"()V"
		);
	}
	void AuthProvider::setCallbackHandler(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCallbackHandler",
			"(Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::security

