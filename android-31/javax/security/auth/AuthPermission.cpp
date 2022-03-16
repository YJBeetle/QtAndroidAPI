#include "../../../JString.hpp"
#include "./AuthPermission.hpp"

namespace javax::security::auth
{
	// Fields
	
	// Constructors
	AuthPermission::AuthPermission(JString arg0)
		: java::security::BasicPermission(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	AuthPermission::AuthPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::auth

