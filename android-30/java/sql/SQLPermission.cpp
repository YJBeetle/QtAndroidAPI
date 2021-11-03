#include "../../JString.hpp"
#include "./SQLPermission.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	SQLPermission::SQLPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	SQLPermission::SQLPermission(JString arg0)
		: java::security::BasicPermission(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLPermission::SQLPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::sql

