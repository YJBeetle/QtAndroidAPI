#include "./SQLTimeoutException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLTimeoutException::SQLTimeoutException(QJniObject obj) : java::sql::SQLTransientException(obj) {}
	
	// Constructors
	SQLTimeoutException::SQLTimeoutException()
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"()V"
		) {}
	SQLTimeoutException::SQLTimeoutException(jstring arg0)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLTimeoutException::SQLTimeoutException(jthrowable arg0)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLTimeoutException::SQLTimeoutException(jstring arg0, jstring arg1)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLTimeoutException::SQLTimeoutException(jstring arg0, jthrowable arg1)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLTimeoutException::SQLTimeoutException(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLTimeoutException::SQLTimeoutException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLTimeoutException::SQLTimeoutException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::sql

