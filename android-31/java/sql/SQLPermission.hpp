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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		SQLPermission(QAndroidJniObject obj);
		
		// Constructors
		SQLPermission(jstring arg0);
		SQLPermission(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace java::sql

