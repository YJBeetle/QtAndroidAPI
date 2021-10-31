#pragma once

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"


namespace java::sql
{
	class SQLPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		SQLPermission(QAndroidJniObject obj);
		// Constructors
		SQLPermission(jstring arg0);
		SQLPermission(jstring arg0, jstring arg1);
		SQLPermission() = default;
		
		// Methods
	};
} // namespace java::sql

