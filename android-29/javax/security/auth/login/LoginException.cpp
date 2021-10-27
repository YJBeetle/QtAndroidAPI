#include "./LoginException.hpp"

namespace javax::security::auth::login
{
	// Fields
	
	LoginException::LoginException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LoginException::LoginException()
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.login.LoginException",
			"()V"
		);
	}
	LoginException::LoginException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.login.LoginException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	LoginException::LoginException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.login.LoginException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace javax::security::auth::login

