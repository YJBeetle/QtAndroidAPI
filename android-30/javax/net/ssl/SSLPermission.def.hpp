#pragma once

#include "../../../java/security/BasicPermission.def.hpp"

class JString;

namespace javax::net::ssl
{
	class SSLPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		SSLPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
		
		// Constructors
		SSLPermission(JString arg0);
		SSLPermission(JString arg0, JString arg1);
		
		// Methods
	};
} // namespace javax::net::ssl

