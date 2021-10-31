#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Permission.hpp"
#include "./BasicPermission.hpp"


namespace java::security
{
	class SecurityPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		SecurityPermission(QAndroidJniObject obj);
		// Constructors
		SecurityPermission(jstring arg0);
		SecurityPermission(jstring arg0, jstring arg1);
		SecurityPermission() = default;
		
		// Methods
	};
} // namespace java::security

