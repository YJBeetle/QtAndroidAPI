#include "./SQLTransactionRollbackException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLTransactionRollbackException::SQLTransactionRollbackException(QJniObject obj) : java::sql::SQLTransientException(obj) {}
	
	// Constructors
	SQLTransactionRollbackException::SQLTransactionRollbackException()
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"()V"
		) {}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring arg0)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jthrowable arg0)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring arg0, jstring arg1)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring arg0, jthrowable arg1)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::sql

