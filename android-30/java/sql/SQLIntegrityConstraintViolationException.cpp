#include "./SQLIntegrityConstraintViolationException.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(QAndroidJniObject obj) : java::sql::SQLNonTransientException(obj) {}
	
	// Constructors
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException()
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"()V"
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jthrowable arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring arg0, jthrowable arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::sql
