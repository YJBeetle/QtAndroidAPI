#include "./SQLSyntaxErrorException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLSyntaxErrorException::SQLSyntaxErrorException(QJniObject obj) : java::sql::SQLNonTransientException(obj) {}
	
	// Constructors
	SQLSyntaxErrorException::SQLSyntaxErrorException()
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"()V"
		) {}
	SQLSyntaxErrorException::SQLSyntaxErrorException(jstring arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLSyntaxErrorException::SQLSyntaxErrorException(jthrowable arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLSyntaxErrorException::SQLSyntaxErrorException(jstring arg0, jstring arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLSyntaxErrorException::SQLSyntaxErrorException(jstring arg0, jthrowable arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLSyntaxErrorException::SQLSyntaxErrorException(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLSyntaxErrorException::SQLSyntaxErrorException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLSyntaxErrorException::SQLSyntaxErrorException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::sql

