#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/BasicPermission.hpp"


namespace javax::net::ssl
{
	class SSLPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		SSLPermission(QAndroidJniObject obj);
		// Constructors
		SSLPermission(jstring arg0);
		SSLPermission(jstring arg0, jstring arg1);
		SSLPermission() = default;
		
		// Methods
	};
} // namespace javax::net::ssl

