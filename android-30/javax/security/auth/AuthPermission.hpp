#pragma once

#include "../../../JObject.hpp"
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/BasicPermission.hpp"


namespace javax::security::auth
{
	class AuthPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AuthPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		AuthPermission(QAndroidJniObject obj);
		
		// Constructors
		AuthPermission(jstring arg0);
		AuthPermission(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace javax::security::auth

