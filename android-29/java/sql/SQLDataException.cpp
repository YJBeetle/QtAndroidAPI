#include "./SQLDataException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLDataException::SQLDataException(QJniObject obj) : java::sql::SQLNonTransientException(obj) {}
	
	// Constructors
	SQLDataException::SQLDataException()
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"()V"
		) {}
	SQLDataException::SQLDataException(jstring arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLDataException::SQLDataException(jthrowable arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLDataException::SQLDataException(jstring arg0, jstring arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLDataException::SQLDataException(jstring arg0, jthrowable arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLDataException::SQLDataException(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLDataException::SQLDataException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLDataException::SQLDataException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::sql

