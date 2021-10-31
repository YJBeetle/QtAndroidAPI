#include "./SQLNonTransientException.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	SQLNonTransientException::SQLNonTransientException(QAndroidJniObject obj) : java::sql::SQLException(obj) {}
	
	// Constructors
	SQLNonTransientException::SQLNonTransientException()
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"()V"
		) {}
	SQLNonTransientException::SQLNonTransientException(jstring arg0)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLNonTransientException::SQLNonTransientException(jthrowable arg0)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLNonTransientException::SQLNonTransientException(jstring arg0, jstring arg1)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLNonTransientException::SQLNonTransientException(jstring arg0, jthrowable arg1)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLNonTransientException::SQLNonTransientException(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLNonTransientException::SQLNonTransientException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLNonTransientException::SQLNonTransientException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::sql

