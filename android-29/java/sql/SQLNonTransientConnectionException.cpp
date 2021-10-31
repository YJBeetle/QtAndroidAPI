#include "./SQLNonTransientConnectionException.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(QAndroidJniObject obj) : java::sql::SQLNonTransientException(obj) {}
	
	// Constructors
	SQLNonTransientConnectionException::SQLNonTransientConnectionException()
		: java::sql::SQLNonTransientException(
			"java.sql.SQLNonTransientConnectionException",
			"()V"
		) {}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jthrowable arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0, jstring arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0, jthrowable arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::sql

