#include "./SQLInvalidAuthorizationSpecException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(QJniObject obj) : java::sql::SQLNonTransientException(obj) {}
	
	// Constructors
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException()
		: java::sql::SQLNonTransientException(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"()V"
		) {}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jthrowable arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0, jthrowable arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::sql

