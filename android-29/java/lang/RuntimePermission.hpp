#pragma once

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"


namespace java::lang
{
	class RuntimePermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		RuntimePermission(QAndroidJniObject obj);
		// Constructors
		RuntimePermission(jstring arg0);
		RuntimePermission(jstring arg0, jstring arg1);
		RuntimePermission() = default;
		
		// Methods
	};
} // namespace java::lang

