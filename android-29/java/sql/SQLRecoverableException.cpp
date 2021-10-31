#include "./SQLRecoverableException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLRecoverableException::SQLRecoverableException(QJniObject obj) : java::sql::SQLException(obj) {}
	
	// Constructors
	SQLRecoverableException::SQLRecoverableException()
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"()V"
		) {}
	SQLRecoverableException::SQLRecoverableException(jstring arg0)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLRecoverableException::SQLRecoverableException(jthrowable arg0)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLRecoverableException::SQLRecoverableException(jstring arg0, jstring arg1)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLRecoverableException::SQLRecoverableException(jstring arg0, jthrowable arg1)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLRecoverableException::SQLRecoverableException(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLRecoverableException::SQLRecoverableException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLRecoverableException::SQLRecoverableException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::sql

