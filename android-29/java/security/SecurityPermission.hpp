#pragma once

#include "./BasicPermission.hpp"

class JString;

namespace java::security
{
	class SecurityPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecurityPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		SecurityPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
		
		// Constructors
		SecurityPermission(JString arg0);
		SecurityPermission(JString arg0, JString arg1);
		
		// Methods
	};
} // namespace java::security

