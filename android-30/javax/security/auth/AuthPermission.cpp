#include "./AuthPermission.hpp"

namespace javax::security::auth
{
	// Fields
	
	// QAndroidJniObject forward
	AuthPermission::AuthPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	AuthPermission::AuthPermission(jstring arg0)
		: java::security::BasicPermission(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	AuthPermission::AuthPermission(jstring arg0, jstring arg1)
		: java::security::BasicPermission(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace javax::security::auth

