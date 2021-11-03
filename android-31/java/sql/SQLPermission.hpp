#pragma once

#include "../security/BasicPermission.hpp"

class JString;

namespace java::sql
{
	class SQLPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		SQLPermission(QJniObject obj);
		
		// Constructors
		SQLPermission(JString arg0);
		SQLPermission(JString arg0, JString arg1);
		
		// Methods
	};
} // namespace java::sql

