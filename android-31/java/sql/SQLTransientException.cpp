#include "./SQLTransientException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLTransientException::SQLTransientException(QJniObject obj) : java::sql::SQLException(obj) {}
	
	// Constructors
	SQLTransientException::SQLTransientException()
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"()V"
		) {}
	SQLTransientException::SQLTransientException(jstring arg0)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLTransientException::SQLTransientException(jthrowable arg0)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLTransientException::SQLTransientException(jstring arg0, jstring arg1)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLTransientException::SQLTransientException(jstring arg0, jthrowable arg1)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLTransientException::SQLTransientException(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLTransientException::SQLTransientException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLTransientException::SQLTransientException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::sql

