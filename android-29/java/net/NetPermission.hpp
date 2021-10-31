#pragma once

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"


namespace java::net
{
	class NetPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		NetPermission(QAndroidJniObject obj);
		// Constructors
		NetPermission(jstring arg0);
		NetPermission(jstring arg0, jstring arg1);
		NetPermission() = default;
		
		// Methods
	};
} // namespace java::net

