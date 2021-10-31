#include "./SQLPermission.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLPermission::SQLPermission(QJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	SQLPermission::SQLPermission(jstring arg0)
		: java::security::BasicPermission(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLPermission::SQLPermission(jstring arg0, jstring arg1)
		: java::security::BasicPermission(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::sql

