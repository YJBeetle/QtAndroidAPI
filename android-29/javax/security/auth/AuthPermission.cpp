#include "./AuthPermission.hpp"

namespace javax::security::auth
{
	// Fields
	
	AuthPermission::AuthPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AuthPermission::AuthPermission(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AuthPermission::AuthPermission(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace javax::security::auth

