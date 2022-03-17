#pragma once

#include "../../../java/security/BasicPermission.def.hpp"

class JString;

namespace javax::security::auth
{
	class AuthPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AuthPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		AuthPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
		
		// Constructors
		AuthPermission(JString arg0);
		AuthPermission(JString arg0, JString arg1);
		
		// Methods
	};
} // namespace javax::security::auth

