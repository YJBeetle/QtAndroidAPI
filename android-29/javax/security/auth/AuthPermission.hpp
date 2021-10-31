#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/BasicPermission.hpp"


namespace javax::security::auth
{
	class AuthPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		AuthPermission(QAndroidJniObject obj);
		// Constructors
		AuthPermission(jstring arg0);
		AuthPermission(jstring arg0, jstring arg1);
		AuthPermission() = default;
		
		// Methods
	};
} // namespace javax::security::auth

